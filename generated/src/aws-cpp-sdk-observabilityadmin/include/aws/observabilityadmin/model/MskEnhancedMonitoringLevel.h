/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {
enum class MskEnhancedMonitoringLevel { NOT_SET, DEFAULT, PER_BROKER, PER_TOPIC_PER_BROKER, PER_TOPIC_PER_PARTITION };

namespace MskEnhancedMonitoringLevelMapper {
AWS_OBSERVABILITYADMIN_API MskEnhancedMonitoringLevel GetMskEnhancedMonitoringLevelForName(const Aws::String& name);

AWS_OBSERVABILITYADMIN_API Aws::String GetNameForMskEnhancedMonitoringLevel(MskEnhancedMonitoringLevel value);
}  // namespace MskEnhancedMonitoringLevelMapper
}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
