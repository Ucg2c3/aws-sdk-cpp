/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Validation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

Validation::Validation(JsonView jsonValue) { *this = jsonValue; }

Validation& Validation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("stringValidation")) {
    m_stringValidation = jsonValue.GetObject("stringValidation");
    m_stringValidationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("stringListValidation")) {
    m_stringListValidation = jsonValue.GetObject("stringListValidation");
    m_stringListValidationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberValidation")) {
    m_numberValidation = jsonValue.GetObject("numberValidation");
    m_numberValidationHasBeenSet = true;
  }
  return *this;
}

JsonValue Validation::Jsonize() const {
  JsonValue payload;

  if (m_stringValidationHasBeenSet) {
    payload.WithObject("stringValidation", m_stringValidation.Jsonize());
  }

  if (m_stringListValidationHasBeenSet) {
    payload.WithObject("stringListValidation", m_stringListValidation.Jsonize());
  }

  if (m_numberValidationHasBeenSet) {
    payload.WithObject("numberValidation", m_numberValidation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
