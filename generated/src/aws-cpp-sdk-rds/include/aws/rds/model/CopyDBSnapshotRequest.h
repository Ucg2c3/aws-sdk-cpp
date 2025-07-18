﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyDBSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class CopyDBSnapshotRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CopyDBSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyDBSnapshot"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier for the source DB snapshot.</p> <p>If the source snapshot is
     * in the same Amazon Web Services Region as the copy, specify a valid DB snapshot
     * identifier. For example, you might specify
     * <code>rds:mysql-instance1-snapshot-20130805</code>.</p> <p>If the source
     * snapshot is in a different Amazon Web Services Region than the copy, specify a
     * valid DB snapshot ARN. For example, you might specify
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>.</p>
     * <p>If you are copying from a shared manual DB snapshot, this parameter must be
     * the Amazon Resource Name (ARN) of the shared DB snapshot.</p> <p>If you are
     * copying an encrypted snapshot this parameter must be in the ARN format for the
     * source Amazon Web Services Region.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * specify a valid system snapshot in the "available" state.</p> </li> </ul>
     * <p>Example: <code>rds:mydb-2012-04-02-00-01</code> </p> <p>Example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20130805</code>
     * </p>
     */
    inline const Aws::String& GetSourceDBSnapshotIdentifier() const { return m_sourceDBSnapshotIdentifier; }
    inline bool SourceDBSnapshotIdentifierHasBeenSet() const { return m_sourceDBSnapshotIdentifierHasBeenSet; }
    template<typename SourceDBSnapshotIdentifierT = Aws::String>
    void SetSourceDBSnapshotIdentifier(SourceDBSnapshotIdentifierT&& value) { m_sourceDBSnapshotIdentifierHasBeenSet = true; m_sourceDBSnapshotIdentifier = std::forward<SourceDBSnapshotIdentifierT>(value); }
    template<typename SourceDBSnapshotIdentifierT = Aws::String>
    CopyDBSnapshotRequest& WithSourceDBSnapshotIdentifier(SourceDBSnapshotIdentifierT&& value) { SetSourceDBSnapshotIdentifier(std::forward<SourceDBSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the copy of the snapshot.</p> <p>Constraints:</p> <ul>
     * <li> <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to
     * 255 letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-db-snapshot</code> </p>
     */
    inline const Aws::String& GetTargetDBSnapshotIdentifier() const { return m_targetDBSnapshotIdentifier; }
    inline bool TargetDBSnapshotIdentifierHasBeenSet() const { return m_targetDBSnapshotIdentifierHasBeenSet; }
    template<typename TargetDBSnapshotIdentifierT = Aws::String>
    void SetTargetDBSnapshotIdentifier(TargetDBSnapshotIdentifierT&& value) { m_targetDBSnapshotIdentifierHasBeenSet = true; m_targetDBSnapshotIdentifier = std::forward<TargetDBSnapshotIdentifierT>(value); }
    template<typename TargetDBSnapshotIdentifierT = Aws::String>
    CopyDBSnapshotRequest& WithTargetDBSnapshotIdentifier(TargetDBSnapshotIdentifierT&& value) { SetTargetDBSnapshotIdentifier(std::forward<TargetDBSnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services KMS key identifier for an encrypted DB snapshot. The
     * Amazon Web Services KMS key identifier is the key ARN, key ID, alias ARN, or
     * alias name for the KMS key.</p> <p>If you copy an encrypted DB snapshot from
     * your Amazon Web Services account, you can specify a value for this parameter to
     * encrypt the copy with a new KMS key. If you don't specify a value for this
     * parameter, then the copy of the DB snapshot is encrypted with the same Amazon
     * Web Services KMS key as the source DB snapshot.</p> <p>If you copy an encrypted
     * DB snapshot that is shared from another Amazon Web Services account, then you
     * must specify a value for this parameter.</p> <p>If you specify this parameter
     * when you copy an unencrypted snapshot, the copy is encrypted.</p> <p>If you copy
     * an encrypted snapshot to a different Amazon Web Services Region, then you must
     * specify an Amazon Web Services KMS key identifier for the destination Amazon Web
     * Services Region. KMS keys are specific to the Amazon Web Services Region that
     * they are created in, and you can't use KMS keys from one Amazon Web Services
     * Region in another Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    CopyDBSnapshotRequest& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CopyDBSnapshotRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CopyDBSnapshotRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether to copy all tags from the source DB snapshot to the target
     * DB snapshot. By default, tags aren't copied.</p>
     */
    inline bool GetCopyTags() const { return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline CopyDBSnapshotRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you are copying a snapshot from one Amazon Web Services GovCloud (US)
     * Region to another, the URL that contains a Signature Version 4 signed request
     * for the <code>CopyDBSnapshot</code> API operation in the source Amazon Web
     * Services Region that contains the source DB snapshot to copy.</p> <p>This
     * setting applies only to Amazon Web Services GovCloud (US) Regions. It's ignored
     * in other Amazon Web Services Regions.</p> <p>You must specify this parameter
     * when you copy an encrypted DB snapshot from another Amazon Web Services Region
     * by using the Amazon RDS API. Don't specify <code>PreSignedUrl</code> when you
     * are copying an encrypted DB snapshot in the same Amazon Web Services Region.</p>
     * <p>The presigned URL must be a valid request for the
     * <code>CopyDBClusterSnapshot</code> API operation that can run in the source
     * Amazon Web Services Region that contains the encrypted DB cluster snapshot to
     * copy. The presigned URL request must contain the following parameter values:</p>
     * <ul> <li> <p> <code>DestinationRegion</code> - The Amazon Web Services Region
     * that the encrypted DB snapshot is copied to. This Amazon Web Services Region is
     * the same one where the <code>CopyDBSnapshot</code> operation is called that
     * contains this presigned URL.</p> <p>For example, if you copy an encrypted DB
     * snapshot from the us-west-2 Amazon Web Services Region to the us-east-1 Amazon
     * Web Services Region, then you call the <code>CopyDBSnapshot</code> operation in
     * the us-east-1 Amazon Web Services Region and provide a presigned URL that
     * contains a call to the <code>CopyDBSnapshot</code> operation in the us-west-2
     * Amazon Web Services Region. For this example, the <code>DestinationRegion</code>
     * in the presigned URL must be set to the us-east-1 Amazon Web Services
     * Region.</p> </li> <li> <p> <code>KmsKeyId</code> - The KMS key identifier for
     * the KMS key to use to encrypt the copy of the DB snapshot in the destination
     * Amazon Web Services Region. This is the same identifier for both the
     * <code>CopyDBSnapshot</code> operation that is called in the destination Amazon
     * Web Services Region, and the operation contained in the presigned URL.</p> </li>
     * <li> <p> <code>SourceDBSnapshotIdentifier</code> - The DB snapshot identifier
     * for the encrypted snapshot to be copied. This identifier must be in the Amazon
     * Resource Name (ARN) format for the source Amazon Web Services Region. For
     * example, if you are copying an encrypted DB snapshot from the us-west-2 Amazon
     * Web Services Region, then your <code>SourceDBSnapshotIdentifier</code> looks
     * like the following example:
     * <code>arn:aws:rds:us-west-2:123456789012:snapshot:mysql-instance1-snapshot-20161115</code>.</p>
     * </li> </ul> <p>To learn how to generate a Signature Version 4 signed request,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sigv4-query-string-auth.html">Authenticating
     * Requests: Using Query Parameters (Amazon Web Services Signature Version 4)</a>
     * and <a
     * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
     * Version 4 Signing Process</a>.</p>  <p>If you are using an Amazon Web
     * Services SDK tool or the CLI, you can specify <code>SourceRegion</code> (or
     * <code>--source-region</code> for the CLI) instead of specifying
     * <code>PreSignedUrl</code> manually. Specifying <code>SourceRegion</code>
     * autogenerates a presigned URL that is a valid request for the operation that can
     * run in the source Amazon Web Services Region.</p> 
     */
    inline const Aws::String& GetPreSignedUrl() const { return m_preSignedUrl; }
    inline bool PreSignedUrlHasBeenSet() const { return m_preSignedUrlHasBeenSet; }
    template<typename PreSignedUrlT = Aws::String>
    void SetPreSignedUrl(PreSignedUrlT&& value) { m_preSignedUrlHasBeenSet = true; m_preSignedUrl = std::forward<PreSignedUrlT>(value); }
    template<typename PreSignedUrlT = Aws::String>
    CopyDBSnapshotRequest& WithPreSignedUrl(PreSignedUrlT&& value) { SetPreSignedUrl(std::forward<PreSignedUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an option group to associate with the copy of the snapshot.</p>
     * <p>Specify this option if you are copying a snapshot from one Amazon Web
     * Services Region to another, and your DB instance uses a nondefault option group.
     * If your source DB instance uses Transparent Data Encryption for Oracle or
     * Microsoft SQL Server, you must specify this option when copying across Amazon
     * Web Services Regions. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_CopySnapshot.html#USER_CopySnapshot.Options">Option
     * group considerations</a> in the <i>Amazon RDS User Guide</i>.</p>
     */
    inline const Aws::String& GetOptionGroupName() const { return m_optionGroupName; }
    inline bool OptionGroupNameHasBeenSet() const { return m_optionGroupNameHasBeenSet; }
    template<typename OptionGroupNameT = Aws::String>
    void SetOptionGroupName(OptionGroupNameT&& value) { m_optionGroupNameHasBeenSet = true; m_optionGroupName = std::forward<OptionGroupNameT>(value); }
    template<typename OptionGroupNameT = Aws::String>
    CopyDBSnapshotRequest& WithOptionGroupName(OptionGroupNameT&& value) { SetOptionGroupName(std::forward<OptionGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external custom Availability Zone (CAZ) identifier for the target
     * CAZ.</p> <p>Example: <code>rds-caz-aiqhTgQv</code>.</p>
     */
    inline const Aws::String& GetTargetCustomAvailabilityZone() const { return m_targetCustomAvailabilityZone; }
    inline bool TargetCustomAvailabilityZoneHasBeenSet() const { return m_targetCustomAvailabilityZoneHasBeenSet; }
    template<typename TargetCustomAvailabilityZoneT = Aws::String>
    void SetTargetCustomAvailabilityZone(TargetCustomAvailabilityZoneT&& value) { m_targetCustomAvailabilityZoneHasBeenSet = true; m_targetCustomAvailabilityZone = std::forward<TargetCustomAvailabilityZoneT>(value); }
    template<typename TargetCustomAvailabilityZoneT = Aws::String>
    CopyDBSnapshotRequest& WithTargetCustomAvailabilityZone(TargetCustomAvailabilityZoneT&& value) { SetTargetCustomAvailabilityZone(std::forward<TargetCustomAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to copy the DB option group associated with the source DB
     * snapshot to the target Amazon Web Services account and associate with the target
     * DB snapshot. The associated option group can be copied only with cross-account
     * snapshot copy calls.</p>
     */
    inline bool GetCopyOptionGroup() const { return m_copyOptionGroup; }
    inline bool CopyOptionGroupHasBeenSet() const { return m_copyOptionGroupHasBeenSet; }
    inline void SetCopyOptionGroup(bool value) { m_copyOptionGroupHasBeenSet = true; m_copyOptionGroup = value; }
    inline CopyDBSnapshotRequest& WithCopyOptionGroup(bool value) { SetCopyOptionGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the Availability Zone where RDS stores the DB snapshot.
     * This value is valid only for snapshots that RDS stores on a Dedicated Local
     * Zone.</p>
     */
    inline const Aws::String& GetSnapshotAvailabilityZone() const { return m_snapshotAvailabilityZone; }
    inline bool SnapshotAvailabilityZoneHasBeenSet() const { return m_snapshotAvailabilityZoneHasBeenSet; }
    template<typename SnapshotAvailabilityZoneT = Aws::String>
    void SetSnapshotAvailabilityZone(SnapshotAvailabilityZoneT&& value) { m_snapshotAvailabilityZoneHasBeenSet = true; m_snapshotAvailabilityZone = std::forward<SnapshotAvailabilityZoneT>(value); }
    template<typename SnapshotAvailabilityZoneT = Aws::String>
    CopyDBSnapshotRequest& WithSnapshotAvailabilityZone(SnapshotAvailabilityZoneT&& value) { SetSnapshotAvailabilityZone(std::forward<SnapshotAvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configures the location where RDS will store copied snapshots.</p> <p>Valid
     * Values:</p> <ul> <li> <p> <code>local</code> (Dedicated Local Zone)</p> </li>
     * <li> <p> <code>outposts</code> (Amazon Web Services Outposts)</p> </li> <li> <p>
     * <code>region</code> (Amazon Web Services Region)</p> </li> </ul>
     */
    inline const Aws::String& GetSnapshotTarget() const { return m_snapshotTarget; }
    inline bool SnapshotTargetHasBeenSet() const { return m_snapshotTargetHasBeenSet; }
    template<typename SnapshotTargetT = Aws::String>
    void SetSnapshotTarget(SnapshotTargetT&& value) { m_snapshotTargetHasBeenSet = true; m_snapshotTarget = std::forward<SnapshotTargetT>(value); }
    template<typename SnapshotTargetT = Aws::String>
    CopyDBSnapshotRequest& WithSnapshotTarget(SnapshotTargetT&& value) { SetSnapshotTarget(std::forward<SnapshotTargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If SourceRegion is specified, SDKs will generate pre-signed URLs and populate the pre-signed URL field.
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    CopyDBSnapshotRequest& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceDBSnapshotIdentifier;
    bool m_sourceDBSnapshotIdentifierHasBeenSet = false;

    Aws::String m_targetDBSnapshotIdentifier;
    bool m_targetDBSnapshotIdentifierHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    bool m_copyTags{false};
    bool m_copyTagsHasBeenSet = false;

    Aws::String m_preSignedUrl;
    bool m_preSignedUrlHasBeenSet = false;

    Aws::String m_optionGroupName;
    bool m_optionGroupNameHasBeenSet = false;

    Aws::String m_targetCustomAvailabilityZone;
    bool m_targetCustomAvailabilityZoneHasBeenSet = false;

    bool m_copyOptionGroup{false};
    bool m_copyOptionGroupHasBeenSet = false;

    Aws::String m_snapshotAvailabilityZone;
    bool m_snapshotAvailabilityZoneHasBeenSet = false;

    Aws::String m_snapshotTarget;
    bool m_snapshotTargetHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
