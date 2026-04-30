/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/MpaOperation.h>

#include <utility>

namespace Aws {
namespace PaymentCryptography {
namespace Model {

/**
 */
class DisassociateMpaTeamRequest : public PaymentCryptographyRequest {
 public:
  AWS_PAYMENTCRYPTOGRAPHY_API DisassociateMpaTeamRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DisassociateMpaTeam"; }

  AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

  AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The protected operation to disassociate from the MPA team. Currently, the
   * only supported value is <code>IMPORT_ROOT_PUBLIC_KEY_CERTIFICATE</code>.</p>
   */
  inline MpaOperation GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(MpaOperation value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline DisassociateMpaTeamRequest& WithAction(MpaOperation value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comment from the requester explaining the reason for the
   * disassociation.</p>  <p>Don't include personal, confidential or
   * sensitive information in this field. This field may be displayed in plaintext in
   * CloudTrail logs and other output.</p>
   */
  inline const Aws::String& GetRequesterComment() const { return m_requesterComment; }
  inline bool RequesterCommentHasBeenSet() const { return m_requesterCommentHasBeenSet; }
  template <typename RequesterCommentT = Aws::String>
  void SetRequesterComment(RequesterCommentT&& value) {
    m_requesterCommentHasBeenSet = true;
    m_requesterComment = std::forward<RequesterCommentT>(value);
  }
  template <typename RequesterCommentT = Aws::String>
  DisassociateMpaTeamRequest& WithRequesterComment(RequesterCommentT&& value) {
    SetRequesterComment(std::forward<RequesterCommentT>(value));
    return *this;
  }
  ///@}
 private:
  MpaOperation m_action{MpaOperation::NOT_SET};

  Aws::String m_requesterComment;
  bool m_actionHasBeenSet = false;
  bool m_requesterCommentHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
