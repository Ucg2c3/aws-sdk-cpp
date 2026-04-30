/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/MpaTeamAssociation.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PaymentCryptography {
namespace Model {
class DisassociateMpaTeamResult {
 public:
  AWS_PAYMENTCRYPTOGRAPHY_API DisassociateMpaTeamResult() = default;
  AWS_PAYMENTCRYPTOGRAPHY_API DisassociateMpaTeamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PAYMENTCRYPTOGRAPHY_API DisassociateMpaTeamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The details of the MPA team association.</p>
   */
  inline const MpaTeamAssociation& GetMpaTeamAssociation() const { return m_mpaTeamAssociation; }
  template <typename MpaTeamAssociationT = MpaTeamAssociation>
  void SetMpaTeamAssociation(MpaTeamAssociationT&& value) {
    m_mpaTeamAssociationHasBeenSet = true;
    m_mpaTeamAssociation = std::forward<MpaTeamAssociationT>(value);
  }
  template <typename MpaTeamAssociationT = MpaTeamAssociation>
  DisassociateMpaTeamResult& WithMpaTeamAssociation(MpaTeamAssociationT&& value) {
    SetMpaTeamAssociation(std::forward<MpaTeamAssociationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DisassociateMpaTeamResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  MpaTeamAssociation m_mpaTeamAssociation;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_mpaTeamAssociationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
