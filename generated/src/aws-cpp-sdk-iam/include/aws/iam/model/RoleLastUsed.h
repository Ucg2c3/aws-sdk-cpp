﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace IAM
{
namespace Model
{

  /**
   * <p>Contains information about the last time that an IAM role was used. This
   * includes the date and time and the Region in which the role was last used.
   * Activity is only reported for the trailing 400 days. This period can be shorter
   * if your Region began supporting these features within the last year. The role
   * might have been used more than 400 days ago. For more information, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
   * where data is tracked</a> in the <i>IAM user Guide</i>.</p> <p>This data type is
   * returned as a response element in the <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetRole.html">GetRole</a>
   * and <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetAccountAuthorizationDetails.html">GetAccountAuthorizationDetails</a>
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/RoleLastUsed">AWS
   * API Reference</a></p>
   */
  class RoleLastUsed
  {
  public:
    AWS_IAM_API RoleLastUsed() = default;
    AWS_IAM_API RoleLastUsed(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_IAM_API RoleLastUsed& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_IAM_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_IAM_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The date and time, in <a href="http://www.iso.org/iso/iso8601">ISO 8601
     * date-time format</a> that the role was last used.</p> <p>This field is null if
     * the role has not been used within the IAM tracking period. For more information
     * about the tracking period, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies_access-advisor.html#access-advisor_tracking-period">Regions
     * where data is tracked</a> in the <i>IAM User Guide</i>. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUsedDate() const { return m_lastUsedDate; }
    inline bool LastUsedDateHasBeenSet() const { return m_lastUsedDateHasBeenSet; }
    template<typename LastUsedDateT = Aws::Utils::DateTime>
    void SetLastUsedDate(LastUsedDateT&& value) { m_lastUsedDateHasBeenSet = true; m_lastUsedDate = std::forward<LastUsedDateT>(value); }
    template<typename LastUsedDateT = Aws::Utils::DateTime>
    RoleLastUsed& WithLastUsedDate(LastUsedDateT&& value) { SetLastUsedDate(std::forward<LastUsedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services Region in which the role was last
     * used.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    RoleLastUsed& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastUsedDate{};
    bool m_lastUsedDateHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
