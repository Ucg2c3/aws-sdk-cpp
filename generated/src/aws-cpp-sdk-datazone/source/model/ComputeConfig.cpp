/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/ComputeConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

ComputeConfig::ComputeConfig(JsonView jsonValue) { *this = jsonValue; }

ComputeConfig& ComputeConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instanceType")) {
    m_instanceType = jsonValue.GetString("instanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("environmentVersion")) {
    m_environmentVersion = jsonValue.GetString("environmentVersion");
    m_environmentVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeConfig::Jsonize() const {
  JsonValue payload;

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("instanceType", m_instanceType);
  }

  if (m_environmentVersionHasBeenSet) {
    payload.WithString("environmentVersion", m_environmentVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
