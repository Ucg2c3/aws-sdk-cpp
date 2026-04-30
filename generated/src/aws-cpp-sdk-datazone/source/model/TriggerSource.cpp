/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/TriggerSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

TriggerSource::TriggerSource(JsonView jsonValue) { *this = jsonValue; }

TriggerSource& TriggerSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = TriggerSourceTypeMapper::GetTriggerSourceTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue TriggerSource::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", TriggerSourceTypeMapper::GetNameForTriggerSourceType(m_type));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
