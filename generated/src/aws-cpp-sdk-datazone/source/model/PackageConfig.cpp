/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/PackageConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

PackageConfig::PackageConfig(JsonView jsonValue) { *this = jsonValue; }

PackageConfig& PackageConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("packageManager")) {
    m_packageManager = PackageManagerMapper::GetPackageManagerForName(jsonValue.GetString("packageManager"));
    m_packageManagerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("packageSpecification")) {
    m_packageSpecification = jsonValue.GetString("packageSpecification");
    m_packageSpecificationHasBeenSet = true;
  }
  return *this;
}

JsonValue PackageConfig::Jsonize() const {
  JsonValue payload;

  if (m_packageManagerHasBeenSet) {
    payload.WithString("packageManager", PackageManagerMapper::GetNameForPackageManager(m_packageManager));
  }

  if (m_packageSpecificationHasBeenSet) {
    payload.WithString("packageSpecification", m_packageSpecification);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
