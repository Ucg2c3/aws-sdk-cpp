/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/InstancePoolSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

InstancePoolSummary::InstancePoolSummary(JsonView jsonValue) { *this = jsonValue; }

InstancePoolSummary& InstancePoolSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InstanceType")) {
    m_instanceType = ProductionVariantInstanceTypeMapper::GetProductionVariantInstanceTypeForName(jsonValue.GetString("InstanceType"));
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentInstanceCount")) {
    m_currentInstanceCount = jsonValue.GetInteger("CurrentInstanceCount");
    m_currentInstanceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue InstancePoolSummary::Jsonize() const {
  JsonValue payload;

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", ProductionVariantInstanceTypeMapper::GetNameForProductionVariantInstanceType(m_instanceType));
  }

  if (m_currentInstanceCountHasBeenSet) {
    payload.WithInteger("CurrentInstanceCount", m_currentInstanceCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
