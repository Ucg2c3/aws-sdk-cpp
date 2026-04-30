/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Validation for STRINGLIST fields.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/StringListValidation">AWS
 * API Reference</a></p>
 */
class StringListValidation {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API StringListValidation() = default;
  AWS_BEDROCKAGENTCORECONTROL_API StringListValidation(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API StringListValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Allowed values for items in this STRINGLIST field.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedValues() const { return m_allowedValues; }
  inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
  template <typename AllowedValuesT = Aws::Vector<Aws::String>>
  void SetAllowedValues(AllowedValuesT&& value) {
    m_allowedValuesHasBeenSet = true;
    m_allowedValues = std::forward<AllowedValuesT>(value);
  }
  template <typename AllowedValuesT = Aws::Vector<Aws::String>>
  StringListValidation& WithAllowedValues(AllowedValuesT&& value) {
    SetAllowedValues(std::forward<AllowedValuesT>(value));
    return *this;
  }
  template <typename AllowedValuesT = Aws::String>
  StringListValidation& AddAllowedValues(AllowedValuesT&& value) {
    m_allowedValuesHasBeenSet = true;
    m_allowedValues.emplace_back(std::forward<AllowedValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of items in the string list.</p>
   */
  inline int GetMaxItems() const { return m_maxItems; }
  inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
  inline void SetMaxItems(int value) {
    m_maxItemsHasBeenSet = true;
    m_maxItems = value;
  }
  inline StringListValidation& WithMaxItems(int value) {
    SetMaxItems(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_allowedValues;

  int m_maxItems{0};
  bool m_allowedValuesHasBeenSet = false;
  bool m_maxItemsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
