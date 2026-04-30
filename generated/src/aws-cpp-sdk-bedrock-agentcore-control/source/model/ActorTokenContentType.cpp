/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ActorTokenContentType.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
namespace ActorTokenContentTypeMapper {

static const int NONE_HASH = HashingUtils::HashString("NONE");
static const int M2M_HASH = HashingUtils::HashString("M2M");
static const int AWS_IAM_ID_TOKEN_JWT_HASH = HashingUtils::HashString("AWS_IAM_ID_TOKEN_JWT");

ActorTokenContentType GetActorTokenContentTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == NONE_HASH) {
    return ActorTokenContentType::NONE;
  } else if (hashCode == M2M_HASH) {
    return ActorTokenContentType::M2M;
  } else if (hashCode == AWS_IAM_ID_TOKEN_JWT_HASH) {
    return ActorTokenContentType::AWS_IAM_ID_TOKEN_JWT;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ActorTokenContentType>(hashCode);
  }

  return ActorTokenContentType::NOT_SET;
}

Aws::String GetNameForActorTokenContentType(ActorTokenContentType enumValue) {
  switch (enumValue) {
    case ActorTokenContentType::NOT_SET:
      return {};
    case ActorTokenContentType::NONE:
      return "NONE";
    case ActorTokenContentType::M2M:
      return "M2M";
    case ActorTokenContentType::AWS_IAM_ID_TOKEN_JWT:
      return "AWS_IAM_ID_TOKEN_JWT";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ActorTokenContentTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
