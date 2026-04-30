/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MetadataValueType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace MetadataValueTypeMapper {

static const int STRING_HASH = HashingUtils::HashString("STRING");
static const int STRINGLIST_HASH = HashingUtils::HashString("STRINGLIST");
static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");

MetadataValueType GetMetadataValueTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == STRING_HASH) {
    return MetadataValueType::STRING;
  } else if (hashCode == STRINGLIST_HASH) {
    return MetadataValueType::STRINGLIST;
  } else if (hashCode == NUMBER_HASH) {
    return MetadataValueType::NUMBER;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MetadataValueType>(hashCode);
  }

  return MetadataValueType::NOT_SET;
}

Aws::String GetNameForMetadataValueType(MetadataValueType enumValue) {
  switch (enumValue) {
    case MetadataValueType::NOT_SET:
      return {};
    case MetadataValueType::STRING:
      return "STRING";
    case MetadataValueType::STRINGLIST:
      return "STRINGLIST";
    case MetadataValueType::NUMBER:
      return "NUMBER";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MetadataValueTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
