﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/BucketLocationConstraint.h>
#include <aws/s3/model/LocationInfo.h>
#include <aws/s3/model/BucketInfo.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p>The configuration information for the bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/CreateBucketConfiguration">AWS
   * API Reference</a></p>
   */
  class CreateBucketConfiguration
  {
  public:
    AWS_S3_API CreateBucketConfiguration() = default;
    AWS_S3_API CreateBucketConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API CreateBucketConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Specifies the Region where the bucket will be created. You might choose a
     * Region to optimize latency, minimize costs, or address regulatory requirements.
     * For example, if you reside in Europe, you will probably find it advantageous to
     * create buckets in the Europe (Ireland) Region.</p> <p>If you don't specify a
     * Region, the bucket is created in the US East (N. Virginia) Region (us-east-1) by
     * default. Configurations using the value <code>EU</code> will create a bucket in
     * <code>eu-west-1</code>.</p> <p>For a list of the valid values for all of the
     * Amazon Web Services Regions, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#s3_region">Regions
     * and Endpoints</a>.</p>  <p>This functionality is not supported for
     * directory buckets.</p> 
     */
    inline BucketLocationConstraint GetLocationConstraint() const { return m_locationConstraint; }
    inline bool LocationConstraintHasBeenSet() const { return m_locationConstraintHasBeenSet; }
    inline void SetLocationConstraint(BucketLocationConstraint value) { m_locationConstraintHasBeenSet = true; m_locationConstraint = value; }
    inline CreateBucketConfiguration& WithLocationConstraint(BucketLocationConstraint value) { SetLocationConstraint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the location where the bucket will be created.</p> <p> <b>Directory
     * buckets </b> - The location type is Availability Zone or Local Zone. To use the
     * Local Zone location type, your account must be enabled for Local Zones.
     * Otherwise, you get an HTTP <code>403 Forbidden</code> error with the error code
     * <code>AccessDenied</code>. To learn more, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/opt-in-directory-bucket-lz.html">Enable
     * accounts for Local Zones</a> in the <i>Amazon S3 User Guide</i>. </p> 
     * <p>This functionality is only supported by directory buckets.</p> 
     */
    inline const LocationInfo& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = LocationInfo>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = LocationInfo>
    CreateBucketConfiguration& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the information about the bucket that will be created.</p> 
     * <p>This functionality is only supported by directory buckets.</p> 
     */
    inline const BucketInfo& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = BucketInfo>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = BucketInfo>
    CreateBucketConfiguration& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tags that you can apply to the bucket that you're creating. Tags
     * are key-value pairs of metadata used to categorize and organize your buckets,
     * track costs, and control access. </p>  <p>This parameter is only supported
     * for S3 directory buckets. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-buckets-tagging.html">Using
     * tags with directory buckets</a>.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateBucketConfiguration& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateBucketConfiguration& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    BucketLocationConstraint m_locationConstraint{BucketLocationConstraint::NOT_SET};
    bool m_locationConstraintHasBeenSet = false;

    LocationInfo m_location;
    bool m_locationHasBeenSet = false;

    BucketInfo m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
