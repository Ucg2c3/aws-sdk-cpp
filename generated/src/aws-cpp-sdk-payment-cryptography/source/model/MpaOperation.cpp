/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/payment-cryptography/model/MpaOperation.h>

using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptography {
namespace Model {
namespace MpaOperationMapper {

static const int IMPORT_ROOT_PUBLIC_KEY_CERTIFICATE_HASH = HashingUtils::HashString("IMPORT_ROOT_PUBLIC_KEY_CERTIFICATE");

MpaOperation GetMpaOperationForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == IMPORT_ROOT_PUBLIC_KEY_CERTIFICATE_HASH) {
    return MpaOperation::IMPORT_ROOT_PUBLIC_KEY_CERTIFICATE;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MpaOperation>(hashCode);
  }

  return MpaOperation::NOT_SET;
}

Aws::String GetNameForMpaOperation(MpaOperation enumValue) {
  switch (enumValue) {
    case MpaOperation::NOT_SET:
      return {};
    case MpaOperation::IMPORT_ROOT_PUBLIC_KEY_CERTIFICATE:
      return "IMPORT_ROOT_PUBLIC_KEY_CERTIFICATE";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MpaOperationMapper
}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
