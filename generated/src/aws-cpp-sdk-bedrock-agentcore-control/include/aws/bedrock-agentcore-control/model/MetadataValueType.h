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
enum class MetadataValueType { NOT_SET, STRING, STRINGLIST, NUMBER };

namespace MetadataValueTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API MetadataValueType GetMetadataValueTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForMetadataValueType(MetadataValueType value);
}  // namespace MetadataValueTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
