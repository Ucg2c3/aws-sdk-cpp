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
enum class NetworkAccessType { NOT_SET, PUBLIC_INTERNET_ONLY, VPC_ONLY };

namespace NetworkAccessTypeMapper {
AWS_DATAZONE_API NetworkAccessType GetNetworkAccessTypeForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForNetworkAccessType(NetworkAccessType value);
}  // namespace NetworkAccessTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
