/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SSOAdmin {
namespace Model {
class CreateApplicationResult {
 public:
  AWS_SSOADMIN_API CreateApplicationResult() = default;
  AWS_SSOADMIN_API CreateApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SSOADMIN_API CreateApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Specifies the ARN of the application.</p>
   */
  inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
  template <typename ApplicationArnT = Aws::String>
  void SetApplicationArn(ApplicationArnT&& value) {
    m_applicationArnHasBeenSet = true;
    m_applicationArn = std::forward<ApplicationArnT>(value);
  }
  template <typename ApplicationArnT = Aws::String>
  CreateApplicationResult& WithApplicationArn(ApplicationArnT&& value) {
    SetApplicationArn(std::forward<ApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the instance of IAM Identity Center under which the operation will
   * run. For more information about ARNs, see <a
   * href="/general/latest/gr/aws-arns-and-namespaces.html">Amazon Resource Names
   * (ARNs) and Amazon Web Services Service Namespaces</a> in the <i>Amazon Web
   * Services General Reference</i>.</p>
   */
  inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
  template <typename InstanceArnT = Aws::String>
  void SetInstanceArn(InstanceArnT&& value) {
    m_instanceArnHasBeenSet = true;
    m_instanceArn = std::forward<InstanceArnT>(value);
  }
  template <typename InstanceArnT = Aws::String>
  CreateApplicationResult& WithInstanceArn(InstanceArnT&& value) {
    SetInstanceArn(std::forward<InstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the identity store that is connected to the instance of IAM
   * Identity Center.</p>
   */
  inline const Aws::String& GetIdentityStoreArn() const { return m_identityStoreArn; }
  template <typename IdentityStoreArnT = Aws::String>
  void SetIdentityStoreArn(IdentityStoreArnT&& value) {
    m_identityStoreArnHasBeenSet = true;
    m_identityStoreArn = std::forward<IdentityStoreArnT>(value);
  }
  template <typename IdentityStoreArnT = Aws::String>
  CreateApplicationResult& WithIdentityStoreArn(IdentityStoreArnT&& value) {
    SetIdentityStoreArn(std::forward<IdentityStoreArnT>(value));
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
  CreateApplicationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_applicationArn;

  Aws::String m_instanceArn;

  Aws::String m_identityStoreArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_applicationArnHasBeenSet = false;
  bool m_instanceArnHasBeenSet = false;
  bool m_identityStoreArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSOAdmin
}  // namespace Aws
