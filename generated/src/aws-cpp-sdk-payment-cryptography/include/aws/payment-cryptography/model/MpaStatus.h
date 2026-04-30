/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/SessionStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PaymentCryptography {
namespace Model {

/**
 * <p>The status of an MPA session.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/MpaStatus">AWS
 * API Reference</a></p>
 */
class MpaStatus {
 public:
  AWS_PAYMENTCRYPTOGRAPHY_API MpaStatus() = default;
  AWS_PAYMENTCRYPTOGRAPHY_API MpaStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHY_API MpaStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the MPA session.</p>
   */
  inline const Aws::String& GetMpaSessionArn() const { return m_mpaSessionArn; }
  inline bool MpaSessionArnHasBeenSet() const { return m_mpaSessionArnHasBeenSet; }
  template <typename MpaSessionArnT = Aws::String>
  void SetMpaSessionArn(MpaSessionArnT&& value) {
    m_mpaSessionArnHasBeenSet = true;
    m_mpaSessionArn = std::forward<MpaSessionArnT>(value);
  }
  template <typename MpaSessionArnT = Aws::String>
  MpaStatus& WithMpaSessionArn(MpaSessionArnT&& value) {
    SetMpaSessionArn(std::forward<MpaSessionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the MPA session.</p>
   */
  inline SessionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(SessionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline MpaStatus& WithStatus(SessionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the MPA session was initiated.</p>
   */
  inline const Aws::Utils::DateTime& GetInitiationDate() const { return m_initiationDate; }
  inline bool InitiationDateHasBeenSet() const { return m_initiationDateHasBeenSet; }
  template <typename InitiationDateT = Aws::Utils::DateTime>
  void SetInitiationDate(InitiationDateT&& value) {
    m_initiationDateHasBeenSet = true;
    m_initiationDate = std::forward<InitiationDateT>(value);
  }
  template <typename InitiationDateT = Aws::Utils::DateTime>
  MpaStatus& WithInitiationDate(InitiationDateT&& value) {
    SetInitiationDate(std::forward<InitiationDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message providing additional information about the MPA session
   * status.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  MpaStatus& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_mpaSessionArn;

  SessionStatus m_status{SessionStatus::NOT_SET};

  Aws::Utils::DateTime m_initiationDate{};

  Aws::String m_statusMessage;
  bool m_mpaSessionArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_initiationDateHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
