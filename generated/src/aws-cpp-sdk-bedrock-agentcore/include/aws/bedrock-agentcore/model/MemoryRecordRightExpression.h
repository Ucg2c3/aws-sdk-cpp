/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/MemoryRecordMetadataValue.h>

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
 * <p>The right-hand side of a memory record metadata filter
 * expression.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MemoryRecordRightExpression">AWS
 * API Reference</a></p>
 */
class MemoryRecordRightExpression {
 public:
  AWS_BEDROCKAGENTCORE_API MemoryRecordRightExpression() = default;
  AWS_BEDROCKAGENTCORE_API MemoryRecordRightExpression(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API MemoryRecordRightExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The metadata value to compare against.</p>
   */
  inline const MemoryRecordMetadataValue& GetMetadataValue() const { return m_metadataValue; }
  inline bool MetadataValueHasBeenSet() const { return m_metadataValueHasBeenSet; }
  template <typename MetadataValueT = MemoryRecordMetadataValue>
  void SetMetadataValue(MetadataValueT&& value) {
    m_metadataValueHasBeenSet = true;
    m_metadataValue = std::forward<MetadataValueT>(value);
  }
  template <typename MetadataValueT = MemoryRecordMetadataValue>
  MemoryRecordRightExpression& WithMetadataValue(MetadataValueT&& value) {
    SetMetadataValue(std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}
 private:
  MemoryRecordMetadataValue m_metadataValue;
  bool m_metadataValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
