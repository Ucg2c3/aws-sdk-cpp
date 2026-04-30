/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/InferenceComponentPlacementStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

InferenceComponentPlacementStatus::InferenceComponentPlacementStatus(JsonView jsonValue) { *this = jsonValue; }

InferenceComponentPlacementStatus& InferenceComponentPlacementStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceType")) {
    m_instanceType = ProductionVariantInstanceTypeMapper::GetProductionVariantInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentCopyCount")) {
    m_currentCopyCount = jsonValue.GetInteger("CurrentCopyCount");
    m_currentCopyCountHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceComponentPlacementStatus::Jsonize() const {
  JsonValue payload;

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", ProductionVariantInstanceTypeMapper::GetNameForProductionVariantInstanceType(m_instanceType));
  }

  if (m_currentCopyCountHasBeenSet) {
    payload.WithInteger("CurrentCopyCount", m_currentCopyCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
