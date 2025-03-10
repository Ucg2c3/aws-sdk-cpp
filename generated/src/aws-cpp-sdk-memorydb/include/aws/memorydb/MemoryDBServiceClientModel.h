﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/memorydb/MemoryDBErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/memorydb/MemoryDBEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MemoryDBClient header */
#include <aws/memorydb/model/BatchUpdateClusterResult.h>
#include <aws/memorydb/model/CopySnapshotResult.h>
#include <aws/memorydb/model/CreateACLResult.h>
#include <aws/memorydb/model/CreateClusterResult.h>
#include <aws/memorydb/model/CreateMultiRegionClusterResult.h>
#include <aws/memorydb/model/CreateParameterGroupResult.h>
#include <aws/memorydb/model/CreateSnapshotResult.h>
#include <aws/memorydb/model/CreateSubnetGroupResult.h>
#include <aws/memorydb/model/CreateUserResult.h>
#include <aws/memorydb/model/DeleteACLResult.h>
#include <aws/memorydb/model/DeleteClusterResult.h>
#include <aws/memorydb/model/DeleteMultiRegionClusterResult.h>
#include <aws/memorydb/model/DeleteParameterGroupResult.h>
#include <aws/memorydb/model/DeleteSnapshotResult.h>
#include <aws/memorydb/model/DeleteSubnetGroupResult.h>
#include <aws/memorydb/model/DeleteUserResult.h>
#include <aws/memorydb/model/DescribeACLsResult.h>
#include <aws/memorydb/model/DescribeClustersResult.h>
#include <aws/memorydb/model/DescribeEngineVersionsResult.h>
#include <aws/memorydb/model/DescribeEventsResult.h>
#include <aws/memorydb/model/DescribeMultiRegionClustersResult.h>
#include <aws/memorydb/model/DescribeParameterGroupsResult.h>
#include <aws/memorydb/model/DescribeParametersResult.h>
#include <aws/memorydb/model/DescribeReservedNodesResult.h>
#include <aws/memorydb/model/DescribeReservedNodesOfferingsResult.h>
#include <aws/memorydb/model/DescribeServiceUpdatesResult.h>
#include <aws/memorydb/model/DescribeSnapshotsResult.h>
#include <aws/memorydb/model/DescribeSubnetGroupsResult.h>
#include <aws/memorydb/model/DescribeUsersResult.h>
#include <aws/memorydb/model/FailoverShardResult.h>
#include <aws/memorydb/model/ListAllowedMultiRegionClusterUpdatesResult.h>
#include <aws/memorydb/model/ListAllowedNodeTypeUpdatesResult.h>
#include <aws/memorydb/model/ListTagsResult.h>
#include <aws/memorydb/model/PurchaseReservedNodesOfferingResult.h>
#include <aws/memorydb/model/ResetParameterGroupResult.h>
#include <aws/memorydb/model/TagResourceResult.h>
#include <aws/memorydb/model/UntagResourceResult.h>
#include <aws/memorydb/model/UpdateACLResult.h>
#include <aws/memorydb/model/UpdateClusterResult.h>
#include <aws/memorydb/model/UpdateMultiRegionClusterResult.h>
#include <aws/memorydb/model/UpdateParameterGroupResult.h>
#include <aws/memorydb/model/UpdateSubnetGroupResult.h>
#include <aws/memorydb/model/UpdateUserResult.h>
#include <aws/memorydb/model/DescribeClustersRequest.h>
#include <aws/memorydb/model/DescribeEventsRequest.h>
#include <aws/memorydb/model/DescribeMultiRegionClustersRequest.h>
#include <aws/memorydb/model/DescribeParameterGroupsRequest.h>
#include <aws/memorydb/model/DescribeReservedNodesRequest.h>
#include <aws/memorydb/model/DescribeSubnetGroupsRequest.h>
#include <aws/memorydb/model/DescribeUsersRequest.h>
#include <aws/memorydb/model/DescribeACLsRequest.h>
#include <aws/memorydb/model/DescribeReservedNodesOfferingsRequest.h>
#include <aws/memorydb/model/DescribeEngineVersionsRequest.h>
#include <aws/memorydb/model/DescribeSnapshotsRequest.h>
#include <aws/memorydb/model/DescribeServiceUpdatesRequest.h>
/* End of service model headers required in MemoryDBClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace MemoryDB
  {
    using MemoryDBClientConfiguration = Aws::Client::GenericClientConfiguration;
    using MemoryDBEndpointProviderBase = Aws::MemoryDB::Endpoint::MemoryDBEndpointProviderBase;
    using MemoryDBEndpointProvider = Aws::MemoryDB::Endpoint::MemoryDBEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MemoryDBClient header */
      class BatchUpdateClusterRequest;
      class CopySnapshotRequest;
      class CreateACLRequest;
      class CreateClusterRequest;
      class CreateMultiRegionClusterRequest;
      class CreateParameterGroupRequest;
      class CreateSnapshotRequest;
      class CreateSubnetGroupRequest;
      class CreateUserRequest;
      class DeleteACLRequest;
      class DeleteClusterRequest;
      class DeleteMultiRegionClusterRequest;
      class DeleteParameterGroupRequest;
      class DeleteSnapshotRequest;
      class DeleteSubnetGroupRequest;
      class DeleteUserRequest;
      class DescribeACLsRequest;
      class DescribeClustersRequest;
      class DescribeEngineVersionsRequest;
      class DescribeEventsRequest;
      class DescribeMultiRegionClustersRequest;
      class DescribeParameterGroupsRequest;
      class DescribeParametersRequest;
      class DescribeReservedNodesRequest;
      class DescribeReservedNodesOfferingsRequest;
      class DescribeServiceUpdatesRequest;
      class DescribeSnapshotsRequest;
      class DescribeSubnetGroupsRequest;
      class DescribeUsersRequest;
      class FailoverShardRequest;
      class ListAllowedMultiRegionClusterUpdatesRequest;
      class ListAllowedNodeTypeUpdatesRequest;
      class ListTagsRequest;
      class PurchaseReservedNodesOfferingRequest;
      class ResetParameterGroupRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateACLRequest;
      class UpdateClusterRequest;
      class UpdateMultiRegionClusterRequest;
      class UpdateParameterGroupRequest;
      class UpdateSubnetGroupRequest;
      class UpdateUserRequest;
      /* End of service model forward declarations required in MemoryDBClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchUpdateClusterResult, MemoryDBError> BatchUpdateClusterOutcome;
      typedef Aws::Utils::Outcome<CopySnapshotResult, MemoryDBError> CopySnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateACLResult, MemoryDBError> CreateACLOutcome;
      typedef Aws::Utils::Outcome<CreateClusterResult, MemoryDBError> CreateClusterOutcome;
      typedef Aws::Utils::Outcome<CreateMultiRegionClusterResult, MemoryDBError> CreateMultiRegionClusterOutcome;
      typedef Aws::Utils::Outcome<CreateParameterGroupResult, MemoryDBError> CreateParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CreateSnapshotResult, MemoryDBError> CreateSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateSubnetGroupResult, MemoryDBError> CreateSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<CreateUserResult, MemoryDBError> CreateUserOutcome;
      typedef Aws::Utils::Outcome<DeleteACLResult, MemoryDBError> DeleteACLOutcome;
      typedef Aws::Utils::Outcome<DeleteClusterResult, MemoryDBError> DeleteClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteMultiRegionClusterResult, MemoryDBError> DeleteMultiRegionClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteParameterGroupResult, MemoryDBError> DeleteParameterGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteSnapshotResult, MemoryDBError> DeleteSnapshotOutcome;
      typedef Aws::Utils::Outcome<DeleteSubnetGroupResult, MemoryDBError> DeleteSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteUserResult, MemoryDBError> DeleteUserOutcome;
      typedef Aws::Utils::Outcome<DescribeACLsResult, MemoryDBError> DescribeACLsOutcome;
      typedef Aws::Utils::Outcome<DescribeClustersResult, MemoryDBError> DescribeClustersOutcome;
      typedef Aws::Utils::Outcome<DescribeEngineVersionsResult, MemoryDBError> DescribeEngineVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeEventsResult, MemoryDBError> DescribeEventsOutcome;
      typedef Aws::Utils::Outcome<DescribeMultiRegionClustersResult, MemoryDBError> DescribeMultiRegionClustersOutcome;
      typedef Aws::Utils::Outcome<DescribeParameterGroupsResult, MemoryDBError> DescribeParameterGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeParametersResult, MemoryDBError> DescribeParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedNodesResult, MemoryDBError> DescribeReservedNodesOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedNodesOfferingsResult, MemoryDBError> DescribeReservedNodesOfferingsOutcome;
      typedef Aws::Utils::Outcome<DescribeServiceUpdatesResult, MemoryDBError> DescribeServiceUpdatesOutcome;
      typedef Aws::Utils::Outcome<DescribeSnapshotsResult, MemoryDBError> DescribeSnapshotsOutcome;
      typedef Aws::Utils::Outcome<DescribeSubnetGroupsResult, MemoryDBError> DescribeSubnetGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeUsersResult, MemoryDBError> DescribeUsersOutcome;
      typedef Aws::Utils::Outcome<FailoverShardResult, MemoryDBError> FailoverShardOutcome;
      typedef Aws::Utils::Outcome<ListAllowedMultiRegionClusterUpdatesResult, MemoryDBError> ListAllowedMultiRegionClusterUpdatesOutcome;
      typedef Aws::Utils::Outcome<ListAllowedNodeTypeUpdatesResult, MemoryDBError> ListAllowedNodeTypeUpdatesOutcome;
      typedef Aws::Utils::Outcome<ListTagsResult, MemoryDBError> ListTagsOutcome;
      typedef Aws::Utils::Outcome<PurchaseReservedNodesOfferingResult, MemoryDBError> PurchaseReservedNodesOfferingOutcome;
      typedef Aws::Utils::Outcome<ResetParameterGroupResult, MemoryDBError> ResetParameterGroupOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, MemoryDBError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, MemoryDBError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateACLResult, MemoryDBError> UpdateACLOutcome;
      typedef Aws::Utils::Outcome<UpdateClusterResult, MemoryDBError> UpdateClusterOutcome;
      typedef Aws::Utils::Outcome<UpdateMultiRegionClusterResult, MemoryDBError> UpdateMultiRegionClusterOutcome;
      typedef Aws::Utils::Outcome<UpdateParameterGroupResult, MemoryDBError> UpdateParameterGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateSubnetGroupResult, MemoryDBError> UpdateSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateUserResult, MemoryDBError> UpdateUserOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchUpdateClusterOutcome> BatchUpdateClusterOutcomeCallable;
      typedef std::future<CopySnapshotOutcome> CopySnapshotOutcomeCallable;
      typedef std::future<CreateACLOutcome> CreateACLOutcomeCallable;
      typedef std::future<CreateClusterOutcome> CreateClusterOutcomeCallable;
      typedef std::future<CreateMultiRegionClusterOutcome> CreateMultiRegionClusterOutcomeCallable;
      typedef std::future<CreateParameterGroupOutcome> CreateParameterGroupOutcomeCallable;
      typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
      typedef std::future<CreateSubnetGroupOutcome> CreateSubnetGroupOutcomeCallable;
      typedef std::future<CreateUserOutcome> CreateUserOutcomeCallable;
      typedef std::future<DeleteACLOutcome> DeleteACLOutcomeCallable;
      typedef std::future<DeleteClusterOutcome> DeleteClusterOutcomeCallable;
      typedef std::future<DeleteMultiRegionClusterOutcome> DeleteMultiRegionClusterOutcomeCallable;
      typedef std::future<DeleteParameterGroupOutcome> DeleteParameterGroupOutcomeCallable;
      typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
      typedef std::future<DeleteSubnetGroupOutcome> DeleteSubnetGroupOutcomeCallable;
      typedef std::future<DeleteUserOutcome> DeleteUserOutcomeCallable;
      typedef std::future<DescribeACLsOutcome> DescribeACLsOutcomeCallable;
      typedef std::future<DescribeClustersOutcome> DescribeClustersOutcomeCallable;
      typedef std::future<DescribeEngineVersionsOutcome> DescribeEngineVersionsOutcomeCallable;
      typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
      typedef std::future<DescribeMultiRegionClustersOutcome> DescribeMultiRegionClustersOutcomeCallable;
      typedef std::future<DescribeParameterGroupsOutcome> DescribeParameterGroupsOutcomeCallable;
      typedef std::future<DescribeParametersOutcome> DescribeParametersOutcomeCallable;
      typedef std::future<DescribeReservedNodesOutcome> DescribeReservedNodesOutcomeCallable;
      typedef std::future<DescribeReservedNodesOfferingsOutcome> DescribeReservedNodesOfferingsOutcomeCallable;
      typedef std::future<DescribeServiceUpdatesOutcome> DescribeServiceUpdatesOutcomeCallable;
      typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
      typedef std::future<DescribeSubnetGroupsOutcome> DescribeSubnetGroupsOutcomeCallable;
      typedef std::future<DescribeUsersOutcome> DescribeUsersOutcomeCallable;
      typedef std::future<FailoverShardOutcome> FailoverShardOutcomeCallable;
      typedef std::future<ListAllowedMultiRegionClusterUpdatesOutcome> ListAllowedMultiRegionClusterUpdatesOutcomeCallable;
      typedef std::future<ListAllowedNodeTypeUpdatesOutcome> ListAllowedNodeTypeUpdatesOutcomeCallable;
      typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
      typedef std::future<PurchaseReservedNodesOfferingOutcome> PurchaseReservedNodesOfferingOutcomeCallable;
      typedef std::future<ResetParameterGroupOutcome> ResetParameterGroupOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateACLOutcome> UpdateACLOutcomeCallable;
      typedef std::future<UpdateClusterOutcome> UpdateClusterOutcomeCallable;
      typedef std::future<UpdateMultiRegionClusterOutcome> UpdateMultiRegionClusterOutcomeCallable;
      typedef std::future<UpdateParameterGroupOutcome> UpdateParameterGroupOutcomeCallable;
      typedef std::future<UpdateSubnetGroupOutcome> UpdateSubnetGroupOutcomeCallable;
      typedef std::future<UpdateUserOutcome> UpdateUserOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MemoryDBClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MemoryDBClient*, const Model::BatchUpdateClusterRequest&, const Model::BatchUpdateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchUpdateClusterResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CopySnapshotRequest&, const Model::CopySnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopySnapshotResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CreateACLRequest&, const Model::CreateACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateACLResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CreateClusterRequest&, const Model::CreateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateClusterResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CreateMultiRegionClusterRequest&, const Model::CreateMultiRegionClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMultiRegionClusterResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CreateParameterGroupRequest&, const Model::CreateParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateParameterGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CreateSubnetGroupRequest&, const Model::CreateSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::CreateUserRequest&, const Model::CreateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUserResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DeleteACLRequest&, const Model::DeleteACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteACLResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DeleteClusterRequest&, const Model::DeleteClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteClusterResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DeleteMultiRegionClusterRequest&, const Model::DeleteMultiRegionClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMultiRegionClusterResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DeleteParameterGroupRequest&, const Model::DeleteParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteParameterGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DeleteSnapshotRequest&, const Model::DeleteSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DeleteSubnetGroupRequest&, const Model::DeleteSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DeleteUserRequest&, const Model::DeleteUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUserResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeACLsRequest&, const Model::DescribeACLsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeACLsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeClustersRequest&, const Model::DescribeClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeClustersResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeEngineVersionsRequest&, const Model::DescribeEngineVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineVersionsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeMultiRegionClustersRequest&, const Model::DescribeMultiRegionClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMultiRegionClustersResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeParameterGroupsRequest&, const Model::DescribeParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeParametersRequest&, const Model::DescribeParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeParametersResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeReservedNodesRequest&, const Model::DescribeReservedNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedNodesResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeReservedNodesOfferingsRequest&, const Model::DescribeReservedNodesOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedNodesOfferingsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeServiceUpdatesRequest&, const Model::DescribeServiceUpdatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceUpdatesResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeSnapshotsRequest&, const Model::DescribeSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeSubnetGroupsRequest&, const Model::DescribeSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::DescribeUsersRequest&, const Model::DescribeUsersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeUsersResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::FailoverShardRequest&, const Model::FailoverShardOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FailoverShardResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::ListAllowedMultiRegionClusterUpdatesRequest&, const Model::ListAllowedMultiRegionClusterUpdatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAllowedMultiRegionClusterUpdatesResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::ListAllowedNodeTypeUpdatesRequest&, const Model::ListAllowedNodeTypeUpdatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAllowedNodeTypeUpdatesResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::PurchaseReservedNodesOfferingRequest&, const Model::PurchaseReservedNodesOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedNodesOfferingResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::ResetParameterGroupRequest&, const Model::ResetParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetParameterGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::UpdateACLRequest&, const Model::UpdateACLOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateACLResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::UpdateClusterRequest&, const Model::UpdateClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateClusterResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::UpdateMultiRegionClusterRequest&, const Model::UpdateMultiRegionClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateMultiRegionClusterResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::UpdateParameterGroupRequest&, const Model::UpdateParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateParameterGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::UpdateSubnetGroupRequest&, const Model::UpdateSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const MemoryDBClient*, const Model::UpdateUserRequest&, const Model::UpdateUserOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUserResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MemoryDB
} // namespace Aws
