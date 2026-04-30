/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/NumberValidation.h>
#include <aws/bedrock-agentcore-control/model/StringListValidation.h>
#include <aws/bedrock-agentcore-control/model/StringValidation.h>

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
 * <p>Validation rules for extracted metadata values. Only one type can be
 * specified, matching the field's data type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Validation">AWS
 * API Reference</a></p>
 */
class Validation {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API Validation() = default;
  AWS_BEDROCKAGENTCORECONTROL_API Validation(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Validation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const StringValidation& GetStringValidation() const { return m_stringValidation; }
  inline bool StringValidationHasBeenSet() const { return m_stringValidationHasBeenSet; }
  template <typename StringValidationT = StringValidation>
  void SetStringValidation(StringValidationT&& value) {
    m_stringValidationHasBeenSet = true;
    m_stringValidation = std::forward<StringValidationT>(value);
  }
  template <typename StringValidationT = StringValidation>
  Validation& WithStringValidation(StringValidationT&& value) {
    SetStringValidation(std::forward<StringValidationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const StringListValidation& GetStringListValidation() const { return m_stringListValidation; }
  inline bool StringListValidationHasBeenSet() const { return m_stringListValidationHasBeenSet; }
  template <typename StringListValidationT = StringListValidation>
  void SetStringListValidation(StringListValidationT&& value) {
    m_stringListValidationHasBeenSet = true;
    m_stringListValidation = std::forward<StringListValidationT>(value);
  }
  template <typename StringListValidationT = StringListValidation>
  Validation& WithStringListValidation(StringListValidationT&& value) {
    SetStringListValidation(std::forward<StringListValidationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const NumberValidation& GetNumberValidation() const { return m_numberValidation; }
  inline bool NumberValidationHasBeenSet() const { return m_numberValidationHasBeenSet; }
  template <typename NumberValidationT = NumberValidation>
  void SetNumberValidation(NumberValidationT&& value) {
    m_numberValidationHasBeenSet = true;
    m_numberValidation = std::forward<NumberValidationT>(value);
  }
  template <typename NumberValidationT = NumberValidation>
  Validation& WithNumberValidation(NumberValidationT&& value) {
    SetNumberValidation(std::forward<NumberValidationT>(value));
    return *this;
  }
  ///@}
 private:
  StringValidation m_stringValidation;

  StringListValidation m_stringListValidation;

  NumberValidation m_numberValidation;
  bool m_stringValidationHasBeenSet = false;
  bool m_stringListValidationHasBeenSet = false;
  bool m_numberValidationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
