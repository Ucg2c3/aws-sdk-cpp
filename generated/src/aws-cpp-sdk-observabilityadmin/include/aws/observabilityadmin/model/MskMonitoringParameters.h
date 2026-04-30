/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/MskEnhancedMonitoringLevel.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p> Configuration parameters for Amazon MSK cluster monitoring, including
 * enhanced monitoring level settings. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/MskMonitoringParameters">AWS
 * API Reference</a></p>
 */
class MskMonitoringParameters {
 public:
  AWS_OBSERVABILITYADMIN_API MskMonitoringParameters() = default;
  AWS_OBSERVABILITYADMIN_API MskMonitoringParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API MskMonitoringParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The level of enhanced monitoring for the MSK cluster. </p>
   */
  inline MskEnhancedMonitoringLevel GetEnhancedMonitoring() const { return m_enhancedMonitoring; }
  inline bool EnhancedMonitoringHasBeenSet() const { return m_enhancedMonitoringHasBeenSet; }
  inline void SetEnhancedMonitoring(MskEnhancedMonitoringLevel value) {
    m_enhancedMonitoringHasBeenSet = true;
    m_enhancedMonitoring = value;
  }
  inline MskMonitoringParameters& WithEnhancedMonitoring(MskEnhancedMonitoringLevel value) {
    SetEnhancedMonitoring(value);
    return *this;
  }
  ///@}
 private:
  MskEnhancedMonitoringLevel m_enhancedMonitoring{MskEnhancedMonitoringLevel::NOT_SET};
  bool m_enhancedMonitoringHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
