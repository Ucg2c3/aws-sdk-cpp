/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Validation.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Model-based metadata extraction configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/LlmExtractionConfig">AWS
 * API Reference</a></p>
 */
class LlmExtractionConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API LlmExtractionConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API LlmExtractionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API LlmExtractionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Instructions for extraction. Supports built-in operators like LATEST_VALUE or
   * custom natural-language instructions.</p>
   */
  inline const Aws::String& GetLlmExtractionInstruction() const { return m_llmExtractionInstruction; }
  inline bool LlmExtractionInstructionHasBeenSet() const { return m_llmExtractionInstructionHasBeenSet; }
  template <typename LlmExtractionInstructionT = Aws::String>
  void SetLlmExtractionInstruction(LlmExtractionInstructionT&& value) {
    m_llmExtractionInstructionHasBeenSet = true;
    m_llmExtractionInstruction = std::forward<LlmExtractionInstructionT>(value);
  }
  template <typename LlmExtractionInstructionT = Aws::String>
  LlmExtractionConfig& WithLlmExtractionInstruction(LlmExtractionInstructionT&& value) {
    SetLlmExtractionInstruction(std::forward<LlmExtractionInstructionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Description of what this metadata field represents.</p>
   */
  inline const Aws::String& GetDefinition() const { return m_definition; }
  inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
  template <typename DefinitionT = Aws::String>
  void SetDefinition(DefinitionT&& value) {
    m_definitionHasBeenSet = true;
    m_definition = std::forward<DefinitionT>(value);
  }
  template <typename DefinitionT = Aws::String>
  LlmExtractionConfig& WithDefinition(DefinitionT&& value) {
    SetDefinition(std::forward<DefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Validation rules to constrain extracted values.</p>
   */
  inline const Validation& GetValidation() const { return m_validation; }
  inline bool ValidationHasBeenSet() const { return m_validationHasBeenSet; }
  template <typename ValidationT = Validation>
  void SetValidation(ValidationT&& value) {
    m_validationHasBeenSet = true;
    m_validation = std::forward<ValidationT>(value);
  }
  template <typename ValidationT = Validation>
  LlmExtractionConfig& WithValidation(ValidationT&& value) {
    SetValidation(std::forward<ValidationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_llmExtractionInstruction;

  Aws::String m_definition;

  Validation m_validation;
  bool m_llmExtractionInstructionHasBeenSet = false;
  bool m_definitionHasBeenSet = false;
  bool m_validationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
