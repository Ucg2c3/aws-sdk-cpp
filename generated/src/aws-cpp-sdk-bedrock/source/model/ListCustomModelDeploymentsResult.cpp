﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ListCustomModelDeploymentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCustomModelDeploymentsResult::ListCustomModelDeploymentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCustomModelDeploymentsResult& ListCustomModelDeploymentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelDeploymentSummaries"))
  {
    Aws::Utils::Array<JsonView> modelDeploymentSummariesJsonList = jsonValue.GetArray("modelDeploymentSummaries");
    for(unsigned modelDeploymentSummariesIndex = 0; modelDeploymentSummariesIndex < modelDeploymentSummariesJsonList.GetLength(); ++modelDeploymentSummariesIndex)
    {
      m_modelDeploymentSummaries.push_back(modelDeploymentSummariesJsonList[modelDeploymentSummariesIndex].AsObject());
    }
    m_modelDeploymentSummariesHasBeenSet = true;
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
