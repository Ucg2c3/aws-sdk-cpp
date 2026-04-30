/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/NetworkConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

NetworkConfig::NetworkConfig(JsonView jsonValue) { *this = jsonValue; }

NetworkConfig& NetworkConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("networkAccessType")) {
    m_networkAccessType = NetworkAccessTypeMapper::GetNetworkAccessTypeForName(jsonValue.GetString("networkAccessType"));
    m_networkAccessTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcId")) {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetIds")) {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("securityGroupIds")) {
    Aws::Utils::Array<JsonView> securityGroupIdsJsonList = jsonValue.GetArray("securityGroupIds");
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      m_securityGroupIds.push_back(securityGroupIdsJsonList[securityGroupIdsIndex].AsString());
    }
    m_securityGroupIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkConfig::Jsonize() const {
  JsonValue payload;

  if (m_networkAccessTypeHasBeenSet) {
    payload.WithString("networkAccessType", NetworkAccessTypeMapper::GetNameForNetworkAccessType(m_networkAccessType));
  }

  if (m_vpcIdHasBeenSet) {
    payload.WithString("vpcId", m_vpcId);
  }

  if (m_subnetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
    }
    payload.WithArray("subnetIds", std::move(subnetIdsJsonList));
  }

  if (m_securityGroupIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> securityGroupIdsJsonList(m_securityGroupIds.size());
    for (unsigned securityGroupIdsIndex = 0; securityGroupIdsIndex < securityGroupIdsJsonList.GetLength(); ++securityGroupIdsIndex) {
      securityGroupIdsJsonList[securityGroupIdsIndex].AsString(m_securityGroupIds[securityGroupIdsIndex]);
    }
    payload.WithArray("securityGroupIds", std::move(securityGroupIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
