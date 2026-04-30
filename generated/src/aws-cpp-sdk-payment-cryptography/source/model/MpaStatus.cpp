/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/payment-cryptography/model/MpaStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PaymentCryptography {
namespace Model {

MpaStatus::MpaStatus(JsonView jsonValue) { *this = jsonValue; }

MpaStatus& MpaStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MpaSessionArn")) {
    m_mpaSessionArn = jsonValue.GetString("MpaSessionArn");
    m_mpaSessionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = SessionStatusMapper::GetSessionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InitiationDate")) {
    m_initiationDate = jsonValue.GetDouble("InitiationDate");
    m_initiationDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusMessage")) {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue MpaStatus::Jsonize() const {
  JsonValue payload;

  if (m_mpaSessionArnHasBeenSet) {
    payload.WithString("MpaSessionArn", m_mpaSessionArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", SessionStatusMapper::GetNameForSessionStatus(m_status));
  }

  if (m_initiationDateHasBeenSet) {
    payload.WithDouble("InitiationDate", m_initiationDate.SecondsWithMSPrecision());
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("StatusMessage", m_statusMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace PaymentCryptography
}  // namespace Aws
