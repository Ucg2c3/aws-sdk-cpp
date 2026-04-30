/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ListMemoryRecordsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListMemoryRecordsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_namespaceHasBeenSet) {
    payload.WithString("namespace", m_namespace);
  }

  if (m_namespacePathHasBeenSet) {
    payload.WithString("namespacePath", m_namespacePath);
  }

  if (m_memoryStrategyIdHasBeenSet) {
    payload.WithString("memoryStrategyId", m_memoryStrategyId);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_metadataFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> metadataFiltersJsonList(m_metadataFilters.size());
    for (unsigned metadataFiltersIndex = 0; metadataFiltersIndex < metadataFiltersJsonList.GetLength(); ++metadataFiltersIndex) {
      metadataFiltersJsonList[metadataFiltersIndex].AsObject(m_metadataFilters[metadataFiltersIndex].Jsonize());
    }
    payload.WithArray("metadataFilters", std::move(metadataFiltersJsonList));
  }

  return payload.View().WriteReadable();
}
