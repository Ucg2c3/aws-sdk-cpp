﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackagev2/model/PutOriginEndpointPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::mediapackagev2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutOriginEndpointPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  if(m_cdnAuthConfigurationHasBeenSet)
  {
   payload.WithObject("CdnAuthConfiguration", m_cdnAuthConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




