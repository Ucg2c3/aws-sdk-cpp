/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MemoryRecordOperatorType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace MemoryRecordOperatorTypeMapper {

static const int EQUALS_TO_HASH = HashingUtils::HashString("EQUALS_TO");
static const int EXISTS_HASH = HashingUtils::HashString("EXISTS");
static const int NOT_EXISTS_HASH = HashingUtils::HashString("NOT_EXISTS");
static const int BEFORE_HASH = HashingUtils::HashString("BEFORE");
static const int AFTER_HASH = HashingUtils::HashString("AFTER");
static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");
static const int GREATER_THAN_HASH = HashingUtils::HashString("GREATER_THAN");
static const int GREATER_THAN_OR_EQUALS_HASH = HashingUtils::HashString("GREATER_THAN_OR_EQUALS");
static const int LESS_THAN_HASH = HashingUtils::HashString("LESS_THAN");
static const int LESS_THAN_OR_EQUALS_HASH = HashingUtils::HashString("LESS_THAN_OR_EQUALS");

MemoryRecordOperatorType GetMemoryRecordOperatorTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == EQUALS_TO_HASH) {
    return MemoryRecordOperatorType::EQUALS_TO;
  } else if (hashCode == EXISTS_HASH) {
    return MemoryRecordOperatorType::EXISTS;
  } else if (hashCode == NOT_EXISTS_HASH) {
    return MemoryRecordOperatorType::NOT_EXISTS;
  } else if (hashCode == BEFORE_HASH) {
    return MemoryRecordOperatorType::BEFORE;
  } else if (hashCode == AFTER_HASH) {
    return MemoryRecordOperatorType::AFTER;
  } else if (hashCode == CONTAINS_HASH) {
    return MemoryRecordOperatorType::CONTAINS;
  } else if (hashCode == GREATER_THAN_HASH) {
    return MemoryRecordOperatorType::GREATER_THAN;
  } else if (hashCode == GREATER_THAN_OR_EQUALS_HASH) {
    return MemoryRecordOperatorType::GREATER_THAN_OR_EQUALS;
  } else if (hashCode == LESS_THAN_HASH) {
    return MemoryRecordOperatorType::LESS_THAN;
  } else if (hashCode == LESS_THAN_OR_EQUALS_HASH) {
    return MemoryRecordOperatorType::LESS_THAN_OR_EQUALS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MemoryRecordOperatorType>(hashCode);
  }

  return MemoryRecordOperatorType::NOT_SET;
}

Aws::String GetNameForMemoryRecordOperatorType(MemoryRecordOperatorType enumValue) {
  switch (enumValue) {
    case MemoryRecordOperatorType::NOT_SET:
      return {};
    case MemoryRecordOperatorType::EQUALS_TO:
      return "EQUALS_TO";
    case MemoryRecordOperatorType::EXISTS:
      return "EXISTS";
    case MemoryRecordOperatorType::NOT_EXISTS:
      return "NOT_EXISTS";
    case MemoryRecordOperatorType::BEFORE:
      return "BEFORE";
    case MemoryRecordOperatorType::AFTER:
      return "AFTER";
    case MemoryRecordOperatorType::CONTAINS:
      return "CONTAINS";
    case MemoryRecordOperatorType::GREATER_THAN:
      return "GREATER_THAN";
    case MemoryRecordOperatorType::GREATER_THAN_OR_EQUALS:
      return "GREATER_THAN_OR_EQUALS";
    case MemoryRecordOperatorType::LESS_THAN:
      return "LESS_THAN";
    case MemoryRecordOperatorType::LESS_THAN_OR_EQUALS:
      return "LESS_THAN_OR_EQUALS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MemoryRecordOperatorTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
