/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/observabilityadmin/model/MskEnhancedMonitoringLevel.h>

using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
namespace MskEnhancedMonitoringLevelMapper {

static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
static const int PER_BROKER_HASH = HashingUtils::HashString("PER_BROKER");
static const int PER_TOPIC_PER_BROKER_HASH = HashingUtils::HashString("PER_TOPIC_PER_BROKER");
static const int PER_TOPIC_PER_PARTITION_HASH = HashingUtils::HashString("PER_TOPIC_PER_PARTITION");

MskEnhancedMonitoringLevel GetMskEnhancedMonitoringLevelForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DEFAULT_HASH) {
    return MskEnhancedMonitoringLevel::DEFAULT;
  } else if (hashCode == PER_BROKER_HASH) {
    return MskEnhancedMonitoringLevel::PER_BROKER;
  } else if (hashCode == PER_TOPIC_PER_BROKER_HASH) {
    return MskEnhancedMonitoringLevel::PER_TOPIC_PER_BROKER;
  } else if (hashCode == PER_TOPIC_PER_PARTITION_HASH) {
    return MskEnhancedMonitoringLevel::PER_TOPIC_PER_PARTITION;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MskEnhancedMonitoringLevel>(hashCode);
  }

  return MskEnhancedMonitoringLevel::NOT_SET;
}

Aws::String GetNameForMskEnhancedMonitoringLevel(MskEnhancedMonitoringLevel enumValue) {
  switch (enumValue) {
    case MskEnhancedMonitoringLevel::NOT_SET:
      return {};
    case MskEnhancedMonitoringLevel::DEFAULT:
      return "DEFAULT";
    case MskEnhancedMonitoringLevel::PER_BROKER:
      return "PER_BROKER";
    case MskEnhancedMonitoringLevel::PER_TOPIC_PER_BROKER:
      return "PER_TOPIC_PER_BROKER";
    case MskEnhancedMonitoringLevel::PER_TOPIC_PER_PARTITION:
      return "PER_TOPIC_PER_PARTITION";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MskEnhancedMonitoringLevelMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
