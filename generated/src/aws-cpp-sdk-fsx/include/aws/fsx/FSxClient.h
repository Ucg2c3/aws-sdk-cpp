﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/FSxServiceClientModel.h>

namespace Aws
{
namespace FSx
{
  /**
   * <p>Amazon FSx is a fully managed service that makes it easy for storage and
   * application administrators to launch and use shared file storage.</p>
   */
  class AWS_FSX_API FSxClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<FSxClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef FSxClientConfiguration ClientConfigurationType;
      typedef FSxEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FSxClient(const Aws::FSx::FSxClientConfiguration& clientConfiguration = Aws::FSx::FSxClientConfiguration(),
                  std::shared_ptr<FSxEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FSxClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<FSxEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::FSx::FSxClientConfiguration& clientConfiguration = Aws::FSx::FSxClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FSxClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<FSxEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::FSx::FSxClientConfiguration& clientConfiguration = Aws::FSx::FSxClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FSxClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FSxClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FSxClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~FSxClient();

        /**
         * <p>Use this action to associate one or more Domain Name Server (DNS) aliases
         * with an existing Amazon FSx for Windows File Server file system. A file system
         * can have a maximum of 50 DNS aliases associated with it at any one time. If you
         * try to associate a DNS alias that is already associated with the file system,
         * FSx takes no action on that alias in the request. For more information, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-dns-aliases.html">Working
         * with DNS Aliases</a> and <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/walkthrough05-file-system-custom-CNAME.html">Walkthrough
         * 5: Using DNS aliases to access your file system</a>, including additional steps
         * you must take to be able to access your file system using a DNS alias.</p>
         * <p>The system response shows the DNS aliases that Amazon FSx is attempting to
         * associate with the file system. Use the API operation to monitor the status of
         * the aliases Amazon FSx is associating with the file system.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/AssociateFileSystemAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFileSystemAliasesOutcome AssociateFileSystemAliases(const Model::AssociateFileSystemAliasesRequest& request) const;

        /**
         * A Callable wrapper for AssociateFileSystemAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateFileSystemAliasesRequestT = Model::AssociateFileSystemAliasesRequest>
        Model::AssociateFileSystemAliasesOutcomeCallable AssociateFileSystemAliasesCallable(const AssociateFileSystemAliasesRequestT& request) const
        {
            return SubmitCallable(&FSxClient::AssociateFileSystemAliases, request);
        }

        /**
         * An Async wrapper for AssociateFileSystemAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateFileSystemAliasesRequestT = Model::AssociateFileSystemAliasesRequest>
        void AssociateFileSystemAliasesAsync(const AssociateFileSystemAliasesRequestT& request, const AssociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::AssociateFileSystemAliases, request, handler, context);
        }

        /**
         * <p>Cancels an existing Amazon FSx for Lustre data repository task if that task
         * is in either the <code>PENDING</code> or <code>EXECUTING</code> state. When you
         * cancel an export task, Amazon FSx does the following.</p> <ul> <li> <p>Any files
         * that FSx has already exported are not reverted.</p> </li> <li> <p>FSx continues
         * to export any files that are in-flight when the cancel operation is
         * received.</p> </li> <li> <p>FSx does not export any files that have not yet been
         * exported.</p> </li> </ul> <p>For a release task, Amazon FSx will stop releasing
         * files upon cancellation. Any files that have already been released will remain
         * in the released state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CancelDataRepositoryTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelDataRepositoryTaskOutcome CancelDataRepositoryTask(const Model::CancelDataRepositoryTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelDataRepositoryTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelDataRepositoryTaskRequestT = Model::CancelDataRepositoryTaskRequest>
        Model::CancelDataRepositoryTaskOutcomeCallable CancelDataRepositoryTaskCallable(const CancelDataRepositoryTaskRequestT& request) const
        {
            return SubmitCallable(&FSxClient::CancelDataRepositoryTask, request);
        }

        /**
         * An Async wrapper for CancelDataRepositoryTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelDataRepositoryTaskRequestT = Model::CancelDataRepositoryTaskRequest>
        void CancelDataRepositoryTaskAsync(const CancelDataRepositoryTaskRequestT& request, const CancelDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::CancelDataRepositoryTask, request, handler, context);
        }

        /**
         * <p>Copies an existing backup within the same Amazon Web Services account to
         * another Amazon Web Services Region (cross-Region copy) or within the same Amazon
         * Web Services Region (in-Region copy). You can have up to five backup copy
         * requests in progress to a single destination Region per account.</p> <p>You can
         * use cross-Region backup copies for cross-Region disaster recovery. You can
         * periodically take backups and copy them to another Region so that in the event
         * of a disaster in the primary Region, you can restore from backup and recover
         * availability quickly in the other Region. You can make cross-Region copies only
         * within your Amazon Web Services partition. A partition is a grouping of Regions.
         * Amazon Web Services currently has three partitions: <code>aws</code> (Standard
         * Regions), <code>aws-cn</code> (China Regions), and <code>aws-us-gov</code>
         * (Amazon Web Services GovCloud [US] Regions).</p> <p>You can also use backup
         * copies to clone your file dataset to another Region or within the same
         * Region.</p> <p>You can use the <code>SourceRegion</code> parameter to specify
         * the Amazon Web Services Region from which the backup will be copied. For
         * example, if you make the call from the <code>us-west-1</code> Region and want to
         * copy a backup from the <code>us-east-2</code> Region, you specify
         * <code>us-east-2</code> in the <code>SourceRegion</code> parameter to make a
         * cross-Region copy. If you don't specify a Region, the backup copy is created in
         * the same Region where the request is sent from (in-Region copy).</p> <p>For more
         * information about creating backup copies, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html#copy-backups">
         * Copying backups</a> in the <i>Amazon FSx for Windows User Guide</i>, <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html#copy-backups">Copying
         * backups</a> in the <i>Amazon FSx for Lustre User Guide</i>, and <a
         * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/using-backups.html#copy-backups">Copying
         * backups</a> in the <i>Amazon FSx for OpenZFS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CopyBackup">AWS API
         * Reference</a></p>
         */
        virtual Model::CopyBackupOutcome CopyBackup(const Model::CopyBackupRequest& request) const;

        /**
         * A Callable wrapper for CopyBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyBackupRequestT = Model::CopyBackupRequest>
        Model::CopyBackupOutcomeCallable CopyBackupCallable(const CopyBackupRequestT& request) const
        {
            return SubmitCallable(&FSxClient::CopyBackup, request);
        }

        /**
         * An Async wrapper for CopyBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyBackupRequestT = Model::CopyBackupRequest>
        void CopyBackupAsync(const CopyBackupRequestT& request, const CopyBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::CopyBackup, request, handler, context);
        }

        /**
         * <p>Updates an existing volume by using a snapshot from another Amazon FSx for
         * OpenZFS file system. For more information, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/on-demand-replication.html">on-demand
         * data replication</a> in the Amazon FSx for OpenZFS User Guide.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CopySnapshotAndUpdateVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::CopySnapshotAndUpdateVolumeOutcome CopySnapshotAndUpdateVolume(const Model::CopySnapshotAndUpdateVolumeRequest& request) const;

        /**
         * A Callable wrapper for CopySnapshotAndUpdateVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopySnapshotAndUpdateVolumeRequestT = Model::CopySnapshotAndUpdateVolumeRequest>
        Model::CopySnapshotAndUpdateVolumeOutcomeCallable CopySnapshotAndUpdateVolumeCallable(const CopySnapshotAndUpdateVolumeRequestT& request) const
        {
            return SubmitCallable(&FSxClient::CopySnapshotAndUpdateVolume, request);
        }

        /**
         * An Async wrapper for CopySnapshotAndUpdateVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopySnapshotAndUpdateVolumeRequestT = Model::CopySnapshotAndUpdateVolumeRequest>
        void CopySnapshotAndUpdateVolumeAsync(const CopySnapshotAndUpdateVolumeRequestT& request, const CopySnapshotAndUpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::CopySnapshotAndUpdateVolume, request, handler, context);
        }

        /**
         * <p>Creates an S3 access point and attaches it to an Amazon FSx volume. For FSx
         * for OpenZFS file systems, the volume must be hosted on a high-availability file
         * system, either Single-AZ or Multi-AZ. For more information, see <a
         * href="fsx/latest/OpenZFSGuide/s3accesspoints-for-FSx.html">Accessing your data
         * using access points</a> in the Amazon FSx for OpenZFS User Guide. </p> <p>The
         * requester requires the following permissions to perform these actions:</p> <ul>
         * <li> <p> <code>fsx:CreateAndAttachS3AccessPoint</code> </p> </li> <li> <p>
         * <code>s3:CreateAccessPoint</code> </p> </li> <li> <p>
         * <code>s3:GetAccessPoint</code> </p> </li> <li> <p>
         * <code>s3:PutAccessPointPolicy</code> </p> </li> <li> <p>
         * <code>s3:DeleteAccessPoint</code> </p> </li> </ul> <p>The following actions are
         * related to <code>CreateAndAttachS3AccessPoint</code>:</p> <ul> <li> <p>
         * <a>DescribeS3AccessPointAttachments</a> </p> </li> <li> <p>
         * <a>DetachAndDeleteS3AccessPoint</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateAndAttachS3AccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAndAttachS3AccessPointOutcome CreateAndAttachS3AccessPoint(const Model::CreateAndAttachS3AccessPointRequest& request) const;

        /**
         * A Callable wrapper for CreateAndAttachS3AccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAndAttachS3AccessPointRequestT = Model::CreateAndAttachS3AccessPointRequest>
        Model::CreateAndAttachS3AccessPointOutcomeCallable CreateAndAttachS3AccessPointCallable(const CreateAndAttachS3AccessPointRequestT& request) const
        {
            return SubmitCallable(&FSxClient::CreateAndAttachS3AccessPoint, request);
        }

        /**
         * An Async wrapper for CreateAndAttachS3AccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAndAttachS3AccessPointRequestT = Model::CreateAndAttachS3AccessPointRequest>
        void CreateAndAttachS3AccessPointAsync(const CreateAndAttachS3AccessPointRequestT& request, const CreateAndAttachS3AccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::CreateAndAttachS3AccessPoint, request, handler, context);
        }

        /**
         * <p>Creates a backup of an existing Amazon FSx for Windows File Server file
         * system, Amazon FSx for Lustre file system, Amazon FSx for NetApp ONTAP volume,
         * or Amazon FSx for OpenZFS file system. We recommend creating regular backups so
         * that you can restore a file system or volume from a backup if an issue arises
         * with the original file system or volume.</p> <p>For Amazon FSx for Lustre file
         * systems, you can create a backup only for file systems that have the following
         * configuration:</p> <ul> <li> <p>A Persistent deployment type</p> </li> <li>
         * <p>Are <i>not</i> linked to a data repository</p> </li> </ul> <p>For more
         * information about backups, see the following:</p> <ul> <li> <p>For Amazon FSx
         * for Lustre, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">Working
         * with FSx for Lustre backups</a>.</p> </li> <li> <p>For Amazon FSx for Windows,
         * see <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html">Working
         * with FSx for Windows backups</a>.</p> </li> <li> <p>For Amazon FSx for NetApp
         * ONTAP, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/using-backups.html">Working
         * with FSx for NetApp ONTAP backups</a>.</p> </li> <li> <p>For Amazon FSx for
         * OpenZFS, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/using-backups.html">Working
         * with FSx for OpenZFS backups</a>.</p> </li> </ul> <p>If a backup with the
         * specified client request token exists and the parameters match, this operation
         * returns the description of the existing backup. If a backup with the specified
         * client request token exists and the parameters don't match, this operation
         * returns <code>IncompatibleParameterError</code>. If a backup with the specified
         * client request token doesn't exist, <code>CreateBackup</code> does the
         * following: </p> <ul> <li> <p>Creates a new Amazon FSx backup with an assigned
         * ID, and an initial lifecycle state of <code>CREATING</code>.</p> </li> <li>
         * <p>Returns the description of the backup.</p> </li> </ul> <p>By using the
         * idempotent operation, you can retry a <code>CreateBackup</code> operation
         * without the risk of creating an extra backup. This approach can be useful when
         * an initial call fails in a way that makes it unclear whether a backup was
         * created. If you use the same client request token and the initial call created a
         * backup, the operation returns a successful result because all the parameters are
         * the same.</p> <p>The <code>CreateBackup</code> operation returns while the
         * backup's lifecycle state is still <code>CREATING</code>. You can check the
         * backup creation status by calling the <a
         * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_DescribeBackups.html">DescribeBackups</a>
         * operation, which returns the backup state along with other
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackupOutcome CreateBackup(const Model::CreateBackupRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBackupRequestT = Model::CreateBackupRequest>
        Model::CreateBackupOutcomeCallable CreateBackupCallable(const CreateBackupRequestT& request = {}) const
        {
            return SubmitCallable(&FSxClient::CreateBackup, request);
        }

        /**
         * An Async wrapper for CreateBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBackupRequestT = Model::CreateBackupRequest>
        void CreateBackupAsync(const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateBackupRequestT& request = {}) const
        {
            return SubmitAsync(&FSxClient::CreateBackup, request, handler, context);
        }

        /**
         * <p>Creates an Amazon FSx for Lustre data repository association (DRA). A data
         * repository association is a link between a directory on the file system and an
         * Amazon S3 bucket or prefix. You can have a maximum of 8 data repository
         * associations on a file system. Data repository associations are supported on all
         * FSx for Lustre 2.12 and 2.15 file systems, excluding <code>scratch_1</code>
         * deployment type.</p> <p>Each data repository association must have a unique
         * Amazon FSx file system directory and a unique S3 bucket or prefix associated
         * with it. You can configure a data repository association for automatic import
         * only, for automatic export only, or for both. To learn more about linking a data
         * repository to your file system, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/create-dra-linked-data-repo.html">Linking
         * your file system to an S3 bucket</a>.</p>  <p>
         * <code>CreateDataRepositoryAssociation</code> isn't supported on Amazon File
         * Cache resources. To create a DRA on Amazon File Cache, use the
         * <code>CreateFileCache</code> operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateDataRepositoryAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataRepositoryAssociationOutcome CreateDataRepositoryAssociation(const Model::CreateDataRepositoryAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateDataRepositoryAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataRepositoryAssociationRequestT = Model::CreateDataRepositoryAssociationRequest>
        Model::CreateDataRepositoryAssociationOutcomeCallable CreateDataRepositoryAssociationCallable(const CreateDataRepositoryAssociationRequestT& request) const
        {
            return SubmitCallable(&FSxClient::CreateDataRepositoryAssociation, request);
        }

        /**
         * An Async wrapper for CreateDataRepositoryAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataRepositoryAssociationRequestT = Model::CreateDataRepositoryAssociationRequest>
        void CreateDataRepositoryAssociationAsync(const CreateDataRepositoryAssociationRequestT& request, const CreateDataRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::CreateDataRepositoryAssociation, request, handler, context);
        }

        /**
         * <p>Creates an Amazon FSx for Lustre data repository task. A
         * <code>CreateDataRepositoryTask</code> operation will fail if a data repository
         * is not linked to the FSx file system.</p> <p>You use import and export data
         * repository tasks to perform bulk operations between your FSx for Lustre file
         * system and its linked data repositories. An example of a data repository task is
         * exporting any data and metadata changes, including POSIX metadata, to files,
         * directories, and symbolic links (symlinks) from your FSx file system to a linked
         * data repository.</p> <p>You use release data repository tasks to release data
         * from your file system for files that are exported to S3. The metadata of
         * released files remains on the file system so users or applications can still
         * access released files by reading the files again, which will restore data from
         * Amazon S3 to the FSx for Lustre file system.</p> <p>To learn more about data
         * repository tasks, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-repository-tasks.html">Data
         * Repository Tasks</a>. To learn more about linking a data repository to your file
         * system, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/create-dra-linked-data-repo.html">Linking
         * your file system to an S3 bucket</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateDataRepositoryTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataRepositoryTaskOutcome CreateDataRepositoryTask(const Model::CreateDataRepositoryTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateDataRepositoryTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDataRepositoryTaskRequestT = Model::CreateDataRepositoryTaskRequest>
        Model::CreateDataRepositoryTaskOutcomeCallable CreateDataRepositoryTaskCallable(const CreateDataRepositoryTaskRequestT& request) const
        {
            return SubmitCallable(&FSxClient::CreateDataRepositoryTask, request);
        }

        /**
         * An Async wrapper for CreateDataRepositoryTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDataRepositoryTaskRequestT = Model::CreateDataRepositoryTaskRequest>
        void CreateDataRepositoryTaskAsync(const CreateDataRepositoryTaskRequestT& request, const CreateDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::CreateDataRepositoryTask, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon File Cache resource.</p> <p>You can use this operation
         * with a client request token in the request that Amazon File Cache uses to ensure
         * idempotent creation. If a cache with the specified client request token exists
         * and the parameters match, <code>CreateFileCache</code> returns the description
         * of the existing cache. If a cache with the specified client request token exists
         * and the parameters don't match, this call returns
         * <code>IncompatibleParameterError</code>. If a file cache with the specified
         * client request token doesn't exist, <code>CreateFileCache</code> does the
         * following: </p> <ul> <li> <p>Creates a new, empty Amazon File Cache resource
         * with an assigned ID, and an initial lifecycle state of
         * <code>CREATING</code>.</p> </li> <li> <p>Returns the description of the cache in
         * JSON format.</p> </li> </ul>  <p>The <code>CreateFileCache</code> call
         * returns while the cache's lifecycle state is still <code>CREATING</code>. You
         * can check the cache creation status by calling the <a
         * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_DescribeFileCaches.html">DescribeFileCaches</a>
         * operation, which returns the cache state along with other information.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileCache">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFileCacheOutcome CreateFileCache(const Model::CreateFileCacheRequest& request) const;

        /**
         * A Callable wrapper for CreateFileCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFileCacheRequestT = Model::CreateFileCacheRequest>
        Model::CreateFileCacheOutcomeCallable CreateFileCacheCallable(const CreateFileCacheRequestT& request) const
        {
            return SubmitCallable(&FSxClient::CreateFileCache, request);
        }

        /**
         * An Async wrapper for CreateFileCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFileCacheRequestT = Model::CreateFileCacheRequest>
        void CreateFileCacheAsync(const CreateFileCacheRequestT& request, const CreateFileCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::CreateFileCache, request, handler, context);
        }

        /**
         * <p>Creates a new, empty Amazon FSx file system. You can create the following
         * supported Amazon FSx file systems using the <code>CreateFileSystem</code> API
         * operation:</p> <ul> <li> <p>Amazon FSx for Lustre</p> </li> <li> <p>Amazon FSx
         * for NetApp ONTAP</p> </li> <li> <p>Amazon FSx for OpenZFS</p> </li> <li>
         * <p>Amazon FSx for Windows File Server</p> </li> </ul> <p>This operation requires
         * a client request token in the request that Amazon FSx uses to ensure idempotent
         * creation. This means that calling the operation multiple times with the same
         * client request token has no effect. By using the idempotent operation, you can
         * retry a <code>CreateFileSystem</code> operation without the risk of creating an
         * extra file system. This approach can be useful when an initial call fails in a
         * way that makes it unclear whether a file system was created. Examples are if a
         * transport level timeout occurred, or your connection was reset. If you use the
         * same client request token and the initial call created a file system, the client
         * receives success as long as the parameters are the same.</p> <p>If a file system
         * with the specified client request token exists and the parameters match,
         * <code>CreateFileSystem</code> returns the description of the existing file
         * system. If a file system with the specified client request token exists and the
         * parameters don't match, this call returns
         * <code>IncompatibleParameterError</code>. If a file system with the specified
         * client request token doesn't exist, <code>CreateFileSystem</code> does the
         * following:</p> <ul> <li> <p>Creates a new, empty Amazon FSx file system with an
         * assigned ID, and an initial lifecycle state of <code>CREATING</code>.</p> </li>
         * <li> <p>Returns the description of the file system in JSON format.</p> </li>
         * </ul>  <p>The <code>CreateFileSystem</code> call returns while the file
         * system's lifecycle state is still <code>CREATING</code>. You can check the
         * file-system creation status by calling the <a
         * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_DescribeFileSystems.html">DescribeFileSystems</a>
         * operation, which returns the file system state along with other information.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFileSystemOutcome CreateFileSystem(const Model::CreateFileSystemRequest& request) const;

        /**
         * A Callable wrapper for CreateFileSystem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFileSystemRequestT = Model::CreateFileSystemRequest>
        Model::CreateFileSystemOutcomeCallable CreateFileSystemCallable(const CreateFileSystemRequestT& request) const
        {
            return SubmitCallable(&FSxClient::CreateFileSystem, request);
        }

        /**
         * An Async wrapper for CreateFileSystem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFileSystemRequestT = Model::CreateFileSystemRequest>
        void CreateFileSystemAsync(const CreateFileSystemRequestT& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::CreateFileSystem, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon FSx for Lustre, Amazon FSx for Windows File Server, or
         * Amazon FSx for OpenZFS file system from an existing Amazon FSx backup.</p> <p>If
         * a file system with the specified client request token exists and the parameters
         * match, this operation returns the description of the file system. If a file
         * system with the specified client request token exists but the parameters don't
         * match, this call returns <code>IncompatibleParameterError</code>. If a file
         * system with the specified client request token doesn't exist, this operation
         * does the following:</p> <ul> <li> <p>Creates a new Amazon FSx file system from
         * backup with an assigned ID, and an initial lifecycle state of
         * <code>CREATING</code>.</p> </li> <li> <p>Returns the description of the file
         * system.</p> </li> </ul> <p>Parameters like the Active Directory, default share
         * name, automatic backup, and backup settings default to the parameters of the
         * file system that was backed up, unless overridden. You can explicitly supply
         * other settings.</p> <p>By using the idempotent operation, you can retry a
         * <code>CreateFileSystemFromBackup</code> call without the risk of creating an
         * extra file system. This approach can be useful when an initial call fails in a
         * way that makes it unclear whether a file system was created. Examples are if a
         * transport level timeout occurred, or your connection was reset. If you use the
         * same client request token and the initial call created a file system, the client
         * receives a success message as long as the parameters are the same.</p> 
         * <p>The <code>CreateFileSystemFromBackup</code> call returns while the file
         * system's lifecycle state is still <code>CREATING</code>. You can check the
         * file-system creation status by calling the <a
         * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_DescribeFileSystems.html">
         * DescribeFileSystems</a> operation, which returns the file system state along
         * with other information.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemFromBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFileSystemFromBackupOutcome CreateFileSystemFromBackup(const Model::CreateFileSystemFromBackupRequest& request) const;

        /**
         * A Callable wrapper for CreateFileSystemFromBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFileSystemFromBackupRequestT = Model::CreateFileSystemFromBackupRequest>
        Model::CreateFileSystemFromBackupOutcomeCallable CreateFileSystemFromBackupCallable(const CreateFileSystemFromBackupRequestT& request) const
        {
            return SubmitCallable(&FSxClient::CreateFileSystemFromBackup, request);
        }

        /**
         * An Async wrapper for CreateFileSystemFromBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFileSystemFromBackupRequestT = Model::CreateFileSystemFromBackupRequest>
        void CreateFileSystemFromBackupAsync(const CreateFileSystemFromBackupRequestT& request, const CreateFileSystemFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::CreateFileSystemFromBackup, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of an existing Amazon FSx for OpenZFS volume. With
         * snapshots, you can easily undo file changes and compare file versions by
         * restoring the volume to a previous version.</p> <p>If a snapshot with the
         * specified client request token exists, and the parameters match, this operation
         * returns the description of the existing snapshot. If a snapshot with the
         * specified client request token exists, and the parameters don't match, this
         * operation returns <code>IncompatibleParameterError</code>. If a snapshot with
         * the specified client request token doesn't exist, <code>CreateSnapshot</code>
         * does the following:</p> <ul> <li> <p>Creates a new OpenZFS snapshot with an
         * assigned ID, and an initial lifecycle state of <code>CREATING</code>.</p> </li>
         * <li> <p>Returns the description of the snapshot.</p> </li> </ul> <p>By using the
         * idempotent operation, you can retry a <code>CreateSnapshot</code> operation
         * without the risk of creating an extra snapshot. This approach can be useful when
         * an initial call fails in a way that makes it unclear whether a snapshot was
         * created. If you use the same client request token and the initial call created a
         * snapshot, the operation returns a successful result because all the parameters
         * are the same.</p> <p>The <code>CreateSnapshot</code> operation returns while the
         * snapshot's lifecycle state is still <code>CREATING</code>. You can check the
         * snapshot creation status by calling the <a
         * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_DescribeSnapshots.html">DescribeSnapshots</a>
         * operation, which returns the snapshot state along with other
         * information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSnapshotRequestT = Model::CreateSnapshotRequest>
        Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const CreateSnapshotRequestT& request) const
        {
            return SubmitCallable(&FSxClient::CreateSnapshot, request);
        }

        /**
         * An Async wrapper for CreateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSnapshotRequestT = Model::CreateSnapshotRequest>
        void CreateSnapshotAsync(const CreateSnapshotRequestT& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::CreateSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a storage virtual machine (SVM) for an Amazon FSx for ONTAP file
         * system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateStorageVirtualMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStorageVirtualMachineOutcome CreateStorageVirtualMachine(const Model::CreateStorageVirtualMachineRequest& request) const;

        /**
         * A Callable wrapper for CreateStorageVirtualMachine that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStorageVirtualMachineRequestT = Model::CreateStorageVirtualMachineRequest>
        Model::CreateStorageVirtualMachineOutcomeCallable CreateStorageVirtualMachineCallable(const CreateStorageVirtualMachineRequestT& request) const
        {
            return SubmitCallable(&FSxClient::CreateStorageVirtualMachine, request);
        }

        /**
         * An Async wrapper for CreateStorageVirtualMachine that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStorageVirtualMachineRequestT = Model::CreateStorageVirtualMachineRequest>
        void CreateStorageVirtualMachineAsync(const CreateStorageVirtualMachineRequestT& request, const CreateStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::CreateStorageVirtualMachine, request, handler, context);
        }

        /**
         * <p>Creates an FSx for ONTAP or Amazon FSx for OpenZFS storage
         * volume.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVolumeOutcome CreateVolume(const Model::CreateVolumeRequest& request) const;

        /**
         * A Callable wrapper for CreateVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVolumeRequestT = Model::CreateVolumeRequest>
        Model::CreateVolumeOutcomeCallable CreateVolumeCallable(const CreateVolumeRequestT& request) const
        {
            return SubmitCallable(&FSxClient::CreateVolume, request);
        }

        /**
         * An Async wrapper for CreateVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVolumeRequestT = Model::CreateVolumeRequest>
        void CreateVolumeAsync(const CreateVolumeRequestT& request, const CreateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::CreateVolume, request, handler, context);
        }

        /**
         * <p>Creates a new Amazon FSx for NetApp ONTAP volume from an existing Amazon FSx
         * volume backup.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateVolumeFromBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVolumeFromBackupOutcome CreateVolumeFromBackup(const Model::CreateVolumeFromBackupRequest& request) const;

        /**
         * A Callable wrapper for CreateVolumeFromBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVolumeFromBackupRequestT = Model::CreateVolumeFromBackupRequest>
        Model::CreateVolumeFromBackupOutcomeCallable CreateVolumeFromBackupCallable(const CreateVolumeFromBackupRequestT& request) const
        {
            return SubmitCallable(&FSxClient::CreateVolumeFromBackup, request);
        }

        /**
         * An Async wrapper for CreateVolumeFromBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVolumeFromBackupRequestT = Model::CreateVolumeFromBackupRequest>
        void CreateVolumeFromBackupAsync(const CreateVolumeFromBackupRequestT& request, const CreateVolumeFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::CreateVolumeFromBackup, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon FSx backup. After deletion, the backup no longer exists,
         * and its data is gone.</p> <p>The <code>DeleteBackup</code> call returns
         * instantly. The backup won't show up in later <code>DescribeBackups</code>
         * calls.</p>  <p>The data in a deleted backup is also deleted and can't
         * be recovered by any means.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupOutcome DeleteBackup(const Model::DeleteBackupRequest& request) const;

        /**
         * A Callable wrapper for DeleteBackup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBackupRequestT = Model::DeleteBackupRequest>
        Model::DeleteBackupOutcomeCallable DeleteBackupCallable(const DeleteBackupRequestT& request) const
        {
            return SubmitCallable(&FSxClient::DeleteBackup, request);
        }

        /**
         * An Async wrapper for DeleteBackup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBackupRequestT = Model::DeleteBackupRequest>
        void DeleteBackupAsync(const DeleteBackupRequestT& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::DeleteBackup, request, handler, context);
        }

        /**
         * <p>Deletes a data repository association on an Amazon FSx for Lustre file
         * system. Deleting the data repository association unlinks the file system from
         * the Amazon S3 bucket. When deleting a data repository association, you have the
         * option of deleting the data in the file system that corresponds to the data
         * repository association. Data repository associations are supported on all FSx
         * for Lustre 2.12 and 2.15 file systems, excluding <code>scratch_1</code>
         * deployment type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteDataRepositoryAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDataRepositoryAssociationOutcome DeleteDataRepositoryAssociation(const Model::DeleteDataRepositoryAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDataRepositoryAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDataRepositoryAssociationRequestT = Model::DeleteDataRepositoryAssociationRequest>
        Model::DeleteDataRepositoryAssociationOutcomeCallable DeleteDataRepositoryAssociationCallable(const DeleteDataRepositoryAssociationRequestT& request) const
        {
            return SubmitCallable(&FSxClient::DeleteDataRepositoryAssociation, request);
        }

        /**
         * An Async wrapper for DeleteDataRepositoryAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDataRepositoryAssociationRequestT = Model::DeleteDataRepositoryAssociationRequest>
        void DeleteDataRepositoryAssociationAsync(const DeleteDataRepositoryAssociationRequestT& request, const DeleteDataRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::DeleteDataRepositoryAssociation, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon File Cache resource. After deletion, the cache no longer
         * exists, and its data is gone.</p> <p>The <code>DeleteFileCache</code> operation
         * returns while the cache has the <code>DELETING</code> status. You can check the
         * cache deletion status by calling the <a
         * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_DescribeFileCaches.html">DescribeFileCaches</a>
         * operation, which returns a list of caches in your account. If you pass the cache
         * ID for a deleted cache, the <code>DescribeFileCaches</code> operation returns a
         * <code>FileCacheNotFound</code> error.</p>  <p>The data in a deleted
         * cache is also deleted and can't be recovered by any means.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileCache">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFileCacheOutcome DeleteFileCache(const Model::DeleteFileCacheRequest& request) const;

        /**
         * A Callable wrapper for DeleteFileCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFileCacheRequestT = Model::DeleteFileCacheRequest>
        Model::DeleteFileCacheOutcomeCallable DeleteFileCacheCallable(const DeleteFileCacheRequestT& request) const
        {
            return SubmitCallable(&FSxClient::DeleteFileCache, request);
        }

        /**
         * An Async wrapper for DeleteFileCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFileCacheRequestT = Model::DeleteFileCacheRequest>
        void DeleteFileCacheAsync(const DeleteFileCacheRequestT& request, const DeleteFileCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::DeleteFileCache, request, handler, context);
        }

        /**
         * <p>Deletes a file system. After deletion, the file system no longer exists, and
         * its data is gone. Any existing automatic backups and snapshots are also
         * deleted.</p> <p>To delete an Amazon FSx for NetApp ONTAP file system, first
         * delete all the volumes and storage virtual machines (SVMs) on the file system.
         * Then provide a <code>FileSystemId</code> value to the
         * <code>DeleteFileSystem</code> operation.</p> <p>Before deleting an Amazon FSx
         * for OpenZFS file system, make sure that there aren't any Amazon S3 access points
         * attached to any volume. For more information on how to list S3 access points
         * that are attached to volumes, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/access-points-list">Listing
         * S3 access point attachments</a>. For more information on how to delete S3 access
         * points, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/OpenZFSGuide/delete-points-list">Deleting
         * an S3 access point attachment</a>.</p> <p>By default, when you delete an Amazon
         * FSx for Windows File Server file system, a final backup is created upon
         * deletion. This final backup isn't subject to the file system's retention policy,
         * and must be manually deleted.</p> <p>To delete an Amazon FSx for Lustre file
         * system, first <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/unmounting-fs.html">unmount</a>
         * it from every connected Amazon EC2 instance, then provide a
         * <code>FileSystemId</code> value to the <code>DeleteFileSystem</code> operation.
         * By default, Amazon FSx will not take a final backup when the
         * <code>DeleteFileSystem</code> operation is invoked. On file systems not linked
         * to an Amazon S3 bucket, set <code>SkipFinalBackup</code> to <code>false</code>
         * to take a final backup of the file system you are deleting. Backups cannot be
         * enabled on S3-linked file systems. To ensure all of your data is written back to
         * S3 before deleting your file system, you can either monitor for the <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/monitoring-cloudwatch.html#auto-import-export-metrics">AgeOfOldestQueuedMessage</a>
         * metric to be zero (if using automatic export) or you can run an <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/export-data-repo-task-dra.html">export
         * data repository task</a>. If you have automatic export enabled and want to use
         * an export data repository task, you have to disable automatic export before
         * executing the export data repository task.</p> <p>The
         * <code>DeleteFileSystem</code> operation returns while the file system has the
         * <code>DELETING</code> status. You can check the file system deletion status by
         * calling the <a
         * href="https://docs.aws.amazon.com/fsx/latest/APIReference/API_DescribeFileSystems.html">DescribeFileSystems</a>
         * operation, which returns a list of file systems in your account. If you pass the
         * file system ID for a deleted file system, the <code>DescribeFileSystems</code>
         * operation returns a <code>FileSystemNotFound</code> error.</p>  <p>If a
         * data repository task is in a <code>PENDING</code> or <code>EXECUTING</code>
         * state, deleting an Amazon FSx for Lustre file system will fail with an HTTP
         * status code 400 (Bad Request).</p>   <p>The data in a deleted
         * file system is also deleted and can't be recovered by any means.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFileSystemOutcome DeleteFileSystem(const Model::DeleteFileSystemRequest& request) const;

        /**
         * A Callable wrapper for DeleteFileSystem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFileSystemRequestT = Model::DeleteFileSystemRequest>
        Model::DeleteFileSystemOutcomeCallable DeleteFileSystemCallable(const DeleteFileSystemRequestT& request) const
        {
            return SubmitCallable(&FSxClient::DeleteFileSystem, request);
        }

        /**
         * An Async wrapper for DeleteFileSystem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFileSystemRequestT = Model::DeleteFileSystemRequest>
        void DeleteFileSystemAsync(const DeleteFileSystemRequestT& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::DeleteFileSystem, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon FSx for OpenZFS snapshot. After deletion, the snapshot no
         * longer exists, and its data is gone. Deleting a snapshot doesn't affect
         * snapshots stored in a file system backup. </p> <p>The
         * <code>DeleteSnapshot</code> operation returns instantly. The snapshot appears
         * with the lifecycle status of <code>DELETING</code> until the deletion is
         * complete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSnapshotRequestT = Model::DeleteSnapshotRequest>
        Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const DeleteSnapshotRequestT& request) const
        {
            return SubmitCallable(&FSxClient::DeleteSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSnapshotRequestT = Model::DeleteSnapshotRequest>
        void DeleteSnapshotAsync(const DeleteSnapshotRequestT& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::DeleteSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes an existing Amazon FSx for ONTAP storage virtual machine (SVM). Prior
         * to deleting an SVM, you must delete all non-root volumes in the SVM, otherwise
         * the operation will fail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteStorageVirtualMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStorageVirtualMachineOutcome DeleteStorageVirtualMachine(const Model::DeleteStorageVirtualMachineRequest& request) const;

        /**
         * A Callable wrapper for DeleteStorageVirtualMachine that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStorageVirtualMachineRequestT = Model::DeleteStorageVirtualMachineRequest>
        Model::DeleteStorageVirtualMachineOutcomeCallable DeleteStorageVirtualMachineCallable(const DeleteStorageVirtualMachineRequestT& request) const
        {
            return SubmitCallable(&FSxClient::DeleteStorageVirtualMachine, request);
        }

        /**
         * An Async wrapper for DeleteStorageVirtualMachine that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStorageVirtualMachineRequestT = Model::DeleteStorageVirtualMachineRequest>
        void DeleteStorageVirtualMachineAsync(const DeleteStorageVirtualMachineRequestT& request, const DeleteStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::DeleteStorageVirtualMachine, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon FSx for NetApp ONTAP or Amazon FSx for OpenZFS
         * volume.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVolumeOutcome DeleteVolume(const Model::DeleteVolumeRequest& request) const;

        /**
         * A Callable wrapper for DeleteVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVolumeRequestT = Model::DeleteVolumeRequest>
        Model::DeleteVolumeOutcomeCallable DeleteVolumeCallable(const DeleteVolumeRequestT& request) const
        {
            return SubmitCallable(&FSxClient::DeleteVolume, request);
        }

        /**
         * An Async wrapper for DeleteVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVolumeRequestT = Model::DeleteVolumeRequest>
        void DeleteVolumeAsync(const DeleteVolumeRequestT& request, const DeleteVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::DeleteVolume, request, handler, context);
        }

        /**
         * <p>Returns the description of a specific Amazon FSx backup, if a
         * <code>BackupIds</code> value is provided for that backup. Otherwise, it returns
         * all backups owned by your Amazon Web Services account in the Amazon Web Services
         * Region of the endpoint that you're calling.</p> <p>When retrieving all backups,
         * you can optionally specify the <code>MaxResults</code> parameter to limit the
         * number of backups in a response. If more backups remain, Amazon FSx returns a
         * <code>NextToken</code> value in the response. In this case, send a later request
         * with the <code>NextToken</code> request parameter set to the value of the
         * <code>NextToken</code> value from the last response.</p> <p>This operation is
         * used in an iterative process to retrieve a list of your backups.
         * <code>DescribeBackups</code> is called first without a <code>NextToken</code>
         * value. Then the operation continues to be called with the <code>NextToken</code>
         * parameter set to the value of the last <code>NextToken</code> value until a
         * response has no <code>NextToken</code> value.</p> <p>When using this operation,
         * keep the following in mind:</p> <ul> <li> <p>The operation might return fewer
         * than the <code>MaxResults</code> value of backup descriptions while still
         * including a <code>NextToken</code> value.</p> </li> <li> <p>The order of the
         * backups returned in the response of one <code>DescribeBackups</code> call and
         * the order of the backups returned across the responses of a multi-call iteration
         * is unspecified.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBackupsOutcome DescribeBackups(const Model::DescribeBackupsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeBackups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeBackupsRequestT = Model::DescribeBackupsRequest>
        Model::DescribeBackupsOutcomeCallable DescribeBackupsCallable(const DescribeBackupsRequestT& request = {}) const
        {
            return SubmitCallable(&FSxClient::DescribeBackups, request);
        }

        /**
         * An Async wrapper for DescribeBackups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBackupsRequestT = Model::DescribeBackupsRequest>
        void DescribeBackupsAsync(const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeBackupsRequestT& request = {}) const
        {
            return SubmitAsync(&FSxClient::DescribeBackups, request, handler, context);
        }

        /**
         * <p>Returns the description of specific Amazon FSx for Lustre or Amazon File
         * Cache data repository associations, if one or more <code>AssociationIds</code>
         * values are provided in the request, or if filters are used in the request. Data
         * repository associations are supported on Amazon File Cache resources and all FSx
         * for Lustre 2.12 and 2,15 file systems, excluding <code>scratch_1</code>
         * deployment type.</p> <p>You can use filters to narrow the response to include
         * just data repository associations for specific file systems (use the
         * <code>file-system-id</code> filter with the ID of the file system) or caches
         * (use the <code>file-cache-id</code> filter with the ID of the cache), or data
         * repository associations for a specific repository type (use the
         * <code>data-repository-type</code> filter with a value of <code>S3</code> or
         * <code>NFS</code>). If you don't use filters, the response returns all data
         * repository associations owned by your Amazon Web Services account in the Amazon
         * Web Services Region of the endpoint that you're calling.</p> <p>When retrieving
         * all data repository associations, you can paginate the response by using the
         * optional <code>MaxResults</code> parameter to limit the number of data
         * repository associations returned in a response. If more data repository
         * associations remain, a <code>NextToken</code> value is returned in the response.
         * In this case, send a later request with the <code>NextToken</code> request
         * parameter set to the value of <code>NextToken</code> from the last
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeDataRepositoryAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataRepositoryAssociationsOutcome DescribeDataRepositoryAssociations(const Model::DescribeDataRepositoryAssociationsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeDataRepositoryAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDataRepositoryAssociationsRequestT = Model::DescribeDataRepositoryAssociationsRequest>
        Model::DescribeDataRepositoryAssociationsOutcomeCallable DescribeDataRepositoryAssociationsCallable(const DescribeDataRepositoryAssociationsRequestT& request = {}) const
        {
            return SubmitCallable(&FSxClient::DescribeDataRepositoryAssociations, request);
        }

        /**
         * An Async wrapper for DescribeDataRepositoryAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDataRepositoryAssociationsRequestT = Model::DescribeDataRepositoryAssociationsRequest>
        void DescribeDataRepositoryAssociationsAsync(const DescribeDataRepositoryAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeDataRepositoryAssociationsRequestT& request = {}) const
        {
            return SubmitAsync(&FSxClient::DescribeDataRepositoryAssociations, request, handler, context);
        }

        /**
         * <p>Returns the description of specific Amazon FSx for Lustre or Amazon File
         * Cache data repository tasks, if one or more <code>TaskIds</code> values are
         * provided in the request, or if filters are used in the request. You can use
         * filters to narrow the response to include just tasks for specific file systems
         * or caches, or tasks in a specific lifecycle state. Otherwise, it returns all
         * data repository tasks owned by your Amazon Web Services account in the Amazon
         * Web Services Region of the endpoint that you're calling.</p> <p>When retrieving
         * all tasks, you can paginate the response by using the optional
         * <code>MaxResults</code> parameter to limit the number of tasks returned in a
         * response. If more tasks remain, a <code>NextToken</code> value is returned in
         * the response. In this case, send a later request with the <code>NextToken</code>
         * request parameter set to the value of <code>NextToken</code> from the last
         * response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeDataRepositoryTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataRepositoryTasksOutcome DescribeDataRepositoryTasks(const Model::DescribeDataRepositoryTasksRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeDataRepositoryTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDataRepositoryTasksRequestT = Model::DescribeDataRepositoryTasksRequest>
        Model::DescribeDataRepositoryTasksOutcomeCallable DescribeDataRepositoryTasksCallable(const DescribeDataRepositoryTasksRequestT& request = {}) const
        {
            return SubmitCallable(&FSxClient::DescribeDataRepositoryTasks, request);
        }

        /**
         * An Async wrapper for DescribeDataRepositoryTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDataRepositoryTasksRequestT = Model::DescribeDataRepositoryTasksRequest>
        void DescribeDataRepositoryTasksAsync(const DescribeDataRepositoryTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeDataRepositoryTasksRequestT& request = {}) const
        {
            return SubmitAsync(&FSxClient::DescribeDataRepositoryTasks, request, handler, context);
        }

        /**
         * <p>Returns the description of a specific Amazon File Cache resource, if a
         * <code>FileCacheIds</code> value is provided for that cache. Otherwise, it
         * returns descriptions of all caches owned by your Amazon Web Services account in
         * the Amazon Web Services Region of the endpoint that you're calling.</p> <p>When
         * retrieving all cache descriptions, you can optionally specify the
         * <code>MaxResults</code> parameter to limit the number of descriptions in a
         * response. If more cache descriptions remain, the operation returns a
         * <code>NextToken</code> value in the response. In this case, send a later request
         * with the <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This operation is used in
         * an iterative process to retrieve a list of your cache descriptions.
         * <code>DescribeFileCaches</code> is called first without a
         * <code>NextToken</code>value. Then the operation continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this operation, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> cache
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of caches returned in the response of one
         * <code>DescribeFileCaches</code> call and the order of caches returned across the
         * responses of a multicall iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileCaches">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFileCachesOutcome DescribeFileCaches(const Model::DescribeFileCachesRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeFileCaches that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFileCachesRequestT = Model::DescribeFileCachesRequest>
        Model::DescribeFileCachesOutcomeCallable DescribeFileCachesCallable(const DescribeFileCachesRequestT& request = {}) const
        {
            return SubmitCallable(&FSxClient::DescribeFileCaches, request);
        }

        /**
         * An Async wrapper for DescribeFileCaches that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFileCachesRequestT = Model::DescribeFileCachesRequest>
        void DescribeFileCachesAsync(const DescribeFileCachesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeFileCachesRequestT& request = {}) const
        {
            return SubmitAsync(&FSxClient::DescribeFileCaches, request, handler, context);
        }

        /**
         * <p>Returns the DNS aliases that are associated with the specified Amazon FSx for
         * Windows File Server file system. A history of all DNS aliases that have been
         * associated with and disassociated from the file system is available in the list
         * of <a>AdministrativeAction</a> provided in the <a>DescribeFileSystems</a>
         * operation response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystemAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFileSystemAliasesOutcome DescribeFileSystemAliases(const Model::DescribeFileSystemAliasesRequest& request) const;

        /**
         * A Callable wrapper for DescribeFileSystemAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFileSystemAliasesRequestT = Model::DescribeFileSystemAliasesRequest>
        Model::DescribeFileSystemAliasesOutcomeCallable DescribeFileSystemAliasesCallable(const DescribeFileSystemAliasesRequestT& request) const
        {
            return SubmitCallable(&FSxClient::DescribeFileSystemAliases, request);
        }

        /**
         * An Async wrapper for DescribeFileSystemAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFileSystemAliasesRequestT = Model::DescribeFileSystemAliasesRequest>
        void DescribeFileSystemAliasesAsync(const DescribeFileSystemAliasesRequestT& request, const DescribeFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::DescribeFileSystemAliases, request, handler, context);
        }

        /**
         * <p>Returns the description of specific Amazon FSx file systems, if a
         * <code>FileSystemIds</code> value is provided for that file system. Otherwise, it
         * returns descriptions of all file systems owned by your Amazon Web Services
         * account in the Amazon Web Services Region of the endpoint that you're
         * calling.</p> <p>When retrieving all file system descriptions, you can optionally
         * specify the <code>MaxResults</code> parameter to limit the number of
         * descriptions in a response. If more file system descriptions remain, Amazon FSx
         * returns a <code>NextToken</code> value in the response. In this case, send a
         * later request with the <code>NextToken</code> request parameter set to the value
         * of <code>NextToken</code> from the last response.</p> <p>This operation is used
         * in an iterative process to retrieve a list of your file system descriptions.
         * <code>DescribeFileSystems</code> is called first without a
         * <code>NextToken</code>value. Then the operation continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this operation, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of file systems returned in the response of one
         * <code>DescribeFileSystems</code> call and the order of file systems returned
         * across the responses of a multicall iteration is unspecified.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFileSystemsOutcome DescribeFileSystems(const Model::DescribeFileSystemsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeFileSystems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFileSystemsRequestT = Model::DescribeFileSystemsRequest>
        Model::DescribeFileSystemsOutcomeCallable DescribeFileSystemsCallable(const DescribeFileSystemsRequestT& request = {}) const
        {
            return SubmitCallable(&FSxClient::DescribeFileSystems, request);
        }

        /**
         * An Async wrapper for DescribeFileSystems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFileSystemsRequestT = Model::DescribeFileSystemsRequest>
        void DescribeFileSystemsAsync(const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeFileSystemsRequestT& request = {}) const
        {
            return SubmitAsync(&FSxClient::DescribeFileSystems, request, handler, context);
        }

        /**
         * <p>Describes one or more S3 access points attached to Amazon FSx volumes.</p>
         * <p>The requester requires the following permission to perform this action:</p>
         * <ul> <li> <p> <code>fsx:DescribeS3AccessPointAttachments</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeS3AccessPointAttachments">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeS3AccessPointAttachmentsOutcome DescribeS3AccessPointAttachments(const Model::DescribeS3AccessPointAttachmentsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeS3AccessPointAttachments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeS3AccessPointAttachmentsRequestT = Model::DescribeS3AccessPointAttachmentsRequest>
        Model::DescribeS3AccessPointAttachmentsOutcomeCallable DescribeS3AccessPointAttachmentsCallable(const DescribeS3AccessPointAttachmentsRequestT& request = {}) const
        {
            return SubmitCallable(&FSxClient::DescribeS3AccessPointAttachments, request);
        }

        /**
         * An Async wrapper for DescribeS3AccessPointAttachments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeS3AccessPointAttachmentsRequestT = Model::DescribeS3AccessPointAttachmentsRequest>
        void DescribeS3AccessPointAttachmentsAsync(const DescribeS3AccessPointAttachmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeS3AccessPointAttachmentsRequestT& request = {}) const
        {
            return SubmitAsync(&FSxClient::DescribeS3AccessPointAttachments, request, handler, context);
        }

        /**
         * <p>Indicates whether participant accounts in your organization can create Amazon
         * FSx for NetApp ONTAP Multi-AZ file systems in subnets that are shared by a
         * virtual private cloud (VPC) owner. For more information, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/creating-file-systems.html#fsxn-vpc-shared-subnets">Creating
         * FSx for ONTAP file systems in shared subnets</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeSharedVpcConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSharedVpcConfigurationOutcome DescribeSharedVpcConfiguration(const Model::DescribeSharedVpcConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeSharedVpcConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSharedVpcConfigurationRequestT = Model::DescribeSharedVpcConfigurationRequest>
        Model::DescribeSharedVpcConfigurationOutcomeCallable DescribeSharedVpcConfigurationCallable(const DescribeSharedVpcConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&FSxClient::DescribeSharedVpcConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeSharedVpcConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSharedVpcConfigurationRequestT = Model::DescribeSharedVpcConfigurationRequest>
        void DescribeSharedVpcConfigurationAsync(const DescribeSharedVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeSharedVpcConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&FSxClient::DescribeSharedVpcConfiguration, request, handler, context);
        }

        /**
         * <p>Returns the description of specific Amazon FSx for OpenZFS snapshots, if a
         * <code>SnapshotIds</code> value is provided. Otherwise, this operation returns
         * all snapshots owned by your Amazon Web Services account in the Amazon Web
         * Services Region of the endpoint that you're calling.</p> <p>When retrieving all
         * snapshots, you can optionally specify the <code>MaxResults</code> parameter to
         * limit the number of snapshots in a response. If more backups remain, Amazon FSx
         * returns a <code>NextToken</code> value in the response. In this case, send a
         * later request with the <code>NextToken</code> request parameter set to the value
         * of <code>NextToken</code> from the last response. </p> <p>Use this operation in
         * an iterative process to retrieve a list of your snapshots.
         * <code>DescribeSnapshots</code> is called first without a <code>NextToken</code>
         * value. Then the operation continues to be called with the <code>NextToken</code>
         * parameter set to the value of the last <code>NextToken</code> value until a
         * response has no <code>NextToken</code> value.</p> <p>When using this operation,
         * keep the following in mind:</p> <ul> <li> <p>The operation might return fewer
         * than the <code>MaxResults</code> value of snapshot descriptions while still
         * including a <code>NextToken</code> value.</p> </li> <li> <p>The order of
         * snapshots returned in the response of one <code>DescribeSnapshots</code> call
         * and the order of backups returned across the responses of a multi-call iteration
         * is unspecified. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSnapshotsRequestT = Model::DescribeSnapshotsRequest>
        Model::DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const DescribeSnapshotsRequestT& request = {}) const
        {
            return SubmitCallable(&FSxClient::DescribeSnapshots, request);
        }

        /**
         * An Async wrapper for DescribeSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSnapshotsRequestT = Model::DescribeSnapshotsRequest>
        void DescribeSnapshotsAsync(const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeSnapshotsRequestT& request = {}) const
        {
            return SubmitAsync(&FSxClient::DescribeSnapshots, request, handler, context);
        }

        /**
         * <p>Describes one or more Amazon FSx for NetApp ONTAP storage virtual machines
         * (SVMs).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeStorageVirtualMachines">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStorageVirtualMachinesOutcome DescribeStorageVirtualMachines(const Model::DescribeStorageVirtualMachinesRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeStorageVirtualMachines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStorageVirtualMachinesRequestT = Model::DescribeStorageVirtualMachinesRequest>
        Model::DescribeStorageVirtualMachinesOutcomeCallable DescribeStorageVirtualMachinesCallable(const DescribeStorageVirtualMachinesRequestT& request = {}) const
        {
            return SubmitCallable(&FSxClient::DescribeStorageVirtualMachines, request);
        }

        /**
         * An Async wrapper for DescribeStorageVirtualMachines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStorageVirtualMachinesRequestT = Model::DescribeStorageVirtualMachinesRequest>
        void DescribeStorageVirtualMachinesAsync(const DescribeStorageVirtualMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeStorageVirtualMachinesRequestT& request = {}) const
        {
            return SubmitAsync(&FSxClient::DescribeStorageVirtualMachines, request, handler, context);
        }

        /**
         * <p>Describes one or more Amazon FSx for NetApp ONTAP or Amazon FSx for OpenZFS
         * volumes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeVolumes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVolumesOutcome DescribeVolumes(const Model::DescribeVolumesRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeVolumes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVolumesRequestT = Model::DescribeVolumesRequest>
        Model::DescribeVolumesOutcomeCallable DescribeVolumesCallable(const DescribeVolumesRequestT& request = {}) const
        {
            return SubmitCallable(&FSxClient::DescribeVolumes, request);
        }

        /**
         * An Async wrapper for DescribeVolumes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVolumesRequestT = Model::DescribeVolumesRequest>
        void DescribeVolumesAsync(const DescribeVolumesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeVolumesRequestT& request = {}) const
        {
            return SubmitAsync(&FSxClient::DescribeVolumes, request, handler, context);
        }

        /**
         * <p>Detaches an S3 access point from an Amazon FSx volume and deletes the S3
         * access point.</p> <p>The requester requires the following permission to perform
         * this action:</p> <ul> <li> <p> <code>fsx:DetachAndDeleteS3AccessPoint</code>
         * </p> </li> <li> <p> <code>s3:DeleteAccessPoint</code> </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DetachAndDeleteS3AccessPoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachAndDeleteS3AccessPointOutcome DetachAndDeleteS3AccessPoint(const Model::DetachAndDeleteS3AccessPointRequest& request) const;

        /**
         * A Callable wrapper for DetachAndDeleteS3AccessPoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachAndDeleteS3AccessPointRequestT = Model::DetachAndDeleteS3AccessPointRequest>
        Model::DetachAndDeleteS3AccessPointOutcomeCallable DetachAndDeleteS3AccessPointCallable(const DetachAndDeleteS3AccessPointRequestT& request) const
        {
            return SubmitCallable(&FSxClient::DetachAndDeleteS3AccessPoint, request);
        }

        /**
         * An Async wrapper for DetachAndDeleteS3AccessPoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachAndDeleteS3AccessPointRequestT = Model::DetachAndDeleteS3AccessPointRequest>
        void DetachAndDeleteS3AccessPointAsync(const DetachAndDeleteS3AccessPointRequestT& request, const DetachAndDeleteS3AccessPointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::DetachAndDeleteS3AccessPoint, request, handler, context);
        }

        /**
         * <p>Use this action to disassociate, or remove, one or more Domain Name Service
         * (DNS) aliases from an Amazon FSx for Windows File Server file system. If you
         * attempt to disassociate a DNS alias that is not associated with the file system,
         * Amazon FSx responds with an HTTP status code 400 (Bad Request). For more
         * information, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-dns-aliases.html">Working
         * with DNS Aliases</a>.</p> <p>The system generated response showing the DNS
         * aliases that Amazon FSx is attempting to disassociate from the file system. Use
         * the API operation to monitor the status of the aliases Amazon FSx is
         * disassociating with the file system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DisassociateFileSystemAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFileSystemAliasesOutcome DisassociateFileSystemAliases(const Model::DisassociateFileSystemAliasesRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFileSystemAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateFileSystemAliasesRequestT = Model::DisassociateFileSystemAliasesRequest>
        Model::DisassociateFileSystemAliasesOutcomeCallable DisassociateFileSystemAliasesCallable(const DisassociateFileSystemAliasesRequestT& request) const
        {
            return SubmitCallable(&FSxClient::DisassociateFileSystemAliases, request);
        }

        /**
         * An Async wrapper for DisassociateFileSystemAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateFileSystemAliasesRequestT = Model::DisassociateFileSystemAliasesRequest>
        void DisassociateFileSystemAliasesAsync(const DisassociateFileSystemAliasesRequestT& request, const DisassociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::DisassociateFileSystemAliases, request, handler, context);
        }

        /**
         * <p>Lists tags for Amazon FSx resources.</p> <p>When retrieving all tags, you can
         * optionally specify the <code>MaxResults</code> parameter to limit the number of
         * tags in a response. If more tags remain, Amazon FSx returns a
         * <code>NextToken</code> value in the response. In this case, send a later request
         * with the <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This action is used in an
         * iterative process to retrieve a list of your tags.
         * <code>ListTagsForResource</code> is called first without a
         * <code>NextToken</code>value. Then the action continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of tags returned in the response of one
         * <code>ListTagsForResource</code> call and the order of tags returned across the
         * responses of a multi-call iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&FSxClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Releases the file system lock from an Amazon FSx for OpenZFS file
         * system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ReleaseFileSystemNfsV3Locks">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleaseFileSystemNfsV3LocksOutcome ReleaseFileSystemNfsV3Locks(const Model::ReleaseFileSystemNfsV3LocksRequest& request) const;

        /**
         * A Callable wrapper for ReleaseFileSystemNfsV3Locks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReleaseFileSystemNfsV3LocksRequestT = Model::ReleaseFileSystemNfsV3LocksRequest>
        Model::ReleaseFileSystemNfsV3LocksOutcomeCallable ReleaseFileSystemNfsV3LocksCallable(const ReleaseFileSystemNfsV3LocksRequestT& request) const
        {
            return SubmitCallable(&FSxClient::ReleaseFileSystemNfsV3Locks, request);
        }

        /**
         * An Async wrapper for ReleaseFileSystemNfsV3Locks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReleaseFileSystemNfsV3LocksRequestT = Model::ReleaseFileSystemNfsV3LocksRequest>
        void ReleaseFileSystemNfsV3LocksAsync(const ReleaseFileSystemNfsV3LocksRequestT& request, const ReleaseFileSystemNfsV3LocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::ReleaseFileSystemNfsV3Locks, request, handler, context);
        }

        /**
         * <p>Returns an Amazon FSx for OpenZFS volume to the state saved by the specified
         * snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/RestoreVolumeFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreVolumeFromSnapshotOutcome RestoreVolumeFromSnapshot(const Model::RestoreVolumeFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for RestoreVolumeFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreVolumeFromSnapshotRequestT = Model::RestoreVolumeFromSnapshotRequest>
        Model::RestoreVolumeFromSnapshotOutcomeCallable RestoreVolumeFromSnapshotCallable(const RestoreVolumeFromSnapshotRequestT& request) const
        {
            return SubmitCallable(&FSxClient::RestoreVolumeFromSnapshot, request);
        }

        /**
         * An Async wrapper for RestoreVolumeFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreVolumeFromSnapshotRequestT = Model::RestoreVolumeFromSnapshotRequest>
        void RestoreVolumeFromSnapshotAsync(const RestoreVolumeFromSnapshotRequestT& request, const RestoreVolumeFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::RestoreVolumeFromSnapshot, request, handler, context);
        }

        /**
         * <p>After performing steps to repair the Active Directory configuration of an FSx
         * for Windows File Server file system, use this action to initiate the process of
         * Amazon FSx attempting to reconnect to the file system.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/StartMisconfiguredStateRecovery">AWS
         * API Reference</a></p>
         */
        virtual Model::StartMisconfiguredStateRecoveryOutcome StartMisconfiguredStateRecovery(const Model::StartMisconfiguredStateRecoveryRequest& request) const;

        /**
         * A Callable wrapper for StartMisconfiguredStateRecovery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartMisconfiguredStateRecoveryRequestT = Model::StartMisconfiguredStateRecoveryRequest>
        Model::StartMisconfiguredStateRecoveryOutcomeCallable StartMisconfiguredStateRecoveryCallable(const StartMisconfiguredStateRecoveryRequestT& request) const
        {
            return SubmitCallable(&FSxClient::StartMisconfiguredStateRecovery, request);
        }

        /**
         * An Async wrapper for StartMisconfiguredStateRecovery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartMisconfiguredStateRecoveryRequestT = Model::StartMisconfiguredStateRecoveryRequest>
        void StartMisconfiguredStateRecoveryAsync(const StartMisconfiguredStateRecoveryRequestT& request, const StartMisconfiguredStateRecoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::StartMisconfiguredStateRecovery, request, handler, context);
        }

        /**
         * <p>Tags an Amazon FSx resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&FSxClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::TagResource, request, handler, context);
        }

        /**
         * <p>This action removes a tag from an Amazon FSx resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&FSxClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the configuration of an existing data repository association on an
         * Amazon FSx for Lustre file system. Data repository associations are supported on
         * all FSx for Lustre 2.12 and 2.15 file systems, excluding <code>scratch_1</code>
         * deployment type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateDataRepositoryAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDataRepositoryAssociationOutcome UpdateDataRepositoryAssociation(const Model::UpdateDataRepositoryAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDataRepositoryAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDataRepositoryAssociationRequestT = Model::UpdateDataRepositoryAssociationRequest>
        Model::UpdateDataRepositoryAssociationOutcomeCallable UpdateDataRepositoryAssociationCallable(const UpdateDataRepositoryAssociationRequestT& request) const
        {
            return SubmitCallable(&FSxClient::UpdateDataRepositoryAssociation, request);
        }

        /**
         * An Async wrapper for UpdateDataRepositoryAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDataRepositoryAssociationRequestT = Model::UpdateDataRepositoryAssociationRequest>
        void UpdateDataRepositoryAssociationAsync(const UpdateDataRepositoryAssociationRequestT& request, const UpdateDataRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::UpdateDataRepositoryAssociation, request, handler, context);
        }

        /**
         * <p>Updates the configuration of an existing Amazon File Cache resource. You can
         * update multiple properties in a single request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileCache">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFileCacheOutcome UpdateFileCache(const Model::UpdateFileCacheRequest& request) const;

        /**
         * A Callable wrapper for UpdateFileCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFileCacheRequestT = Model::UpdateFileCacheRequest>
        Model::UpdateFileCacheOutcomeCallable UpdateFileCacheCallable(const UpdateFileCacheRequestT& request) const
        {
            return SubmitCallable(&FSxClient::UpdateFileCache, request);
        }

        /**
         * An Async wrapper for UpdateFileCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFileCacheRequestT = Model::UpdateFileCacheRequest>
        void UpdateFileCacheAsync(const UpdateFileCacheRequestT& request, const UpdateFileCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::UpdateFileCache, request, handler, context);
        }

        /**
         * <p>Use this operation to update the configuration of an existing Amazon FSx file
         * system. You can update multiple properties in a single request.</p> <p>For FSx
         * for Windows File Server file systems, you can update the following
         * properties:</p> <ul> <li> <p> <code>AuditLogConfiguration</code> </p> </li> <li>
         * <p> <code>AutomaticBackupRetentionDays</code> </p> </li> <li> <p>
         * <code>DailyAutomaticBackupStartTime</code> </p> </li> <li> <p>
         * <code>DiskIopsConfiguration</code> </p> </li> <li> <p>
         * <code>SelfManagedActiveDirectoryConfiguration</code> </p> </li> <li> <p>
         * <code>StorageCapacity</code> </p> </li> <li> <p> <code>StorageType</code> </p>
         * </li> <li> <p> <code>ThroughputCapacity</code> </p> </li> <li> <p>
         * <code>WeeklyMaintenanceStartTime</code> </p> </li> </ul> <p>For FSx for Lustre
         * file systems, you can update the following properties:</p> <ul> <li> <p>
         * <code>AutoImportPolicy</code> </p> </li> <li> <p>
         * <code>AutomaticBackupRetentionDays</code> </p> </li> <li> <p>
         * <code>DailyAutomaticBackupStartTime</code> </p> </li> <li> <p>
         * <code>DataCompressionType</code> </p> </li> <li> <p>
         * <code>FileSystemTypeVersion</code> </p> </li> <li> <p>
         * <code>LogConfiguration</code> </p> </li> <li> <p>
         * <code>LustreReadCacheConfiguration</code> </p> </li> <li> <p>
         * <code>LustreRootSquashConfiguration</code> </p> </li> <li> <p>
         * <code>MetadataConfiguration</code> </p> </li> <li> <p>
         * <code>PerUnitStorageThroughput</code> </p> </li> <li> <p>
         * <code>StorageCapacity</code> </p> </li> <li> <p> <code>ThroughputCapacity</code>
         * </p> </li> <li> <p> <code>WeeklyMaintenanceStartTime</code> </p> </li> </ul>
         * <p>For FSx for ONTAP file systems, you can update the following properties:</p>
         * <ul> <li> <p> <code>AddRouteTableIds</code> </p> </li> <li> <p>
         * <code>AutomaticBackupRetentionDays</code> </p> </li> <li> <p>
         * <code>DailyAutomaticBackupStartTime</code> </p> </li> <li> <p>
         * <code>DiskIopsConfiguration</code> </p> </li> <li> <p>
         * <code>FsxAdminPassword</code> </p> </li> <li> <p> <code>HAPairs</code> </p>
         * </li> <li> <p> <code>RemoveRouteTableIds</code> </p> </li> <li> <p>
         * <code>StorageCapacity</code> </p> </li> <li> <p> <code>ThroughputCapacity</code>
         * </p> </li> <li> <p> <code>ThroughputCapacityPerHAPair</code> </p> </li> <li> <p>
         * <code>WeeklyMaintenanceStartTime</code> </p> </li> </ul> <p>For FSx for OpenZFS
         * file systems, you can update the following properties:</p> <ul> <li> <p>
         * <code>AddRouteTableIds</code> </p> </li> <li> <p>
         * <code>AutomaticBackupRetentionDays</code> </p> </li> <li> <p>
         * <code>CopyTagsToBackups</code> </p> </li> <li> <p>
         * <code>CopyTagsToVolumes</code> </p> </li> <li> <p>
         * <code>DailyAutomaticBackupStartTime</code> </p> </li> <li> <p>
         * <code>DiskIopsConfiguration</code> </p> </li> <li> <p>
         * <code>ReadCacheConfiguration</code> </p> </li> <li> <p>
         * <code>RemoveRouteTableIds</code> </p> </li> <li> <p>
         * <code>StorageCapacity</code> </p> </li> <li> <p> <code>ThroughputCapacity</code>
         * </p> </li> <li> <p> <code>WeeklyMaintenanceStartTime</code> </p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFileSystemOutcome UpdateFileSystem(const Model::UpdateFileSystemRequest& request) const;

        /**
         * A Callable wrapper for UpdateFileSystem that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFileSystemRequestT = Model::UpdateFileSystemRequest>
        Model::UpdateFileSystemOutcomeCallable UpdateFileSystemCallable(const UpdateFileSystemRequestT& request) const
        {
            return SubmitCallable(&FSxClient::UpdateFileSystem, request);
        }

        /**
         * An Async wrapper for UpdateFileSystem that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFileSystemRequestT = Model::UpdateFileSystemRequest>
        void UpdateFileSystemAsync(const UpdateFileSystemRequestT& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::UpdateFileSystem, request, handler, context);
        }

        /**
         * <p>Configures whether participant accounts in your organization can create
         * Amazon FSx for NetApp ONTAP Multi-AZ file systems in subnets that are shared by
         * a virtual private cloud (VPC) owner. For more information, see the <a
         * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/maz-shared-vpc.html">Amazon
         * FSx for NetApp ONTAP User Guide</a>.</p>  <p>We strongly recommend that
         * participant-created Multi-AZ file systems in the shared VPC are deleted before
         * you disable this feature. Once the feature is disabled, these file systems will
         * enter a <code>MISCONFIGURED</code> state and behave like Single-AZ file systems.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/maz-shared-vpc.html#disabling-maz-vpc-sharing">Important
         * considerations before disabling shared VPC support for Multi-AZ file
         * systems</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateSharedVpcConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSharedVpcConfigurationOutcome UpdateSharedVpcConfiguration(const Model::UpdateSharedVpcConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for UpdateSharedVpcConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSharedVpcConfigurationRequestT = Model::UpdateSharedVpcConfigurationRequest>
        Model::UpdateSharedVpcConfigurationOutcomeCallable UpdateSharedVpcConfigurationCallable(const UpdateSharedVpcConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&FSxClient::UpdateSharedVpcConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateSharedVpcConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSharedVpcConfigurationRequestT = Model::UpdateSharedVpcConfigurationRequest>
        void UpdateSharedVpcConfigurationAsync(const UpdateSharedVpcConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const UpdateSharedVpcConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&FSxClient::UpdateSharedVpcConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the name of an Amazon FSx for OpenZFS snapshot.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSnapshotOutcome UpdateSnapshot(const Model::UpdateSnapshotRequest& request) const;

        /**
         * A Callable wrapper for UpdateSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSnapshotRequestT = Model::UpdateSnapshotRequest>
        Model::UpdateSnapshotOutcomeCallable UpdateSnapshotCallable(const UpdateSnapshotRequestT& request) const
        {
            return SubmitCallable(&FSxClient::UpdateSnapshot, request);
        }

        /**
         * An Async wrapper for UpdateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSnapshotRequestT = Model::UpdateSnapshotRequest>
        void UpdateSnapshotAsync(const UpdateSnapshotRequestT& request, const UpdateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::UpdateSnapshot, request, handler, context);
        }

        /**
         * <p>Updates an FSx for ONTAP storage virtual machine (SVM).</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateStorageVirtualMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStorageVirtualMachineOutcome UpdateStorageVirtualMachine(const Model::UpdateStorageVirtualMachineRequest& request) const;

        /**
         * A Callable wrapper for UpdateStorageVirtualMachine that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStorageVirtualMachineRequestT = Model::UpdateStorageVirtualMachineRequest>
        Model::UpdateStorageVirtualMachineOutcomeCallable UpdateStorageVirtualMachineCallable(const UpdateStorageVirtualMachineRequestT& request) const
        {
            return SubmitCallable(&FSxClient::UpdateStorageVirtualMachine, request);
        }

        /**
         * An Async wrapper for UpdateStorageVirtualMachine that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStorageVirtualMachineRequestT = Model::UpdateStorageVirtualMachineRequest>
        void UpdateStorageVirtualMachineAsync(const UpdateStorageVirtualMachineRequestT& request, const UpdateStorageVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::UpdateStorageVirtualMachine, request, handler, context);
        }

        /**
         * <p>Updates the configuration of an Amazon FSx for NetApp ONTAP or Amazon FSx for
         * OpenZFS volume.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateVolume">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVolumeOutcome UpdateVolume(const Model::UpdateVolumeRequest& request) const;

        /**
         * A Callable wrapper for UpdateVolume that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVolumeRequestT = Model::UpdateVolumeRequest>
        Model::UpdateVolumeOutcomeCallable UpdateVolumeCallable(const UpdateVolumeRequestT& request) const
        {
            return SubmitCallable(&FSxClient::UpdateVolume, request);
        }

        /**
         * An Async wrapper for UpdateVolume that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVolumeRequestT = Model::UpdateVolumeRequest>
        void UpdateVolumeAsync(const UpdateVolumeRequestT& request, const UpdateVolumeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&FSxClient::UpdateVolume, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<FSxEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<FSxClient>;
      void init(const FSxClientConfiguration& clientConfiguration);

      FSxClientConfiguration m_clientConfiguration;
      std::shared_ptr<FSxEndpointProviderBase> m_endpointProvider;
  };

} // namespace FSx
} // namespace Aws
