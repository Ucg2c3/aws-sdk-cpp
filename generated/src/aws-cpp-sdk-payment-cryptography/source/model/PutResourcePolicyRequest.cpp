/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography/model/PutResourcePolicyRequest.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutResourcePolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_policyHasBeenSet) {
    payload.WithString("Policy", m_policy);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutResourcePolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PaymentCryptographyControlPlane.PutResourcePolicy"));
  return headers;
}
