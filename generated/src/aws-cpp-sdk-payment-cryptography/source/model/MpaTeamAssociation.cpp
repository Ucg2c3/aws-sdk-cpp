/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography/model/MpaTeamAssociation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptography {
namespace Model {

MpaTeamAssociation::MpaTeamAssociation(JsonView jsonValue) { *this = jsonValue; }

MpaTeamAssociation& MpaTeamAssociation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Action")) {
    m_action = MpaOperationMapper::GetMpaOperationForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MpaTeamArn")) {
    m_mpaTeamArn = jsonValue.GetString("MpaTeamArn");
    m_mpaTeamArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssociationState")) {
    m_associationState = AssociationStateMapper::GetAssociationStateForName(jsonValue.GetString("AssociationState"));
    m_associationStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MpaStatus")) {
    m_mpaStatus = jsonValue.GetObject("MpaStatus");
    m_mpaStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue MpaTeamAssociation::Jsonize() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("Action", MpaOperationMapper::GetNameForMpaOperation(m_action));
  }

  if (m_mpaTeamArnHasBeenSet) {
    payload.WithString("MpaTeamArn", m_mpaTeamArn);
  }

  if (m_associationStateHasBeenSet) {
    payload.WithString("AssociationState", AssociationStateMapper::GetNameForAssociationState(m_associationState));
  }

  if (m_mpaStatusHasBeenSet) {
    payload.WithObject("MpaStatus", m_mpaStatus.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
