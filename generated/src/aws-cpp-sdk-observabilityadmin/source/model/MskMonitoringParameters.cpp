/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/MskMonitoringParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

MskMonitoringParameters::MskMonitoringParameters(JsonView jsonValue) { *this = jsonValue; }

MskMonitoringParameters& MskMonitoringParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EnhancedMonitoring")) {
    m_enhancedMonitoring =
        MskEnhancedMonitoringLevelMapper::GetMskEnhancedMonitoringLevelForName(jsonValue.GetString("EnhancedMonitoring"));
    m_enhancedMonitoringHasBeenSet = true;
  }
  return *this;
}

JsonValue MskMonitoringParameters::Jsonize() const {
  JsonValue payload;

  if (m_enhancedMonitoringHasBeenSet) {
    payload.WithString("EnhancedMonitoring", MskEnhancedMonitoringLevelMapper::GetNameForMskEnhancedMonitoringLevel(m_enhancedMonitoring));
  }

  return payload;
}

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
