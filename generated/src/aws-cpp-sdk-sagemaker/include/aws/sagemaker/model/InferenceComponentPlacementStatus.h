/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ProductionVariantInstanceType.h>

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
 * <p>The placement status of an inference component on a specific instance type.
 * Shows the number of inference component copies currently placed on instances of
 * a given type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentPlacementStatus">AWS
 * API Reference</a></p>
 */
class InferenceComponentPlacementStatus {
 public:
  AWS_SAGEMAKER_API InferenceComponentPlacementStatus() = default;
  AWS_SAGEMAKER_API InferenceComponentPlacementStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API InferenceComponentPlacementStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ML compute instance type where the inference component copies are
   * placed.</p>
   */
  inline ProductionVariantInstanceType GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  inline void SetInstanceType(ProductionVariantInstanceType value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = value;
  }
  inline InferenceComponentPlacementStatus& WithInstanceType(ProductionVariantInstanceType value) {
    SetInstanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of inference component copies currently placed on instances of
   * this type.</p>
   */
  inline int GetCurrentCopyCount() const { return m_currentCopyCount; }
  inline bool CurrentCopyCountHasBeenSet() const { return m_currentCopyCountHasBeenSet; }
  inline void SetCurrentCopyCount(int value) {
    m_currentCopyCountHasBeenSet = true;
    m_currentCopyCount = value;
  }
  inline InferenceComponentPlacementStatus& WithCurrentCopyCount(int value) {
    SetCurrentCopyCount(value);
    return *this;
  }
  ///@}
 private:
  ProductionVariantInstanceType m_instanceType{ProductionVariantInstanceType::NOT_SET};

  int m_currentCopyCount{0};
  bool m_instanceTypeHasBeenSet = false;
  bool m_currentCopyCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
