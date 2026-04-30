/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography/model/DisassociateMpaTeamRequest.h>

#include <utility>

using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateMpaTeamRequest::SerializePayload() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("Action", MpaOperationMapper::GetNameForMpaOperation(m_action));
  }

  if (m_requesterCommentHasBeenSet) {
    payload.WithString("RequesterComment", m_requesterComment);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisassociateMpaTeamRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PaymentCryptographyControlPlane.DisassociateMpaTeam"));
  return headers;
}
