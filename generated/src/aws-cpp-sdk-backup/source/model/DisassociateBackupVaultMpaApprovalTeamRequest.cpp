﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DisassociateBackupVaultMpaApprovalTeamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateBackupVaultMpaApprovalTeamRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_requesterCommentHasBeenSet)
  {
   payload.WithString("RequesterComment", m_requesterComment);

  }

  return payload.View().WriteReadable();
}




