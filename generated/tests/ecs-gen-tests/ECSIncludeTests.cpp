/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/ecs/ECSClient.h>
#include <aws/ecs/ECSEndpointProvider.h>
#include <aws/ecs/ECSEndpointRules.h>
#include <aws/ecs/ECSErrorMarshaller.h>
#include <aws/ecs/ECSErrors.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECSServiceClientModel.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/AdvancedConfiguration.h>
#include <aws/ecs/model/AgentUpdateStatus.h>
#include <aws/ecs/model/ApplicationProtocol.h>
#include <aws/ecs/model/AssignPublicIp.h>
#include <aws/ecs/model/Attachment.h>
#include <aws/ecs/model/AttachmentStateChange.h>
#include <aws/ecs/model/Attribute.h>
#include <aws/ecs/model/AutoScalingGroupProvider.h>
#include <aws/ecs/model/AutoScalingGroupProviderUpdate.h>
#include <aws/ecs/model/AvailabilityZoneRebalancing.h>
#include <aws/ecs/model/AwsVpcConfiguration.h>
#include <aws/ecs/model/CPUArchitecture.h>
#include <aws/ecs/model/CapacityProvider.h>
#include <aws/ecs/model/CapacityProviderField.h>
#include <aws/ecs/model/CapacityProviderStatus.h>
#include <aws/ecs/model/CapacityProviderStrategyItem.h>
#include <aws/ecs/model/CapacityProviderUpdateStatus.h>
#include <aws/ecs/model/Cluster.h>
#include <aws/ecs/model/ClusterConfiguration.h>
#include <aws/ecs/model/ClusterField.h>
#include <aws/ecs/model/ClusterServiceConnectDefaults.h>
#include <aws/ecs/model/ClusterServiceConnectDefaultsRequest.h>
#include <aws/ecs/model/ClusterSetting.h>
#include <aws/ecs/model/ClusterSettingName.h>
#include <aws/ecs/model/Compatibility.h>
#include <aws/ecs/model/ConflictException.h>
#include <aws/ecs/model/Connectivity.h>
#include <aws/ecs/model/Container.h>
#include <aws/ecs/model/ContainerCondition.h>
#include <aws/ecs/model/ContainerDefinition.h>
#include <aws/ecs/model/ContainerDependency.h>
#include <aws/ecs/model/ContainerImage.h>
#include <aws/ecs/model/ContainerInstance.h>
#include <aws/ecs/model/ContainerInstanceField.h>
#include <aws/ecs/model/ContainerInstanceHealthStatus.h>
#include <aws/ecs/model/ContainerInstanceStatus.h>
#include <aws/ecs/model/ContainerOverride.h>
#include <aws/ecs/model/ContainerRestartPolicy.h>
#include <aws/ecs/model/ContainerStateChange.h>
#include <aws/ecs/model/CreateCapacityProviderRequest.h>
#include <aws/ecs/model/CreateCapacityProviderResult.h>
#include <aws/ecs/model/CreateClusterRequest.h>
#include <aws/ecs/model/CreateClusterResult.h>
#include <aws/ecs/model/CreateServiceRequest.h>
#include <aws/ecs/model/CreateServiceResult.h>
#include <aws/ecs/model/CreateTaskSetRequest.h>
#include <aws/ecs/model/CreateTaskSetResult.h>
#include <aws/ecs/model/CreatedAt.h>
#include <aws/ecs/model/DeleteAccountSettingRequest.h>
#include <aws/ecs/model/DeleteAccountSettingResult.h>
#include <aws/ecs/model/DeleteAttributesRequest.h>
#include <aws/ecs/model/DeleteAttributesResult.h>
#include <aws/ecs/model/DeleteCapacityProviderRequest.h>
#include <aws/ecs/model/DeleteCapacityProviderResult.h>
#include <aws/ecs/model/DeleteClusterRequest.h>
#include <aws/ecs/model/DeleteClusterResult.h>
#include <aws/ecs/model/DeleteServiceRequest.h>
#include <aws/ecs/model/DeleteServiceResult.h>
#include <aws/ecs/model/DeleteTaskDefinitionsRequest.h>
#include <aws/ecs/model/DeleteTaskDefinitionsResult.h>
#include <aws/ecs/model/DeleteTaskSetRequest.h>
#include <aws/ecs/model/DeleteTaskSetResult.h>
#include <aws/ecs/model/Deployment.h>
#include <aws/ecs/model/DeploymentAlarms.h>
#include <aws/ecs/model/DeploymentCircuitBreaker.h>
#include <aws/ecs/model/DeploymentConfiguration.h>
#include <aws/ecs/model/DeploymentController.h>
#include <aws/ecs/model/DeploymentControllerType.h>
#include <aws/ecs/model/DeploymentEphemeralStorage.h>
#include <aws/ecs/model/DeploymentLifecycleHook.h>
#include <aws/ecs/model/DeploymentLifecycleHookStage.h>
#include <aws/ecs/model/DeploymentRolloutState.h>
#include <aws/ecs/model/DeploymentStrategy.h>
#include <aws/ecs/model/DeregisterContainerInstanceRequest.h>
#include <aws/ecs/model/DeregisterContainerInstanceResult.h>
#include <aws/ecs/model/DeregisterTaskDefinitionRequest.h>
#include <aws/ecs/model/DeregisterTaskDefinitionResult.h>
#include <aws/ecs/model/DescribeCapacityProvidersRequest.h>
#include <aws/ecs/model/DescribeCapacityProvidersResult.h>
#include <aws/ecs/model/DescribeClustersRequest.h>
#include <aws/ecs/model/DescribeClustersResult.h>
#include <aws/ecs/model/DescribeContainerInstancesRequest.h>
#include <aws/ecs/model/DescribeContainerInstancesResult.h>
#include <aws/ecs/model/DescribeServiceDeploymentsRequest.h>
#include <aws/ecs/model/DescribeServiceDeploymentsResult.h>
#include <aws/ecs/model/DescribeServiceRevisionsRequest.h>
#include <aws/ecs/model/DescribeServiceRevisionsResult.h>
#include <aws/ecs/model/DescribeServicesRequest.h>
#include <aws/ecs/model/DescribeServicesResult.h>
#include <aws/ecs/model/DescribeTaskDefinitionRequest.h>
#include <aws/ecs/model/DescribeTaskDefinitionResult.h>
#include <aws/ecs/model/DescribeTaskSetsRequest.h>
#include <aws/ecs/model/DescribeTaskSetsResult.h>
#include <aws/ecs/model/DescribeTasksRequest.h>
#include <aws/ecs/model/DescribeTasksResult.h>
#include <aws/ecs/model/DesiredStatus.h>
#include <aws/ecs/model/Device.h>
#include <aws/ecs/model/DeviceCgroupPermission.h>
#include <aws/ecs/model/DiscoverPollEndpointRequest.h>
#include <aws/ecs/model/DiscoverPollEndpointResult.h>
#include <aws/ecs/model/DockerVolumeConfiguration.h>
#include <aws/ecs/model/EBSResourceType.h>
#include <aws/ecs/model/EBSTagSpecification.h>
#include <aws/ecs/model/EFSAuthorizationConfig.h>
#include <aws/ecs/model/EFSAuthorizationConfigIAM.h>
#include <aws/ecs/model/EFSTransitEncryption.h>
#include <aws/ecs/model/EFSVolumeConfiguration.h>
#include <aws/ecs/model/EnvironmentFile.h>
#include <aws/ecs/model/EnvironmentFileType.h>
#include <aws/ecs/model/EphemeralStorage.h>
#include <aws/ecs/model/ExecuteCommandConfiguration.h>
#include <aws/ecs/model/ExecuteCommandLogConfiguration.h>
#include <aws/ecs/model/ExecuteCommandLogging.h>
#include <aws/ecs/model/ExecuteCommandRequest.h>
#include <aws/ecs/model/ExecuteCommandResult.h>
#include <aws/ecs/model/FSxWindowsFileServerAuthorizationConfig.h>
#include <aws/ecs/model/FSxWindowsFileServerVolumeConfiguration.h>
#include <aws/ecs/model/Failure.h>
#include <aws/ecs/model/FirelensConfiguration.h>
#include <aws/ecs/model/FirelensConfigurationType.h>
#include <aws/ecs/model/GetTaskProtectionRequest.h>
#include <aws/ecs/model/GetTaskProtectionResult.h>
#include <aws/ecs/model/HealthCheck.h>
#include <aws/ecs/model/HealthStatus.h>
#include <aws/ecs/model/HostEntry.h>
#include <aws/ecs/model/HostVolumeProperties.h>
#include <aws/ecs/model/InferenceAccelerator.h>
#include <aws/ecs/model/InferenceAcceleratorOverride.h>
#include <aws/ecs/model/InstanceHealthCheckResult.h>
#include <aws/ecs/model/InstanceHealthCheckState.h>
#include <aws/ecs/model/InstanceHealthCheckType.h>
#include <aws/ecs/model/IpcMode.h>
#include <aws/ecs/model/KernelCapabilities.h>
#include <aws/ecs/model/KeyValuePair.h>
#include <aws/ecs/model/LaunchType.h>
#include <aws/ecs/model/LinuxParameters.h>
#include <aws/ecs/model/ListAccountSettingsRequest.h>
#include <aws/ecs/model/ListAccountSettingsResult.h>
#include <aws/ecs/model/ListAttributesRequest.h>
#include <aws/ecs/model/ListAttributesResult.h>
#include <aws/ecs/model/ListClustersRequest.h>
#include <aws/ecs/model/ListClustersResult.h>
#include <aws/ecs/model/ListContainerInstancesRequest.h>
#include <aws/ecs/model/ListContainerInstancesResult.h>
#include <aws/ecs/model/ListServiceDeploymentsRequest.h>
#include <aws/ecs/model/ListServiceDeploymentsResult.h>
#include <aws/ecs/model/ListServicesByNamespaceRequest.h>
#include <aws/ecs/model/ListServicesByNamespaceResult.h>
#include <aws/ecs/model/ListServicesRequest.h>
#include <aws/ecs/model/ListServicesResult.h>
#include <aws/ecs/model/ListTagsForResourceRequest.h>
#include <aws/ecs/model/ListTagsForResourceResult.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesRequest.h>
#include <aws/ecs/model/ListTaskDefinitionFamiliesResult.h>
#include <aws/ecs/model/ListTaskDefinitionsRequest.h>
#include <aws/ecs/model/ListTaskDefinitionsResult.h>
#include <aws/ecs/model/ListTasksRequest.h>
#include <aws/ecs/model/ListTasksResult.h>
#include <aws/ecs/model/LoadBalancer.h>
#include <aws/ecs/model/LogConfiguration.h>
#include <aws/ecs/model/LogDriver.h>
#include <aws/ecs/model/ManagedAgent.h>
#include <aws/ecs/model/ManagedAgentName.h>
#include <aws/ecs/model/ManagedAgentStateChange.h>
#include <aws/ecs/model/ManagedDraining.h>
#include <aws/ecs/model/ManagedScaling.h>
#include <aws/ecs/model/ManagedScalingStatus.h>
#include <aws/ecs/model/ManagedStorageConfiguration.h>
#include <aws/ecs/model/ManagedTerminationProtection.h>
#include <aws/ecs/model/MountPoint.h>
#include <aws/ecs/model/NetworkBinding.h>
#include <aws/ecs/model/NetworkConfiguration.h>
#include <aws/ecs/model/NetworkInterface.h>
#include <aws/ecs/model/NetworkMode.h>
#include <aws/ecs/model/OSFamily.h>
#include <aws/ecs/model/PidMode.h>
#include <aws/ecs/model/PlacementConstraint.h>
#include <aws/ecs/model/PlacementConstraintType.h>
#include <aws/ecs/model/PlacementStrategy.h>
#include <aws/ecs/model/PlacementStrategyType.h>
#include <aws/ecs/model/PlatformDevice.h>
#include <aws/ecs/model/PlatformDeviceType.h>
#include <aws/ecs/model/PortMapping.h>
#include <aws/ecs/model/PropagateTags.h>
#include <aws/ecs/model/ProtectedTask.h>
#include <aws/ecs/model/ProxyConfiguration.h>
#include <aws/ecs/model/ProxyConfigurationType.h>
#include <aws/ecs/model/PutAccountSettingDefaultRequest.h>
#include <aws/ecs/model/PutAccountSettingDefaultResult.h>
#include <aws/ecs/model/PutAccountSettingRequest.h>
#include <aws/ecs/model/PutAccountSettingResult.h>
#include <aws/ecs/model/PutAttributesRequest.h>
#include <aws/ecs/model/PutAttributesResult.h>
#include <aws/ecs/model/PutClusterCapacityProvidersRequest.h>
#include <aws/ecs/model/PutClusterCapacityProvidersResult.h>
#include <aws/ecs/model/RegisterContainerInstanceRequest.h>
#include <aws/ecs/model/RegisterContainerInstanceResult.h>
#include <aws/ecs/model/RegisterTaskDefinitionRequest.h>
#include <aws/ecs/model/RegisterTaskDefinitionResult.h>
#include <aws/ecs/model/RepositoryCredentials.h>
#include <aws/ecs/model/ResolvedConfiguration.h>
#include <aws/ecs/model/Resource.h>
#include <aws/ecs/model/ResourceRequirement.h>
#include <aws/ecs/model/ResourceType.h>
#include <aws/ecs/model/Rollback.h>
#include <aws/ecs/model/RunTaskRequest.h>
#include <aws/ecs/model/RunTaskResult.h>
#include <aws/ecs/model/RuntimePlatform.h>
#include <aws/ecs/model/Scale.h>
#include <aws/ecs/model/ScaleUnit.h>
#include <aws/ecs/model/SchedulingStrategy.h>
#include <aws/ecs/model/Scope.h>
#include <aws/ecs/model/Secret.h>
#include <aws/ecs/model/Service.h>
#include <aws/ecs/model/ServiceConnectClientAlias.h>
#include <aws/ecs/model/ServiceConnectConfiguration.h>
#include <aws/ecs/model/ServiceConnectService.h>
#include <aws/ecs/model/ServiceConnectServiceResource.h>
#include <aws/ecs/model/ServiceConnectTestTrafficHeaderMatchRules.h>
#include <aws/ecs/model/ServiceConnectTestTrafficHeaderRules.h>
#include <aws/ecs/model/ServiceConnectTestTrafficRules.h>
#include <aws/ecs/model/ServiceConnectTlsCertificateAuthority.h>
#include <aws/ecs/model/ServiceConnectTlsConfiguration.h>
#include <aws/ecs/model/ServiceDeployment.h>
#include <aws/ecs/model/ServiceDeploymentAlarms.h>
#include <aws/ecs/model/ServiceDeploymentBrief.h>
#include <aws/ecs/model/ServiceDeploymentCircuitBreaker.h>
#include <aws/ecs/model/ServiceDeploymentLifecycleStage.h>
#include <aws/ecs/model/ServiceDeploymentRollbackMonitorsStatus.h>
#include <aws/ecs/model/ServiceDeploymentStatus.h>
#include <aws/ecs/model/ServiceEvent.h>
#include <aws/ecs/model/ServiceField.h>
#include <aws/ecs/model/ServiceManagedEBSVolumeConfiguration.h>
#include <aws/ecs/model/ServiceRegistry.h>
#include <aws/ecs/model/ServiceRevision.h>
#include <aws/ecs/model/ServiceRevisionLoadBalancer.h>
#include <aws/ecs/model/ServiceRevisionSummary.h>
#include <aws/ecs/model/ServiceVolumeConfiguration.h>
#include <aws/ecs/model/Session.h>
#include <aws/ecs/model/Setting.h>
#include <aws/ecs/model/SettingName.h>
#include <aws/ecs/model/SettingType.h>
#include <aws/ecs/model/SortOrder.h>
#include <aws/ecs/model/StabilityStatus.h>
#include <aws/ecs/model/StartTaskRequest.h>
#include <aws/ecs/model/StartTaskResult.h>
#include <aws/ecs/model/StopServiceDeploymentRequest.h>
#include <aws/ecs/model/StopServiceDeploymentResult.h>
#include <aws/ecs/model/StopServiceDeploymentStopType.h>
#include <aws/ecs/model/StopTaskRequest.h>
#include <aws/ecs/model/StopTaskResult.h>
#include <aws/ecs/model/SubmitAttachmentStateChangesRequest.h>
#include <aws/ecs/model/SubmitAttachmentStateChangesResult.h>
#include <aws/ecs/model/SubmitContainerStateChangeRequest.h>
#include <aws/ecs/model/SubmitContainerStateChangeResult.h>
#include <aws/ecs/model/SubmitTaskStateChangeRequest.h>
#include <aws/ecs/model/SubmitTaskStateChangeResult.h>
#include <aws/ecs/model/SystemControl.h>
#include <aws/ecs/model/Tag.h>
#include <aws/ecs/model/TagResourceRequest.h>
#include <aws/ecs/model/TagResourceResult.h>
#include <aws/ecs/model/TargetType.h>
#include <aws/ecs/model/Task.h>
#include <aws/ecs/model/TaskDefinition.h>
#include <aws/ecs/model/TaskDefinitionFamilyStatus.h>
#include <aws/ecs/model/TaskDefinitionField.h>
#include <aws/ecs/model/TaskDefinitionPlacementConstraint.h>
#include <aws/ecs/model/TaskDefinitionPlacementConstraintType.h>
#include <aws/ecs/model/TaskDefinitionStatus.h>
#include <aws/ecs/model/TaskEphemeralStorage.h>
#include <aws/ecs/model/TaskField.h>
#include <aws/ecs/model/TaskFilesystemType.h>
#include <aws/ecs/model/TaskManagedEBSVolumeConfiguration.h>
#include <aws/ecs/model/TaskManagedEBSVolumeTerminationPolicy.h>
#include <aws/ecs/model/TaskOverride.h>
#include <aws/ecs/model/TaskSet.h>
#include <aws/ecs/model/TaskSetField.h>
#include <aws/ecs/model/TaskStopCode.h>
#include <aws/ecs/model/TaskVolumeConfiguration.h>
#include <aws/ecs/model/TimeoutConfiguration.h>
#include <aws/ecs/model/Tmpfs.h>
#include <aws/ecs/model/TransportProtocol.h>
#include <aws/ecs/model/Ulimit.h>
#include <aws/ecs/model/UlimitName.h>
#include <aws/ecs/model/UntagResourceRequest.h>
#include <aws/ecs/model/UntagResourceResult.h>
#include <aws/ecs/model/UpdateCapacityProviderRequest.h>
#include <aws/ecs/model/UpdateCapacityProviderResult.h>
#include <aws/ecs/model/UpdateClusterRequest.h>
#include <aws/ecs/model/UpdateClusterResult.h>
#include <aws/ecs/model/UpdateClusterSettingsRequest.h>
#include <aws/ecs/model/UpdateClusterSettingsResult.h>
#include <aws/ecs/model/UpdateContainerAgentRequest.h>
#include <aws/ecs/model/UpdateContainerAgentResult.h>
#include <aws/ecs/model/UpdateContainerInstancesStateRequest.h>
#include <aws/ecs/model/UpdateContainerInstancesStateResult.h>
#include <aws/ecs/model/UpdateServicePrimaryTaskSetRequest.h>
#include <aws/ecs/model/UpdateServicePrimaryTaskSetResult.h>
#include <aws/ecs/model/UpdateServiceRequest.h>
#include <aws/ecs/model/UpdateServiceResult.h>
#include <aws/ecs/model/UpdateTaskProtectionRequest.h>
#include <aws/ecs/model/UpdateTaskProtectionResult.h>
#include <aws/ecs/model/UpdateTaskSetRequest.h>
#include <aws/ecs/model/UpdateTaskSetResult.h>
#include <aws/ecs/model/VersionConsistency.h>
#include <aws/ecs/model/VersionInfo.h>
#include <aws/ecs/model/Volume.h>
#include <aws/ecs/model/VolumeFrom.h>
#include <aws/ecs/model/VpcLatticeConfiguration.h>

using ECSIncludeTest = ::testing::Test;

TEST_F(ECSIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ECS::ECSClient>("ECSIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
