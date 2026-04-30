/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/NumberValidation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

NumberValidation::NumberValidation(JsonView jsonValue) { *this = jsonValue; }

NumberValidation& NumberValidation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("minValue")) {
    m_minValue = jsonValue.GetDouble("minValue");
    m_minValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxValue")) {
    m_maxValue = jsonValue.GetDouble("maxValue");
    m_maxValueHasBeenSet = true;
  }
  return *this;
}

JsonValue NumberValidation::Jsonize() const {
  JsonValue payload;

  if (m_minValueHasBeenSet) {
    payload.WithDouble("minValue", m_minValue);
  }

  if (m_maxValueHasBeenSet) {
    payload.WithDouble("maxValue", m_maxValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
