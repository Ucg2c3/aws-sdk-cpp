/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography/model/GetMpaTeamAssociationRequest.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetMpaTeamAssociationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("Action", MpaOperationMapper::GetNameForMpaOperation(m_action));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetMpaTeamAssociationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PaymentCryptographyControlPlane.GetMpaTeamAssociation"));
  return headers;
}
