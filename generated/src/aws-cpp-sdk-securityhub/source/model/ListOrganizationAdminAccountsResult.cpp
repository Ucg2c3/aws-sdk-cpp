﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ListOrganizationAdminAccountsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListOrganizationAdminAccountsResult::ListOrganizationAdminAccountsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListOrganizationAdminAccountsResult& ListOrganizationAdminAccountsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AdminAccounts"))
  {
    Aws::Utils::Array<JsonView> adminAccountsJsonList = jsonValue.GetArray("AdminAccounts");
    for(unsigned adminAccountsIndex = 0; adminAccountsIndex < adminAccountsJsonList.GetLength(); ++adminAccountsIndex)
    {
      m_adminAccounts.push_back(adminAccountsJsonList[adminAccountsIndex].AsObject());
    }
    m_adminAccountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Feature"))
  {
    m_feature = SecurityHubFeatureMapper::GetSecurityHubFeatureForName(jsonValue.GetString("Feature"));
    m_featureHasBeenSet = true;
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
