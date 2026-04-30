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
enum class SessionStatus { NOT_SET, PENDING, APPROVED, FAILED, CANCELLED };

namespace SessionStatusMapper {
AWS_PAYMENTCRYPTOGRAPHY_API SessionStatus GetSessionStatusForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForSessionStatus(SessionStatus value);
}  // namespace SessionStatusMapper
}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
