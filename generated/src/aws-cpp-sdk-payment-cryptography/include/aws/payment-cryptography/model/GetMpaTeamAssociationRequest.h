/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptographyRequest.h>
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/MpaOperation.h>

#include <utility>

namespace Aws {
namespace PaymentCryptography {
namespace Model {

/**
 */
class GetMpaTeamAssociationRequest : public PaymentCryptographyRequest {
 public:
  AWS_PAYMENTCRYPTOGRAPHY_API GetMpaTeamAssociationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetMpaTeamAssociation"; }

  AWS_PAYMENTCRYPTOGRAPHY_API Aws::String SerializePayload() const override;

  AWS_PAYMENTCRYPTOGRAPHY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The protected operation whose MPA team association you want to retrieve.
   * Currently, the only supported value is
   * <code>IMPORT_ROOT_PUBLIC_KEY_CERTIFICATE</code>.</p>
   */
  inline MpaOperation GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(MpaOperation value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline GetMpaTeamAssociationRequest& WithAction(MpaOperation value) {
    SetAction(value);
    return *this;
  }
  ///@}
 private:
  MpaOperation m_action{MpaOperation::NOT_SET};
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
