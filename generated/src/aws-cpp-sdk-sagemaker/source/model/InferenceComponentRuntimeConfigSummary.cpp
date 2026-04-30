/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker/model/InferenceComponentRuntimeConfigSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {

InferenceComponentRuntimeConfigSummary::InferenceComponentRuntimeConfigSummary(JsonView jsonValue) { *this = jsonValue; }

InferenceComponentRuntimeConfigSummary& InferenceComponentRuntimeConfigSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DesiredCopyCount")) {
    m_desiredCopyCount = jsonValue.GetInteger("DesiredCopyCount");
    m_desiredCopyCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrentCopyCount")) {
    m_currentCopyCount = jsonValue.GetInteger("CurrentCopyCount");
    m_currentCopyCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PlacementStatus")) {
    Aws::Utils::Array<JsonView> placementStatusJsonList = jsonValue.GetArray("PlacementStatus");
    for (unsigned placementStatusIndex = 0; placementStatusIndex < placementStatusJsonList.GetLength(); ++placementStatusIndex) {
      m_placementStatus.push_back(placementStatusJsonList[placementStatusIndex].AsObject());
    }
    m_placementStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue InferenceComponentRuntimeConfigSummary::Jsonize() const {
  JsonValue payload;

  if (m_desiredCopyCountHasBeenSet) {
    payload.WithInteger("DesiredCopyCount", m_desiredCopyCount);
  }

  if (m_currentCopyCountHasBeenSet) {
    payload.WithInteger("CurrentCopyCount", m_currentCopyCount);
  }

  if (m_placementStatusHasBeenSet) {
    Aws::Utils::Array<JsonValue> placementStatusJsonList(m_placementStatus.size());
    for (unsigned placementStatusIndex = 0; placementStatusIndex < placementStatusJsonList.GetLength(); ++placementStatusIndex) {
      placementStatusJsonList[placementStatusIndex].AsObject(m_placementStatus[placementStatusIndex].Jsonize());
    }
    payload.WithArray("PlacementStatus", std::move(placementStatusJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
