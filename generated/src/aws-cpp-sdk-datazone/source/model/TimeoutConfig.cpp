/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/TimeoutConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

TimeoutConfig::TimeoutConfig(JsonView jsonValue) { *this = jsonValue; }

TimeoutConfig& TimeoutConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("runTimeoutInMinutes")) {
    m_runTimeoutInMinutes = jsonValue.GetInteger("runTimeoutInMinutes");
    m_runTimeoutInMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue TimeoutConfig::Jsonize() const {
  JsonValue payload;

  if (m_runTimeoutInMinutesHasBeenSet) {
    payload.WithInteger("runTimeoutInMinutes", m_runTimeoutInMinutes);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
