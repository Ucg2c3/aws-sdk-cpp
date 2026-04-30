/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MemoryRecordMetadataValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

MemoryRecordMetadataValue::MemoryRecordMetadataValue(JsonView jsonValue) { *this = jsonValue; }

MemoryRecordMetadataValue& MemoryRecordMetadataValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("stringValue")) {
    m_stringValue = jsonValue.GetString("stringValue");
    m_stringValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stringListValue")) {
    Aws::Utils::Array<JsonView> stringListValueJsonList = jsonValue.GetArray("stringListValue");
    for (unsigned stringListValueIndex = 0; stringListValueIndex < stringListValueJsonList.GetLength(); ++stringListValueIndex) {
      m_stringListValue.push_back(stringListValueJsonList[stringListValueIndex].AsString());
    }
    m_stringListValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberValue")) {
    m_numberValue = jsonValue.GetDouble("numberValue");
    m_numberValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dateTimeValue")) {
    m_dateTimeValue = jsonValue.GetDouble("dateTimeValue");
    m_dateTimeValueHasBeenSet = true;
  }
  return *this;
}

JsonValue MemoryRecordMetadataValue::Jsonize() const {
  JsonValue payload;

  if (m_stringValueHasBeenSet) {
    payload.WithString("stringValue", m_stringValue);
  }

  if (m_stringListValueHasBeenSet) {
    Aws::Utils::Array<JsonValue> stringListValueJsonList(m_stringListValue.size());
    for (unsigned stringListValueIndex = 0; stringListValueIndex < stringListValueJsonList.GetLength(); ++stringListValueIndex) {
      stringListValueJsonList[stringListValueIndex].AsString(m_stringListValue[stringListValueIndex]);
    }
    payload.WithArray("stringListValue", std::move(stringListValueJsonList));
  }

  if (m_numberValueHasBeenSet) {
    payload.WithDouble("numberValue", m_numberValue);
  }

  if (m_dateTimeValueHasBeenSet) {
    payload.WithDouble("dateTimeValue", m_dateTimeValue.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
