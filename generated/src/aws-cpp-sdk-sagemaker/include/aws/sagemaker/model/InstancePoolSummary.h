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
 * <p>A summary of an instance pool for a production variant, including the
 * instance type and the current number of instances.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InstancePoolSummary">AWS
 * API Reference</a></p>
 */
class InstancePoolSummary {
 public:
  AWS_SAGEMAKER_API InstancePoolSummary() = default;
  AWS_SAGEMAKER_API InstancePoolSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API InstancePoolSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ML compute instance type for the instance pool.</p>
   */
  inline ProductionVariantInstanceType GetInstanceType() const { return m_instanceType; }
  inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
  inline void SetInstanceType(ProductionVariantInstanceType value) {
    m_instanceTypeHasBeenSet = true;
    m_instanceType = value;
  }
  inline InstancePoolSummary& WithInstanceType(ProductionVariantInstanceType value) {
    SetInstanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current number of instances of this type in the instance pool.</p>
   */
  inline int GetCurrentInstanceCount() const { return m_currentInstanceCount; }
  inline bool CurrentInstanceCountHasBeenSet() const { return m_currentInstanceCountHasBeenSet; }
  inline void SetCurrentInstanceCount(int value) {
    m_currentInstanceCountHasBeenSet = true;
    m_currentInstanceCount = value;
  }
  inline InstancePoolSummary& WithCurrentInstanceCount(int value) {
    SetCurrentInstanceCount(value);
    return *this;
  }
  ///@}
 private:
  ProductionVariantInstanceType m_instanceType{ProductionVariantInstanceType::NOT_SET};

  int m_currentInstanceCount{0};
  bool m_instanceTypeHasBeenSet = false;
  bool m_currentInstanceCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
