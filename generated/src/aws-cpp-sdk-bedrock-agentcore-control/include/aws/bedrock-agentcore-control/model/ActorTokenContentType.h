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
enum class ActorTokenContentType { NOT_SET, NONE, M2M, AWS_IAM_ID_TOKEN_JWT };

namespace ActorTokenContentTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API ActorTokenContentType GetActorTokenContentTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForActorTokenContentType(ActorTokenContentType value);
}  // namespace ActorTokenContentTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
