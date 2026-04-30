/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>

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
 * <p>Validation for NUMBER fields.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/NumberValidation">AWS
 * API Reference</a></p>
 */
class NumberValidation {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API NumberValidation() = default;
  AWS_BEDROCKAGENTCORECONTROL_API NumberValidation(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API NumberValidation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Minimum allowed value.</p>
   */
  inline double GetMinValue() const { return m_minValue; }
  inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
  inline void SetMinValue(double value) {
    m_minValueHasBeenSet = true;
    m_minValue = value;
  }
  inline NumberValidation& WithMinValue(double value) {
    SetMinValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum allowed value.</p>
   */
  inline double GetMaxValue() const { return m_maxValue; }
  inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
  inline void SetMaxValue(double value) {
    m_maxValueHasBeenSet = true;
    m_maxValue = value;
  }
  inline NumberValidation& WithMaxValue(double value) {
    SetMaxValue(value);
    return *this;
  }
  ///@}
 private:
  double m_minValue{0.0};

  double m_maxValue{0.0};
  bool m_minValueHasBeenSet = false;
  bool m_maxValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
