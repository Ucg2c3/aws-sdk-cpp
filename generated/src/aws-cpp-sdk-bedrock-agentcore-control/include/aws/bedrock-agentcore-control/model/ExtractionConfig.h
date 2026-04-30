/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/LlmExtractionConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Configuration for metadata extraction from conversational
 * content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ExtractionConfig">AWS
 * API Reference</a></p>
 */
class ExtractionConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ExtractionConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ExtractionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ExtractionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Model-based extraction using a definition and instructions.</p>
   */
  inline const LlmExtractionConfig& GetLlmExtractionConfig() const { return m_llmExtractionConfig; }
  inline bool LlmExtractionConfigHasBeenSet() const { return m_llmExtractionConfigHasBeenSet; }
  template <typename LlmExtractionConfigT = LlmExtractionConfig>
  void SetLlmExtractionConfig(LlmExtractionConfigT&& value) {
    m_llmExtractionConfigHasBeenSet = true;
    m_llmExtractionConfig = std::forward<LlmExtractionConfigT>(value);
  }
  template <typename LlmExtractionConfigT = LlmExtractionConfig>
  ExtractionConfig& WithLlmExtractionConfig(LlmExtractionConfigT&& value) {
    SetLlmExtractionConfig(std::forward<LlmExtractionConfigT>(value));
    return *this;
  }
  ///@}
 private:
  LlmExtractionConfig m_llmExtractionConfig;
  bool m_llmExtractionConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
