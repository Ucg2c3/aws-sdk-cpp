/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/NetworkAccessType.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace NetworkAccessTypeMapper {

static const int PUBLIC_INTERNET_ONLY_HASH = HashingUtils::HashString("PUBLIC_INTERNET_ONLY");
static const int VPC_ONLY_HASH = HashingUtils::HashString("VPC_ONLY");

NetworkAccessType GetNetworkAccessTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == PUBLIC_INTERNET_ONLY_HASH) {
    return NetworkAccessType::PUBLIC_INTERNET_ONLY;
  } else if (hashCode == VPC_ONLY_HASH) {
    return NetworkAccessType::VPC_ONLY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NetworkAccessType>(hashCode);
  }

  return NetworkAccessType::NOT_SET;
}

Aws::String GetNameForNetworkAccessType(NetworkAccessType enumValue) {
  switch (enumValue) {
    case NetworkAccessType::NOT_SET:
      return {};
    case NetworkAccessType::PUBLIC_INTERNET_ONLY:
      return "PUBLIC_INTERNET_ONLY";
    case NetworkAccessType::VPC_ONLY:
      return "VPC_ONLY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NetworkAccessTypeMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
