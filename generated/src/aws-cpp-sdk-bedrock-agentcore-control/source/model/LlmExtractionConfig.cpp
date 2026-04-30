/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/LlmExtractionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

LlmExtractionConfig::LlmExtractionConfig(JsonView jsonValue) { *this = jsonValue; }

LlmExtractionConfig& LlmExtractionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("llmExtractionInstruction")) {
    m_llmExtractionInstruction = jsonValue.GetString("llmExtractionInstruction");
    m_llmExtractionInstructionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("definition")) {
    m_definition = jsonValue.GetString("definition");
    m_definitionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("validation")) {
    m_validation = jsonValue.GetObject("validation");
    m_validationHasBeenSet = true;
  }
  return *this;
}

JsonValue LlmExtractionConfig::Jsonize() const {
  JsonValue payload;

  if (m_llmExtractionInstructionHasBeenSet) {
    payload.WithString("llmExtractionInstruction", m_llmExtractionInstruction);
  }

  if (m_definitionHasBeenSet) {
    payload.WithString("definition", m_definition);
  }

  if (m_validationHasBeenSet) {
    payload.WithObject("validation", m_validation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
