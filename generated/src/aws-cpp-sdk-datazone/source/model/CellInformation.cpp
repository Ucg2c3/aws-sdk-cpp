/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/CellInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

CellInformation::CellInformation(JsonView jsonValue) { *this = jsonValue; }

CellInformation& CellInformation::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue CellInformation::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
