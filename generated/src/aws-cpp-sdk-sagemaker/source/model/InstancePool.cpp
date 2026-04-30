/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/InstancePool.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

InstancePool::InstancePool(JsonView jsonValue) { *this = jsonValue; }

InstancePool& InstancePool::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceType")) {
    m_instanceType = ProductionVariantInstanceTypeMapper::GetProductionVariantInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ModelNameOverride")) {
    m_modelNameOverride = jsonValue.GetString("ModelNameOverride");
    m_modelNameOverrideHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Priority")) {
    m_priority = jsonValue.GetInteger("Priority");
    m_priorityHasBeenSet = true;
  }
  return *this;
}

JsonValue InstancePool::Jsonize() const {
  JsonValue payload;

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", ProductionVariantInstanceTypeMapper::GetNameForProductionVariantInstanceType(m_instanceType));
  }

  if (m_modelNameOverrideHasBeenSet) {
    payload.WithString("ModelNameOverride", m_modelNameOverride);
  }

  if (m_priorityHasBeenSet) {
    payload.WithInteger("Priority", m_priority);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
