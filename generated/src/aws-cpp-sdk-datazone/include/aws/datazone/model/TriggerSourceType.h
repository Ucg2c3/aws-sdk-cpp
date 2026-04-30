/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class TriggerSourceType { NOT_SET, MANUAL, SCHEDULED, WORKFLOW };

namespace TriggerSourceTypeMapper {
AWS_DATAZONE_API TriggerSourceType GetTriggerSourceTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForTriggerSourceType(TriggerSourceType value);
}  // namespace TriggerSourceTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
