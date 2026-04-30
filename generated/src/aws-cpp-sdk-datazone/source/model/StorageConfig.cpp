/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/StorageConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

StorageConfig::StorageConfig(JsonView jsonValue) { *this = jsonValue; }

StorageConfig& StorageConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("projectS3Path")) {
    m_projectS3Path = jsonValue.GetString("projectS3Path");
    m_projectS3PathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyArn")) {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue StorageConfig::Jsonize() const {
  JsonValue payload;

  if (m_projectS3PathHasBeenSet) {
    payload.WithString("projectS3Path", m_projectS3Path);
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
