/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/PackageManager.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace PackageManagerMapper {

static const int UV_HASH = HashingUtils::HashString("UV");

PackageManager GetPackageManagerForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == UV_HASH) {
    return PackageManager::UV;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<PackageManager>(hashCode);
  }

  return PackageManager::NOT_SET;
}

Aws::String GetNameForPackageManager(PackageManager enumValue) {
  switch (enumValue) {
    case PackageManager::NOT_SET:
      return {};
    case PackageManager::UV:
      return "UV";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace PackageManagerMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
