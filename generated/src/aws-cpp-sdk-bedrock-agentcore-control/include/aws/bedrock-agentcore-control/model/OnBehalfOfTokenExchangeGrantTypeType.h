/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
enum class OnBehalfOfTokenExchangeGrantTypeType { NOT_SET, TOKEN_EXCHANGE, JWT_AUTHORIZATION_GRANT };

namespace OnBehalfOfTokenExchangeGrantTypeTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API OnBehalfOfTokenExchangeGrantTypeType
GetOnBehalfOfTokenExchangeGrantTypeTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForOnBehalfOfTokenExchangeGrantTypeType(OnBehalfOfTokenExchangeGrantTypeType value);
}  // namespace OnBehalfOfTokenExchangeGrantTypeTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
