/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.generators.cpp.s3control;

import com.amazonaws.util.awsclientgenerator.domainmodels.SdkFileEntry;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.cpp.CppViewHelper;
import com.amazonaws.util.awsclientgenerator.generators.cpp.RestXmlCppClientGenerator;
import org.apache.velocity.Template;
import org.apache.velocity.VelocityContext;

import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class S3ControlRestXmlCppClientGenerator  extends RestXmlCppClientGenerator {

    private static Set<String> opsThatDoNotExtractArnFromUri = new HashSet<>();

    static {
        opsThatDoNotExtractArnFromUri.add("CreateBucket");
    }

    public S3ControlRestXmlCppClientGenerator() throws Exception {
        super();
    }

    @Override
    public SdkFileEntry[] generateSourceFiles(ServiceModel serviceModel) throws Exception {

        serviceModel.getOperations().values().stream()
                .filter(operationEntry -> operationEntry.getRequest().getShape().hasMember("AccountId"))
                .forEach(operationEntry -> {
                    operationEntry.setHasAccountIdMember(true);
                    operationEntry.setAccountIdMemberName("AccountId");
                });

        serviceModel.getOperations().values().stream()
                .filter(operationEntry -> operationEntry.getRequest().getShape().hasMember("OutpostId"))
                .forEach(operationEntry -> {
                    operationEntry.setHasOutpostIdMember(true);
                    operationEntry.setOutpostIdMemberName("OutpostId");
                });

        serviceModel.getOperations().values().stream()
                .filter(operationEntry -> !opsThatDoNotExtractArnFromUri.contains(operationEntry.getName()) && operationEntry.getRequest().getShape().getMembers() != null)
                .forEach(operationEntry -> operationEntry.getRequest().getShape().getMembers().entrySet().stream().filter(member ->
                    member.getValue().isUsedForUri() && member.getValue().getLocationName().equals("name")).forEach(member -> {
                        operationEntry.setArnEndpointAllowed(true);
                        operationEntry.setArnEndpointMemberName(member.getKey());
                        operationEntry.setArnLocation("uri");
                        operationEntry.setHasAccountIdInArn(true);
                        operationEntry.setHasOutpostIdInArn(true);
                    }));

        // Customization for ListAccessPoints. Its parameter bucket could be an ARN, and it's in the query string.
        serviceModel.getOperations().values().stream()
                .filter(operationEntry -> operationEntry.getName().equals("ListAccessPoints"))
                .forEach(operationEntry -> {
                    operationEntry.setArnEndpointAllowed(true);
                    operationEntry.setArnEndpointMemberName("Bucket");
                    operationEntry.setArnLocation("querystring");
                    operationEntry.setHasAccountIdInArn(true);
                    operationEntry.setHasOutpostIdInArn(true);
                });

        // Customization for CreateAccessPoint. Its parameter bucket could be and ARN, and it's in the body.
        serviceModel.getOperations().values().stream()
                .filter(operationEntry -> operationEntry.getName().equals("CreateAccessPoint"))
                .forEach(operationEntry -> {
                    operationEntry.setArnEndpointAllowed(true);
                    operationEntry.setArnEndpointMemberName("Bucket");
                    operationEntry.setArnLocation("body");
                    operationEntry.setHasAccountIdInArn(true);
                    operationEntry.setHasOutpostIdInArn(true);
                });

        return super.generateSourceFiles(serviceModel);
    }

    @Override
    protected SdkFileEntry generateClientHeaderFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3control/S3ControlClientHeader.vm");

        VelocityContext context = createContext(serviceModel);
        context.put("CppViewHelper", CppViewHelper.class);

        String fileName = String.format("include/aws/%s/%sClient.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected List<SdkFileEntry> generateClientSourceFile(final List<ServiceModel> serviceModels) throws Exception {
        List<SdkFileEntry> sourceFiles = new ArrayList<>();
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3control/S3ControlClientSource.vm");
        for (int i = 0; i < serviceModels.size(); i++) {
            VelocityContext context = createContext(serviceModels.get(i));
            context.put("CppViewHelper", CppViewHelper.class);

            final String fileName;
            if (i == 0) {
                context.put("onlyGeneratedOperations", false);
                fileName = String.format("source/%sClient.cpp", serviceModels.get(i).getMetadata().getClassNamePrefix());
            } else {
                context.put("onlyGeneratedOperations", true);
                fileName = String.format("source/%sClient%d.cpp", serviceModels.get(i).getMetadata().getClassNamePrefix(), i);
            }

            sourceFiles.add(makeFile(template, context, fileName, true));
        }
        return sourceFiles;
    }

    @Override
    protected SdkFileEntry generateRegionHeaderFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3control/S3ControlEndpointEnumHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("exportValue", String.format("AWS_%s_API", serviceModel.getMetadata().getClassNamePrefix().toUpperCase()));

        String fileName = String.format("include/aws/%s/%sEndpoint.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateRegionSourceFile(ServiceModel serviceModel) throws Exception {

        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3control/S3ControlEndpointEnumSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);

        String fileName = String.format("source/%sEndpoint.cpp", serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateARNHeaderFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3control/S3ControlARNHeader.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);
        context.put("exportValue", String.format("AWS_%s_API", serviceModel.getMetadata().getClassNamePrefix().toUpperCase()));

        String fileName = String.format("include/aws/%s/%sARN.h", serviceModel.getMetadata().getProjectName(),
                serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected SdkFileEntry generateARNSourceFile(final ServiceModel serviceModel) throws Exception {
        Template template = velocityEngine.getTemplate("/com/amazonaws/util/awsclientgenerator/velocity/cpp/s3control/S3ControlARNSource.vm", StandardCharsets.UTF_8.name());

        VelocityContext context = createContext(serviceModel);

        String fileName = String.format("source/%sARN.cpp", serviceModel.getMetadata().getClassNamePrefix());

        return makeFile(template, context, fileName, true);
    }

    @Override
    protected void addRequestIdToResults(final ServiceModel serviceModel) {
        addToAllResultsShape(serviceModel, "requestId", "RequestId", "x-amz-request-id", "AWS Request Id value");
        addToAllResultsShape(serviceModel, "hostId", "HostId", "x-amz-id-2", "x-amz-id-2 header value, also known as Host Id");
    }
}

