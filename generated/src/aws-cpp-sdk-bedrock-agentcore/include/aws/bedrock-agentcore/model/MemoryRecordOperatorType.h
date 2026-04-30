/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class MemoryRecordOperatorType {
  NOT_SET,
  EQUALS_TO,
  EXISTS,
  NOT_EXISTS,
  BEFORE,
  AFTER,
  CONTAINS,
  GREATER_THAN,
  GREATER_THAN_OR_EQUALS,
  LESS_THAN,
  LESS_THAN_OR_EQUALS
};

namespace MemoryRecordOperatorTypeMapper {
AWS_BEDROCKAGENTCORE_API MemoryRecordOperatorType GetMemoryRecordOperatorTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForMemoryRecordOperatorType(MemoryRecordOperatorType value);
}  // namespace MemoryRecordOperatorTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
