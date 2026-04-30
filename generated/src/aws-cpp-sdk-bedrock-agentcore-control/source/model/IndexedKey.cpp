/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/IndexedKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

IndexedKey::IndexedKey(JsonView jsonValue) { *this = jsonValue; }

IndexedKey& IndexedKey::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = MetadataValueTypeMapper::GetMetadataValueTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue IndexedKey::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", MetadataValueTypeMapper::GetNameForMetadataValueType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
