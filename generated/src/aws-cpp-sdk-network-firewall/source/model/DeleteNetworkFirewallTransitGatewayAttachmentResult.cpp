﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/DeleteNetworkFirewallTransitGatewayAttachmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::NetworkFirewall::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteNetworkFirewallTransitGatewayAttachmentResult::DeleteNetworkFirewallTransitGatewayAttachmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DeleteNetworkFirewallTransitGatewayAttachmentResult& DeleteNetworkFirewallTransitGatewayAttachmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TransitGatewayAttachmentId"))
  {
    m_transitGatewayAttachmentId = jsonValue.GetString("TransitGatewayAttachmentId");
    m_transitGatewayAttachmentIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TransitGatewayAttachmentStatus"))
  {
    m_transitGatewayAttachmentStatus = TransitGatewayAttachmentStatusMapper::GetTransitGatewayAttachmentStatusForName(jsonValue.GetString("TransitGatewayAttachmentStatus"));
    m_transitGatewayAttachmentStatusHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
