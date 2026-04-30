/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/InferenceComponentPlacementStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Details about the runtime settings for the model that is deployed with the
 * inference component.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentRuntimeConfigSummary">AWS
 * API Reference</a></p>
 */
class InferenceComponentRuntimeConfigSummary {
 public:
  AWS_SAGEMAKER_API InferenceComponentRuntimeConfigSummary() = default;
  AWS_SAGEMAKER_API InferenceComponentRuntimeConfigSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API InferenceComponentRuntimeConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of runtime copies of the model container that you requested to
   * deploy with the inference component.</p>
   */
  inline int GetDesiredCopyCount() const { return m_desiredCopyCount; }
  inline bool DesiredCopyCountHasBeenSet() const { return m_desiredCopyCountHasBeenSet; }
  inline void SetDesiredCopyCount(int value) {
    m_desiredCopyCountHasBeenSet = true;
    m_desiredCopyCount = value;
  }
  inline InferenceComponentRuntimeConfigSummary& WithDesiredCopyCount(int value) {
    SetDesiredCopyCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of runtime copies of the model container that are currently
   * deployed.</p>
   */
  inline int GetCurrentCopyCount() const { return m_currentCopyCount; }
  inline bool CurrentCopyCountHasBeenSet() const { return m_currentCopyCountHasBeenSet; }
  inline void SetCurrentCopyCount(int value) {
    m_currentCopyCountHasBeenSet = true;
    m_currentCopyCount = value;
  }
  inline InferenceComponentRuntimeConfigSummary& WithCurrentCopyCount(int value) {
    SetCurrentCopyCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The placement status of the inference component across instance types. Shows
   * how the inference component copies are distributed across instance types.</p>
   */
  inline const Aws::Vector<InferenceComponentPlacementStatus>& GetPlacementStatus() const { return m_placementStatus; }
  inline bool PlacementStatusHasBeenSet() const { return m_placementStatusHasBeenSet; }
  template <typename PlacementStatusT = Aws::Vector<InferenceComponentPlacementStatus>>
  void SetPlacementStatus(PlacementStatusT&& value) {
    m_placementStatusHasBeenSet = true;
    m_placementStatus = std::forward<PlacementStatusT>(value);
  }
  template <typename PlacementStatusT = Aws::Vector<InferenceComponentPlacementStatus>>
  InferenceComponentRuntimeConfigSummary& WithPlacementStatus(PlacementStatusT&& value) {
    SetPlacementStatus(std::forward<PlacementStatusT>(value));
    return *this;
  }
  template <typename PlacementStatusT = InferenceComponentPlacementStatus>
  InferenceComponentRuntimeConfigSummary& AddPlacementStatus(PlacementStatusT&& value) {
    m_placementStatusHasBeenSet = true;
    m_placementStatus.emplace_back(std::forward<PlacementStatusT>(value));
    return *this;
  }
  ///@}
 private:
  int m_desiredCopyCount{0};

  int m_currentCopyCount{0};

  Aws::Vector<InferenceComponentPlacementStatus> m_placementStatus;
  bool m_desiredCopyCountHasBeenSet = false;
  bool m_currentCopyCountHasBeenSet = false;
  bool m_placementStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
