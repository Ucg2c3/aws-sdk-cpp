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
enum class MpaOperation { NOT_SET, IMPORT_ROOT_PUBLIC_KEY_CERTIFICATE };

namespace MpaOperationMapper {
AWS_PAYMENTCRYPTOGRAPHY_API MpaOperation GetMpaOperationForName(const Aws::String& name);

AWS_PAYMENTCRYPTOGRAPHY_API Aws::String GetNameForMpaOperation(MpaOperation value);
}  // namespace MpaOperationMapper
}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
