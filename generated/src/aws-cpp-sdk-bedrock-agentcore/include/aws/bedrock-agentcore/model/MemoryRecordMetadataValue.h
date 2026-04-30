/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>The value of a memory record metadata entry.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MemoryRecordMetadataValue">AWS
 * API Reference</a></p>
 */
class MemoryRecordMetadataValue {
 public:
  AWS_BEDROCKAGENTCORE_API MemoryRecordMetadataValue() = default;
  AWS_BEDROCKAGENTCORE_API MemoryRecordMetadataValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API MemoryRecordMetadataValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A string value.</p>
   */
  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  MemoryRecordMetadataValue& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of string values.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStringListValue() const { return m_stringListValue; }
  inline bool StringListValueHasBeenSet() const { return m_stringListValueHasBeenSet; }
  template <typename StringListValueT = Aws::Vector<Aws::String>>
  void SetStringListValue(StringListValueT&& value) {
    m_stringListValueHasBeenSet = true;
    m_stringListValue = std::forward<StringListValueT>(value);
  }
  template <typename StringListValueT = Aws::Vector<Aws::String>>
  MemoryRecordMetadataValue& WithStringListValue(StringListValueT&& value) {
    SetStringListValue(std::forward<StringListValueT>(value));
    return *this;
  }
  template <typename StringListValueT = Aws::String>
  MemoryRecordMetadataValue& AddStringListValue(StringListValueT&& value) {
    m_stringListValueHasBeenSet = true;
    m_stringListValue.emplace_back(std::forward<StringListValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A numeric value.</p>
   */
  inline double GetNumberValue() const { return m_numberValue; }
  inline bool NumberValueHasBeenSet() const { return m_numberValueHasBeenSet; }
  inline void SetNumberValue(double value) {
    m_numberValueHasBeenSet = true;
    m_numberValue = value;
  }
  inline MemoryRecordMetadataValue& WithNumberValue(double value) {
    SetNumberValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp value in ISO 8601 UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetDateTimeValue() const { return m_dateTimeValue; }
  inline bool DateTimeValueHasBeenSet() const { return m_dateTimeValueHasBeenSet; }
  template <typename DateTimeValueT = Aws::Utils::DateTime>
  void SetDateTimeValue(DateTimeValueT&& value) {
    m_dateTimeValueHasBeenSet = true;
    m_dateTimeValue = std::forward<DateTimeValueT>(value);
  }
  template <typename DateTimeValueT = Aws::Utils::DateTime>
  MemoryRecordMetadataValue& WithDateTimeValue(DateTimeValueT&& value) {
    SetDateTimeValue(std::forward<DateTimeValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringValue;

  Aws::Vector<Aws::String> m_stringListValue;

  double m_numberValue{0.0};

  Aws::Utils::DateTime m_dateTimeValue{};
  bool m_stringValueHasBeenSet = false;
  bool m_stringListValueHasBeenSet = false;
  bool m_numberValueHasBeenSet = false;
  bool m_dateTimeValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
