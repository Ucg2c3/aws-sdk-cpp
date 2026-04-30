/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/MemoryRecordLeftExpression.h>
#include <aws/bedrock-agentcore/model/MemoryRecordOperatorType.h>
#include <aws/bedrock-agentcore/model/MemoryRecordRightExpression.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Filters to apply to metadata associated with a memory. Specify the metadata
 * key and value in the <code>left</code> and <code>right</code> fields and use the
 * <code>operator</code> field to define the relationship to match.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MemoryMetadataFilterExpression">AWS
 * API Reference</a></p>
 */
class MemoryMetadataFilterExpression {
 public:
  AWS_BEDROCKAGENTCORE_API MemoryMetadataFilterExpression() = default;
  AWS_BEDROCKAGENTCORE_API MemoryMetadataFilterExpression(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API MemoryMetadataFilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The metadata key to evaluate.</p>
   */
  inline const MemoryRecordLeftExpression& GetLeft() const { return m_left; }
  inline bool LeftHasBeenSet() const { return m_leftHasBeenSet; }
  template <typename LeftT = MemoryRecordLeftExpression>
  void SetLeft(LeftT&& value) {
    m_leftHasBeenSet = true;
    m_left = std::forward<LeftT>(value);
  }
  template <typename LeftT = MemoryRecordLeftExpression>
  MemoryMetadataFilterExpression& WithLeft(LeftT&& value) {
    SetLeft(std::forward<LeftT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The relationship between the metadata key and value to match when applying
   * the metadata filter.</p>
   */
  inline MemoryRecordOperatorType GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(MemoryRecordOperatorType value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline MemoryMetadataFilterExpression& WithOperator(MemoryRecordOperatorType value) {
    SetOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to compare against. Required for all operators except EXISTS and
   * NOT_EXISTS.</p>
   */
  inline const MemoryRecordRightExpression& GetRight() const { return m_right; }
  inline bool RightHasBeenSet() const { return m_rightHasBeenSet; }
  template <typename RightT = MemoryRecordRightExpression>
  void SetRight(RightT&& value) {
    m_rightHasBeenSet = true;
    m_right = std::forward<RightT>(value);
  }
  template <typename RightT = MemoryRecordRightExpression>
  MemoryMetadataFilterExpression& WithRight(RightT&& value) {
    SetRight(std::forward<RightT>(value));
    return *this;
  }
  ///@}
 private:
  MemoryRecordLeftExpression m_left;

  MemoryRecordOperatorType m_operator{MemoryRecordOperatorType::NOT_SET};

  MemoryRecordRightExpression m_right;
  bool m_leftHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
  bool m_rightHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
