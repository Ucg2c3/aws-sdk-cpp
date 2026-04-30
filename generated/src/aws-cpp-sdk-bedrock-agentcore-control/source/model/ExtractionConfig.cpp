/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ExtractionConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

ExtractionConfig::ExtractionConfig(JsonView jsonValue) { *this = jsonValue; }

ExtractionConfig& ExtractionConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("llmExtractionConfig")) {
    m_llmExtractionConfig = jsonValue.GetObject("llmExtractionConfig");
    m_llmExtractionConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ExtractionConfig::Jsonize() const {
  JsonValue payload;

  if (m_llmExtractionConfigHasBeenSet) {
    payload.WithObject("llmExtractionConfig", m_llmExtractionConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
