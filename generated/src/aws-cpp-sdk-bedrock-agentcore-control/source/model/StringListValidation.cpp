/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/StringListValidation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

StringListValidation::StringListValidation(JsonView jsonValue) { *this = jsonValue; }

StringListValidation& StringListValidation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allowedValues")) {
    Aws::Utils::Array<JsonView> allowedValuesJsonList = jsonValue.GetArray("allowedValues");
    for (unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex) {
      m_allowedValues.push_back(allowedValuesJsonList[allowedValuesIndex].AsString());
    }
    m_allowedValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxItems")) {
    m_maxItems = jsonValue.GetInteger("maxItems");
    m_maxItemsHasBeenSet = true;
  }
  return *this;
}

JsonValue StringListValidation::Jsonize() const {
  JsonValue payload;

  if (m_allowedValuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedValuesJsonList(m_allowedValues.size());
    for (unsigned allowedValuesIndex = 0; allowedValuesIndex < allowedValuesJsonList.GetLength(); ++allowedValuesIndex) {
      allowedValuesJsonList[allowedValuesIndex].AsString(m_allowedValues[allowedValuesIndex]);
    }
    payload.WithArray("allowedValues", std::move(allowedValuesJsonList));
  }

  if (m_maxItemsHasBeenSet) {
    payload.WithInteger("maxItems", m_maxItems);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
