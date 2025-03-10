﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ModifyVerifiedAccessTrustProviderOidcOptions.h>
#include <aws/ec2/model/ModifyVerifiedAccessTrustProviderDeviceOptions.h>
#include <aws/ec2/model/VerifiedAccessSseSpecificationRequest.h>
#include <aws/ec2/model/ModifyVerifiedAccessNativeApplicationOidcOptions.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVerifiedAccessTrustProviderRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVerifiedAccessTrustProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVerifiedAccessTrustProvider"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Verified Access trust provider.</p>
     */
    inline const Aws::String& GetVerifiedAccessTrustProviderId() const{ return m_verifiedAccessTrustProviderId; }
    inline bool VerifiedAccessTrustProviderIdHasBeenSet() const { return m_verifiedAccessTrustProviderIdHasBeenSet; }
    inline void SetVerifiedAccessTrustProviderId(const Aws::String& value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId = value; }
    inline void SetVerifiedAccessTrustProviderId(Aws::String&& value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId = std::move(value); }
    inline void SetVerifiedAccessTrustProviderId(const char* value) { m_verifiedAccessTrustProviderIdHasBeenSet = true; m_verifiedAccessTrustProviderId.assign(value); }
    inline ModifyVerifiedAccessTrustProviderRequest& WithVerifiedAccessTrustProviderId(const Aws::String& value) { SetVerifiedAccessTrustProviderId(value); return *this;}
    inline ModifyVerifiedAccessTrustProviderRequest& WithVerifiedAccessTrustProviderId(Aws::String&& value) { SetVerifiedAccessTrustProviderId(std::move(value)); return *this;}
    inline ModifyVerifiedAccessTrustProviderRequest& WithVerifiedAccessTrustProviderId(const char* value) { SetVerifiedAccessTrustProviderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for an OpenID Connect-compatible user-identity trust
     * provider.</p>
     */
    inline const ModifyVerifiedAccessTrustProviderOidcOptions& GetOidcOptions() const{ return m_oidcOptions; }
    inline bool OidcOptionsHasBeenSet() const { return m_oidcOptionsHasBeenSet; }
    inline void SetOidcOptions(const ModifyVerifiedAccessTrustProviderOidcOptions& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = value; }
    inline void SetOidcOptions(ModifyVerifiedAccessTrustProviderOidcOptions&& value) { m_oidcOptionsHasBeenSet = true; m_oidcOptions = std::move(value); }
    inline ModifyVerifiedAccessTrustProviderRequest& WithOidcOptions(const ModifyVerifiedAccessTrustProviderOidcOptions& value) { SetOidcOptions(value); return *this;}
    inline ModifyVerifiedAccessTrustProviderRequest& WithOidcOptions(ModifyVerifiedAccessTrustProviderOidcOptions&& value) { SetOidcOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for a device-based trust provider. This parameter is required
     * when the provider type is <code>device</code>.</p>
     */
    inline const ModifyVerifiedAccessTrustProviderDeviceOptions& GetDeviceOptions() const{ return m_deviceOptions; }
    inline bool DeviceOptionsHasBeenSet() const { return m_deviceOptionsHasBeenSet; }
    inline void SetDeviceOptions(const ModifyVerifiedAccessTrustProviderDeviceOptions& value) { m_deviceOptionsHasBeenSet = true; m_deviceOptions = value; }
    inline void SetDeviceOptions(ModifyVerifiedAccessTrustProviderDeviceOptions&& value) { m_deviceOptionsHasBeenSet = true; m_deviceOptions = std::move(value); }
    inline ModifyVerifiedAccessTrustProviderRequest& WithDeviceOptions(const ModifyVerifiedAccessTrustProviderDeviceOptions& value) { SetDeviceOptions(value); return *this;}
    inline ModifyVerifiedAccessTrustProviderRequest& WithDeviceOptions(ModifyVerifiedAccessTrustProviderDeviceOptions&& value) { SetDeviceOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the Verified Access trust provider.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ModifyVerifiedAccessTrustProviderRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ModifyVerifiedAccessTrustProviderRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ModifyVerifiedAccessTrustProviderRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyVerifiedAccessTrustProviderRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure idempotency of your
     * modification request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ModifyVerifiedAccessTrustProviderRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ModifyVerifiedAccessTrustProviderRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ModifyVerifiedAccessTrustProviderRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options for server side encryption.</p>
     */
    inline const VerifiedAccessSseSpecificationRequest& GetSseSpecification() const{ return m_sseSpecification; }
    inline bool SseSpecificationHasBeenSet() const { return m_sseSpecificationHasBeenSet; }
    inline void SetSseSpecification(const VerifiedAccessSseSpecificationRequest& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = value; }
    inline void SetSseSpecification(VerifiedAccessSseSpecificationRequest&& value) { m_sseSpecificationHasBeenSet = true; m_sseSpecification = std::move(value); }
    inline ModifyVerifiedAccessTrustProviderRequest& WithSseSpecification(const VerifiedAccessSseSpecificationRequest& value) { SetSseSpecification(value); return *this;}
    inline ModifyVerifiedAccessTrustProviderRequest& WithSseSpecification(VerifiedAccessSseSpecificationRequest&& value) { SetSseSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenID Connect (OIDC) options.</p>
     */
    inline const ModifyVerifiedAccessNativeApplicationOidcOptions& GetNativeApplicationOidcOptions() const{ return m_nativeApplicationOidcOptions; }
    inline bool NativeApplicationOidcOptionsHasBeenSet() const { return m_nativeApplicationOidcOptionsHasBeenSet; }
    inline void SetNativeApplicationOidcOptions(const ModifyVerifiedAccessNativeApplicationOidcOptions& value) { m_nativeApplicationOidcOptionsHasBeenSet = true; m_nativeApplicationOidcOptions = value; }
    inline void SetNativeApplicationOidcOptions(ModifyVerifiedAccessNativeApplicationOidcOptions&& value) { m_nativeApplicationOidcOptionsHasBeenSet = true; m_nativeApplicationOidcOptions = std::move(value); }
    inline ModifyVerifiedAccessTrustProviderRequest& WithNativeApplicationOidcOptions(const ModifyVerifiedAccessNativeApplicationOidcOptions& value) { SetNativeApplicationOidcOptions(value); return *this;}
    inline ModifyVerifiedAccessTrustProviderRequest& WithNativeApplicationOidcOptions(ModifyVerifiedAccessNativeApplicationOidcOptions&& value) { SetNativeApplicationOidcOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_verifiedAccessTrustProviderId;
    bool m_verifiedAccessTrustProviderIdHasBeenSet = false;

    ModifyVerifiedAccessTrustProviderOidcOptions m_oidcOptions;
    bool m_oidcOptionsHasBeenSet = false;

    ModifyVerifiedAccessTrustProviderDeviceOptions m_deviceOptions;
    bool m_deviceOptionsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    VerifiedAccessSseSpecificationRequest m_sseSpecification;
    bool m_sseSpecificationHasBeenSet = false;

    ModifyVerifiedAccessNativeApplicationOidcOptions m_nativeApplicationOidcOptions;
    bool m_nativeApplicationOidcOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
