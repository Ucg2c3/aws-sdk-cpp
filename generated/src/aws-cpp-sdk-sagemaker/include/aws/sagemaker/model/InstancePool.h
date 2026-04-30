/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Specifies an instance type and its priority for a heterogeneous endpoint. Use
 * instance pools to configure a production variant with multiple instance types,
 * enabling the endpoint to provision instances across different types based on
 * priority.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InstancePool">AWS
 * API Reference</a></p>
 */
class InstancePool {
 public:
  AWS_SAGEMAKER_API InstancePool() = default;
  AWS_SAGEMAKER_API InstancePool(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API InstancePool& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline InstancePool& WithInstanceType(ProductionVariantInstanceType value) {
    SetInstanceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of a SageMaker model to use for this instance pool instead of the
   * model specified for the production variant. Use this to deploy a different model
   * optimized for the instance type in this pool.</p>
   */
  inline const Aws::String& GetModelNameOverride() const { return m_modelNameOverride; }
  inline bool ModelNameOverrideHasBeenSet() const { return m_modelNameOverrideHasBeenSet; }
  template <typename ModelNameOverrideT = Aws::String>
  void SetModelNameOverride(ModelNameOverrideT&& value) {
    m_modelNameOverrideHasBeenSet = true;
    m_modelNameOverride = std::forward<ModelNameOverrideT>(value);
  }
  template <typename ModelNameOverrideT = Aws::String>
  InstancePool& WithModelNameOverride(ModelNameOverrideT&& value) {
    SetModelNameOverride(std::forward<ModelNameOverrideT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The priority for the instance pool. SageMaker attempts to provision instances
   * in order of priority, starting with the lowest value. If instances for a
   * higher-priority pool are unavailable, SageMaker attempts to provision from the
   * next pool.</p> <p>Valid values: 1 to 5, where 1 is the highest priority.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline InstancePool& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}
 private:
  ProductionVariantInstanceType m_instanceType{ProductionVariantInstanceType::NOT_SET};

  Aws::String m_modelNameOverride;

  int m_priority{0};
  bool m_instanceTypeHasBeenSet = false;
  bool m_modelNameOverrideHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
