/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/EnvironmentConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

EnvironmentConfig::EnvironmentConfig(JsonView jsonValue) { *this = jsonValue; }

EnvironmentConfig& EnvironmentConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("imageVersion")) {
    m_imageVersion = jsonValue.GetString("imageVersion");
    m_imageVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("packageConfig")) {
    m_packageConfig = jsonValue.GetObject("packageConfig");
    m_packageConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentConfig::Jsonize() const {
  JsonValue payload;

  if (m_imageVersionHasBeenSet) {
    payload.WithString("imageVersion", m_imageVersion);
  }

  if (m_packageConfigHasBeenSet) {
    payload.WithObject("packageConfig", m_packageConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
