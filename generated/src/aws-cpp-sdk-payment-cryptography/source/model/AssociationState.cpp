/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payment-cryptography/model/AssociationState.h>

using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptography {
namespace Model {
namespace AssociationStateMapper {

static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
static const int UPDATE_PENDING_HASH = HashingUtils::HashString("UPDATE_PENDING");
static const int DELETE_PENDING_HASH = HashingUtils::HashString("DELETE_PENDING");

AssociationState GetAssociationStateForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == ACTIVE_HASH) {
    return AssociationState::ACTIVE;
  } else if (hashCode == UPDATE_PENDING_HASH) {
    return AssociationState::UPDATE_PENDING;
  } else if (hashCode == DELETE_PENDING_HASH) {
    return AssociationState::DELETE_PENDING;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<AssociationState>(hashCode);
  }

  return AssociationState::NOT_SET;
}

Aws::String GetNameForAssociationState(AssociationState enumValue) {
  switch (enumValue) {
    case AssociationState::NOT_SET:
      return {};
    case AssociationState::ACTIVE:
      return "ACTIVE";
    case AssociationState::UPDATE_PENDING:
      return "UPDATE_PENDING";
    case AssociationState::DELETE_PENDING:
      return "DELETE_PENDING";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace AssociationStateMapper
}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
