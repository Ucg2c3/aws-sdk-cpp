﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/HeadBucketResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Crt::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

HeadBucketResult::HeadBucketResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

HeadBucketResult& HeadBucketResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& bucketArnIter = headers.find("x-amz-bucket-arn");
  if(bucketArnIter != headers.end())
  {
    m_bucketArn = bucketArnIter->second;
    m_bucketArnHasBeenSet = true;
  }

  const auto& bucketLocationTypeIter = headers.find("x-amz-bucket-location-type");
  if(bucketLocationTypeIter != headers.end())
  {
    m_bucketLocationType = LocationTypeMapper::GetLocationTypeForName(bucketLocationTypeIter->second);
    m_bucketLocationTypeHasBeenSet = true;
  }

  const auto& bucketLocationNameIter = headers.find("x-amz-bucket-location-name");
  if(bucketLocationNameIter != headers.end())
  {
    m_bucketLocationName = bucketLocationNameIter->second;
    m_bucketLocationNameHasBeenSet = true;
  }

  const auto& bucketRegionIter = headers.find("x-amz-bucket-region");
  if(bucketRegionIter != headers.end())
  {
    m_bucketRegion = bucketRegionIter->second;
    m_bucketRegionHasBeenSet = true;
  }

  const auto& accessPointAliasIter = headers.find("x-amz-access-point-alias");
  if(accessPointAliasIter != headers.end())
  {
    m_accessPointAlias = StringUtils::ConvertToBool(accessPointAliasIter->second.c_str());
    m_accessPointAliasHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amz-request-id");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
