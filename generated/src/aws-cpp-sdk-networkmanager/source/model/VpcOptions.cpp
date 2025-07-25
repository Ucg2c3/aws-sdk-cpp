﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/VpcOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

VpcOptions::VpcOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

VpcOptions& VpcOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Ipv6Support"))
  {
    m_ipv6Support = jsonValue.GetBool("Ipv6Support");
    m_ipv6SupportHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplianceModeSupport"))
  {
    m_applianceModeSupport = jsonValue.GetBool("ApplianceModeSupport");
    m_applianceModeSupportHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DnsSupport"))
  {
    m_dnsSupport = jsonValue.GetBool("DnsSupport");
    m_dnsSupportHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityGroupReferencingSupport"))
  {
    m_securityGroupReferencingSupport = jsonValue.GetBool("SecurityGroupReferencingSupport");
    m_securityGroupReferencingSupportHasBeenSet = true;
  }
  return *this;
}

JsonValue VpcOptions::Jsonize() const
{
  JsonValue payload;

  if(m_ipv6SupportHasBeenSet)
  {
   payload.WithBool("Ipv6Support", m_ipv6Support);

  }

  if(m_applianceModeSupportHasBeenSet)
  {
   payload.WithBool("ApplianceModeSupport", m_applianceModeSupport);

  }

  if(m_dnsSupportHasBeenSet)
  {
   payload.WithBool("DnsSupport", m_dnsSupport);

  }

  if(m_securityGroupReferencingSupportHasBeenSet)
  {
   payload.WithBool("SecurityGroupReferencingSupport", m_securityGroupReferencingSupport);

  }

  return payload;
}

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
