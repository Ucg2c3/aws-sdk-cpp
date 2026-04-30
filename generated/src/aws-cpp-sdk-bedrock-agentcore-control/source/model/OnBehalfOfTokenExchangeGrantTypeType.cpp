/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/OnBehalfOfTokenExchangeGrantTypeType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace OnBehalfOfTokenExchangeGrantTypeTypeMapper {

static const int TOKEN_EXCHANGE_HASH = HashingUtils::HashString("TOKEN_EXCHANGE");
static const int JWT_AUTHORIZATION_GRANT_HASH = HashingUtils::HashString("JWT_AUTHORIZATION_GRANT");

OnBehalfOfTokenExchangeGrantTypeType GetOnBehalfOfTokenExchangeGrantTypeTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == TOKEN_EXCHANGE_HASH) {
    return OnBehalfOfTokenExchangeGrantTypeType::TOKEN_EXCHANGE;
  } else if (hashCode == JWT_AUTHORIZATION_GRANT_HASH) {
    return OnBehalfOfTokenExchangeGrantTypeType::JWT_AUTHORIZATION_GRANT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<OnBehalfOfTokenExchangeGrantTypeType>(hashCode);
  }

  return OnBehalfOfTokenExchangeGrantTypeType::NOT_SET;
}

Aws::String GetNameForOnBehalfOfTokenExchangeGrantTypeType(OnBehalfOfTokenExchangeGrantTypeType enumValue) {
  switch (enumValue) {
    case OnBehalfOfTokenExchangeGrantTypeType::NOT_SET:
      return {};
    case OnBehalfOfTokenExchangeGrantTypeType::TOKEN_EXCHANGE:
      return "TOKEN_EXCHANGE";
    case OnBehalfOfTokenExchangeGrantTypeType::JWT_AUTHORIZATION_GRANT:
      return "JWT_AUTHORIZATION_GRANT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace OnBehalfOfTokenExchangeGrantTypeTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
