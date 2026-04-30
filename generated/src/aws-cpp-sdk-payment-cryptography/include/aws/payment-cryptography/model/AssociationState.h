/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>

namespace Aws {
namespace PaymentCryptography {
namespace Model {
enum class AssociationState { NOT_SET, ACTIVE, UPDATE_PENDING, DELETE_PENDING };

namespace AssociationStateMapper {
AWS_PAYMENTCRYPTOGRAPHY_API AssociationState GetAssociationStateForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForAssociationState(AssociationState value);
}  // namespace AssociationStateMapper
}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
