/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MemoryRecordSchema.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

MemoryRecordSchema::MemoryRecordSchema(JsonView jsonValue) { *this = jsonValue; }

MemoryRecordSchema& MemoryRecordSchema::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metadataSchema")) {
    Aws::Utils::Array<JsonView> metadataSchemaJsonList = jsonValue.GetArray("metadataSchema");
    for (unsigned metadataSchemaIndex = 0; metadataSchemaIndex < metadataSchemaJsonList.GetLength(); ++metadataSchemaIndex) {
      m_metadataSchema.push_back(metadataSchemaJsonList[metadataSchemaIndex].AsObject());
    }
    m_metadataSchemaHasBeenSet = true;
  }
  return *this;
}

JsonValue MemoryRecordSchema::Jsonize() const {
  JsonValue payload;

  if (m_metadataSchemaHasBeenSet) {
    Aws::Utils::Array<JsonValue> metadataSchemaJsonList(m_metadataSchema.size());
    for (unsigned metadataSchemaIndex = 0; metadataSchemaIndex < metadataSchemaJsonList.GetLength(); ++metadataSchemaIndex) {
      metadataSchemaJsonList[metadataSchemaIndex].AsObject(m_metadataSchema[metadataSchemaIndex].Jsonize());
    }
    payload.WithArray("metadataSchema", std::move(metadataSchemaJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
