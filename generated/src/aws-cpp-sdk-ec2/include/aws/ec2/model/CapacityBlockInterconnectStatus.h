﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{
  enum class CapacityBlockInterconnectStatus
  {
    NOT_SET,
    ok,
    impaired,
    insufficient_data
  };

namespace CapacityBlockInterconnectStatusMapper
{
AWS_EC2_API CapacityBlockInterconnectStatus GetCapacityBlockInterconnectStatusForName(const Aws::String& name);

AWS_EC2_API Aws::String GetNameForCapacityBlockInterconnectStatus(CapacityBlockInterconnectStatus value);
} // namespace CapacityBlockInterconnectStatusMapper
} // namespace Model
} // namespace EC2
} // namespace Aws
