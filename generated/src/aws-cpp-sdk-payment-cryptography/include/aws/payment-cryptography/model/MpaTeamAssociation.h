/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/AssociationState.h>
#include <aws/payment-cryptography/model/MpaOperation.h>
#include <aws/payment-cryptography/model/MpaStatus.h>

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
 * <p>The details of an MPA team association with a protected
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/payment-cryptography-2021-09-14/MpaTeamAssociation">AWS
 * API Reference</a></p>
 */
class MpaTeamAssociation {
 public:
  AWS_PAYMENTCRYPTOGRAPHY_API MpaTeamAssociation() = default;
  AWS_PAYMENTCRYPTOGRAPHY_API MpaTeamAssociation(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHY_API MpaTeamAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PAYMENTCRYPTOGRAPHY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The protected operation associated with the MPA team.</p>
   */
  inline MpaOperation GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(MpaOperation value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline MpaTeamAssociation& WithAction(MpaOperation value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the MPA team.</p>
   */
  inline const Aws::String& GetMpaTeamArn() const { return m_mpaTeamArn; }
  inline bool MpaTeamArnHasBeenSet() const { return m_mpaTeamArnHasBeenSet; }
  template <typename MpaTeamArnT = Aws::String>
  void SetMpaTeamArn(MpaTeamArnT&& value) {
    m_mpaTeamArnHasBeenSet = true;
    m_mpaTeamArn = std::forward<MpaTeamArnT>(value);
  }
  template <typename MpaTeamArnT = Aws::String>
  MpaTeamAssociation& WithMpaTeamArn(MpaTeamArnT&& value) {
    SetMpaTeamArn(std::forward<MpaTeamArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the MPA team association.</p>
   */
  inline AssociationState GetAssociationState() const { return m_associationState; }
  inline bool AssociationStateHasBeenSet() const { return m_associationStateHasBeenSet; }
  inline void SetAssociationState(AssociationState value) {
    m_associationStateHasBeenSet = true;
    m_associationState = value;
  }
  inline MpaTeamAssociation& WithAssociationState(AssociationState value) {
    SetAssociationState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MPA session status for the association, if applicable.</p>
   */
  inline const MpaStatus& GetMpaStatus() const { return m_mpaStatus; }
  inline bool MpaStatusHasBeenSet() const { return m_mpaStatusHasBeenSet; }
  template <typename MpaStatusT = MpaStatus>
  void SetMpaStatus(MpaStatusT&& value) {
    m_mpaStatusHasBeenSet = true;
    m_mpaStatus = std::forward<MpaStatusT>(value);
  }
  template <typename MpaStatusT = MpaStatus>
  MpaTeamAssociation& WithMpaStatus(MpaStatusT&& value) {
    SetMpaStatus(std::forward<MpaStatusT>(value));
    return *this;
  }
  ///@}
 private:
  MpaOperation m_action{MpaOperation::NOT_SET};

  Aws::String m_mpaTeamArn;

  AssociationState m_associationState{AssociationState::NOT_SET};

  MpaStatus m_mpaStatus;
  bool m_actionHasBeenSet = false;
  bool m_mpaTeamArnHasBeenSet = false;
  bool m_associationStateHasBeenSet = false;
  bool m_mpaStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
