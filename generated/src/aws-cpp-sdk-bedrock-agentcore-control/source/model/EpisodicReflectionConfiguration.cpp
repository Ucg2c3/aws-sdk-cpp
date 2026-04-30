/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/EpisodicReflectionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

EpisodicReflectionConfiguration::EpisodicReflectionConfiguration(JsonView jsonValue) { *this = jsonValue; }

EpisodicReflectionConfiguration& EpisodicReflectionConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("namespaceTemplates")) {
    Aws::Utils::Array<JsonView> namespaceTemplatesJsonList = jsonValue.GetArray("namespaceTemplates");
    for (unsigned namespaceTemplatesIndex = 0; namespaceTemplatesIndex < namespaceTemplatesJsonList.GetLength();
         ++namespaceTemplatesIndex) {
      m_namespaceTemplates.push_back(namespaceTemplatesJsonList[namespaceTemplatesIndex].AsString());
    }
    m_namespaceTemplatesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memoryRecordSchema")) {
    m_memoryRecordSchema = jsonValue.GetObject("memoryRecordSchema");
    m_memoryRecordSchemaHasBeenSet = true;
  }
  return *this;
}

JsonValue EpisodicReflectionConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_namespaceTemplatesHasBeenSet) {
    Aws::Utils::Array<JsonValue> namespaceTemplatesJsonList(m_namespaceTemplates.size());
    for (unsigned namespaceTemplatesIndex = 0; namespaceTemplatesIndex < namespaceTemplatesJsonList.GetLength();
         ++namespaceTemplatesIndex) {
      namespaceTemplatesJsonList[namespaceTemplatesIndex].AsString(m_namespaceTemplates[namespaceTemplatesIndex]);
    }
    payload.WithArray("namespaceTemplates", std::move(namespaceTemplatesJsonList));
  }

  if (m_memoryRecordSchemaHasBeenSet) {
    payload.WithObject("memoryRecordSchema", m_memoryRecordSchema.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
