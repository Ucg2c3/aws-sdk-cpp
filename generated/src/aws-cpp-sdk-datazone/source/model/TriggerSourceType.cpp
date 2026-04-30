/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/TriggerSourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace TriggerSourceTypeMapper {

static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
static const int SCHEDULED_HASH = HashingUtils::HashString("SCHEDULED");
static const int WORKFLOW_HASH = HashingUtils::HashString("WORKFLOW");

TriggerSourceType GetTriggerSourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == MANUAL_HASH) {
    return TriggerSourceType::MANUAL;
  } else if (hashCode == SCHEDULED_HASH) {
    return TriggerSourceType::SCHEDULED;
  } else if (hashCode == WORKFLOW_HASH) {
    return TriggerSourceType::WORKFLOW;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<TriggerSourceType>(hashCode);
  }

  return TriggerSourceType::NOT_SET;
}

Aws::String GetNameForTriggerSourceType(TriggerSourceType enumValue) {
  switch (enumValue) {
    case TriggerSourceType::NOT_SET:
      return {};
    case TriggerSourceType::MANUAL:
      return "MANUAL";
    case TriggerSourceType::SCHEDULED:
      return "SCHEDULED";
    case TriggerSourceType::WORKFLOW:
      return "WORKFLOW";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace TriggerSourceTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
