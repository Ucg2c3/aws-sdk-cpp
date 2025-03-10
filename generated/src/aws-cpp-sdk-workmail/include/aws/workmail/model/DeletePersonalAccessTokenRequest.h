﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class DeletePersonalAccessTokenRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API DeletePersonalAccessTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeletePersonalAccessToken"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The Organization ID. </p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline DeletePersonalAccessTokenRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline DeletePersonalAccessTokenRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline DeletePersonalAccessTokenRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Personal Access Token ID.</p>
     */
    inline const Aws::String& GetPersonalAccessTokenId() const{ return m_personalAccessTokenId; }
    inline bool PersonalAccessTokenIdHasBeenSet() const { return m_personalAccessTokenIdHasBeenSet; }
    inline void SetPersonalAccessTokenId(const Aws::String& value) { m_personalAccessTokenIdHasBeenSet = true; m_personalAccessTokenId = value; }
    inline void SetPersonalAccessTokenId(Aws::String&& value) { m_personalAccessTokenIdHasBeenSet = true; m_personalAccessTokenId = std::move(value); }
    inline void SetPersonalAccessTokenId(const char* value) { m_personalAccessTokenIdHasBeenSet = true; m_personalAccessTokenId.assign(value); }
    inline DeletePersonalAccessTokenRequest& WithPersonalAccessTokenId(const Aws::String& value) { SetPersonalAccessTokenId(value); return *this;}
    inline DeletePersonalAccessTokenRequest& WithPersonalAccessTokenId(Aws::String&& value) { SetPersonalAccessTokenId(std::move(value)); return *this;}
    inline DeletePersonalAccessTokenRequest& WithPersonalAccessTokenId(const char* value) { SetPersonalAccessTokenId(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_personalAccessTokenId;
    bool m_personalAccessTokenIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
