﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/sso-oidc/SSOOIDCRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SSOOIDC
{
namespace Model
{

  /**
   */
  class CreateTokenWithIAMRequest : public SSOOIDCRequest
  {
  public:
    AWS_SSOOIDC_API CreateTokenWithIAMRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTokenWithIAM"; }

    AWS_SSOOIDC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier string for the client or application. This value is an
     * application ARN that has OAuth grants configured.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline CreateTokenWithIAMRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline CreateTokenWithIAMRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline CreateTokenWithIAMRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supports the following OAuth grant types: Authorization Code, Refresh Token,
     * JWT Bearer, and Token Exchange. Specify one of the following values, depending
     * on the grant type that you want:</p> <p>* Authorization Code -
     * <code>authorization_code</code> </p> <p>* Refresh Token -
     * <code>refresh_token</code> </p> <p>* JWT Bearer -
     * <code>urn:ietf:params:oauth:grant-type:jwt-bearer</code> </p> <p>* Token
     * Exchange - <code>urn:ietf:params:oauth:grant-type:token-exchange</code> </p>
     */
    inline const Aws::String& GetGrantType() const{ return m_grantType; }
    inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
    inline void SetGrantType(const Aws::String& value) { m_grantTypeHasBeenSet = true; m_grantType = value; }
    inline void SetGrantType(Aws::String&& value) { m_grantTypeHasBeenSet = true; m_grantType = std::move(value); }
    inline void SetGrantType(const char* value) { m_grantTypeHasBeenSet = true; m_grantType.assign(value); }
    inline CreateTokenWithIAMRequest& WithGrantType(const Aws::String& value) { SetGrantType(value); return *this;}
    inline CreateTokenWithIAMRequest& WithGrantType(Aws::String&& value) { SetGrantType(std::move(value)); return *this;}
    inline CreateTokenWithIAMRequest& WithGrantType(const char* value) { SetGrantType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * short-lived code is used to identify this authorization request. The code is
     * obtained through a redirect from IAM Identity Center to a redirect URI persisted
     * in the Authorization Code GrantOptions for the application.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline CreateTokenWithIAMRequest& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline CreateTokenWithIAMRequest& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline CreateTokenWithIAMRequest& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Refresh Token grant type. This token
     * is used to refresh short-lived tokens, such as the access token, that might
     * expire.</p> <p>For more information about the features and limitations of the
     * current IAM Identity Center OIDC implementation, see <i>Considerations for Using
     * this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }
    inline bool RefreshTokenHasBeenSet() const { return m_refreshTokenHasBeenSet; }
    inline void SetRefreshToken(const Aws::String& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = value; }
    inline void SetRefreshToken(Aws::String&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::move(value); }
    inline void SetRefreshToken(const char* value) { m_refreshTokenHasBeenSet = true; m_refreshToken.assign(value); }
    inline CreateTokenWithIAMRequest& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}
    inline CreateTokenWithIAMRequest& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}
    inline CreateTokenWithIAMRequest& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the JWT Bearer grant type. This value
     * specifies the JSON Web Token (JWT) issued by a trusted token issuer. To
     * authorize a trusted token issuer, configure the JWT Bearer GrantOptions for the
     * application.</p>
     */
    inline const Aws::String& GetAssertion() const{ return m_assertion; }
    inline bool AssertionHasBeenSet() const { return m_assertionHasBeenSet; }
    inline void SetAssertion(const Aws::String& value) { m_assertionHasBeenSet = true; m_assertion = value; }
    inline void SetAssertion(Aws::String&& value) { m_assertionHasBeenSet = true; m_assertion = std::move(value); }
    inline void SetAssertion(const char* value) { m_assertionHasBeenSet = true; m_assertion.assign(value); }
    inline CreateTokenWithIAMRequest& WithAssertion(const Aws::String& value) { SetAssertion(value); return *this;}
    inline CreateTokenWithIAMRequest& WithAssertion(Aws::String&& value) { SetAssertion(std::move(value)); return *this;}
    inline CreateTokenWithIAMRequest& WithAssertion(const char* value) { SetAssertion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of scopes for which authorization is requested. The access token
     * that is issued is limited to the scopes that are granted. If the value is not
     * specified, IAM Identity Center authorizes all scopes configured for the
     * application, including the following default scopes: <code>openid</code>,
     * <code>aws</code>, <code>sts:identity_context</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Aws::Vector<Aws::String>& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Aws::Vector<Aws::String>&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline CreateTokenWithIAMRequest& WithScope(const Aws::Vector<Aws::String>& value) { SetScope(value); return *this;}
    inline CreateTokenWithIAMRequest& WithScope(Aws::Vector<Aws::String>&& value) { SetScope(std::move(value)); return *this;}
    inline CreateTokenWithIAMRequest& AddScope(const Aws::String& value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }
    inline CreateTokenWithIAMRequest& AddScope(Aws::String&& value) { m_scopeHasBeenSet = true; m_scope.push_back(std::move(value)); return *this; }
    inline CreateTokenWithIAMRequest& AddScope(const char* value) { m_scopeHasBeenSet = true; m_scope.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value specifies the location of the client or application that has registered to
     * receive the authorization code. </p>
     */
    inline const Aws::String& GetRedirectUri() const{ return m_redirectUri; }
    inline bool RedirectUriHasBeenSet() const { return m_redirectUriHasBeenSet; }
    inline void SetRedirectUri(const Aws::String& value) { m_redirectUriHasBeenSet = true; m_redirectUri = value; }
    inline void SetRedirectUri(Aws::String&& value) { m_redirectUriHasBeenSet = true; m_redirectUri = std::move(value); }
    inline void SetRedirectUri(const char* value) { m_redirectUriHasBeenSet = true; m_redirectUri.assign(value); }
    inline CreateTokenWithIAMRequest& WithRedirectUri(const Aws::String& value) { SetRedirectUri(value); return *this;}
    inline CreateTokenWithIAMRequest& WithRedirectUri(Aws::String&& value) { SetRedirectUri(std::move(value)); return *this;}
    inline CreateTokenWithIAMRequest& WithRedirectUri(const char* value) { SetRedirectUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the subject of the exchange. The value of the subject token must be an
     * access token issued by IAM Identity Center to a different client or application.
     * The access token must have authorized scopes that indicate the requested
     * application as a target audience.</p>
     */
    inline const Aws::String& GetSubjectToken() const{ return m_subjectToken; }
    inline bool SubjectTokenHasBeenSet() const { return m_subjectTokenHasBeenSet; }
    inline void SetSubjectToken(const Aws::String& value) { m_subjectTokenHasBeenSet = true; m_subjectToken = value; }
    inline void SetSubjectToken(Aws::String&& value) { m_subjectTokenHasBeenSet = true; m_subjectToken = std::move(value); }
    inline void SetSubjectToken(const char* value) { m_subjectTokenHasBeenSet = true; m_subjectToken.assign(value); }
    inline CreateTokenWithIAMRequest& WithSubjectToken(const Aws::String& value) { SetSubjectToken(value); return *this;}
    inline CreateTokenWithIAMRequest& WithSubjectToken(Aws::String&& value) { SetSubjectToken(std::move(value)); return *this;}
    inline CreateTokenWithIAMRequest& WithSubjectToken(const char* value) { SetSubjectToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that is passed as the subject of the exchange. The
     * following value is supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p>
     */
    inline const Aws::String& GetSubjectTokenType() const{ return m_subjectTokenType; }
    inline bool SubjectTokenTypeHasBeenSet() const { return m_subjectTokenTypeHasBeenSet; }
    inline void SetSubjectTokenType(const Aws::String& value) { m_subjectTokenTypeHasBeenSet = true; m_subjectTokenType = value; }
    inline void SetSubjectTokenType(Aws::String&& value) { m_subjectTokenTypeHasBeenSet = true; m_subjectTokenType = std::move(value); }
    inline void SetSubjectTokenType(const char* value) { m_subjectTokenTypeHasBeenSet = true; m_subjectTokenType.assign(value); }
    inline CreateTokenWithIAMRequest& WithSubjectTokenType(const Aws::String& value) { SetSubjectTokenType(value); return *this;}
    inline CreateTokenWithIAMRequest& WithSubjectTokenType(Aws::String&& value) { SetSubjectTokenType(std::move(value)); return *this;}
    inline CreateTokenWithIAMRequest& WithSubjectTokenType(const char* value) { SetSubjectTokenType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Token Exchange grant type. This value
     * specifies the type of token that the requester can receive. The following values
     * are supported:</p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline const Aws::String& GetRequestedTokenType() const{ return m_requestedTokenType; }
    inline bool RequestedTokenTypeHasBeenSet() const { return m_requestedTokenTypeHasBeenSet; }
    inline void SetRequestedTokenType(const Aws::String& value) { m_requestedTokenTypeHasBeenSet = true; m_requestedTokenType = value; }
    inline void SetRequestedTokenType(Aws::String&& value) { m_requestedTokenTypeHasBeenSet = true; m_requestedTokenType = std::move(value); }
    inline void SetRequestedTokenType(const char* value) { m_requestedTokenTypeHasBeenSet = true; m_requestedTokenType.assign(value); }
    inline CreateTokenWithIAMRequest& WithRequestedTokenType(const Aws::String& value) { SetRequestedTokenType(value); return *this;}
    inline CreateTokenWithIAMRequest& WithRequestedTokenType(Aws::String&& value) { SetRequestedTokenType(std::move(value)); return *this;}
    inline CreateTokenWithIAMRequest& WithRequestedTokenType(const char* value) { SetRequestedTokenType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only when calling this API for the Authorization Code grant type. This
     * value is generated by the client and presented to validate the original code
     * challenge value the client passed at authorization time.</p>
     */
    inline const Aws::String& GetCodeVerifier() const{ return m_codeVerifier; }
    inline bool CodeVerifierHasBeenSet() const { return m_codeVerifierHasBeenSet; }
    inline void SetCodeVerifier(const Aws::String& value) { m_codeVerifierHasBeenSet = true; m_codeVerifier = value; }
    inline void SetCodeVerifier(Aws::String&& value) { m_codeVerifierHasBeenSet = true; m_codeVerifier = std::move(value); }
    inline void SetCodeVerifier(const char* value) { m_codeVerifierHasBeenSet = true; m_codeVerifier.assign(value); }
    inline CreateTokenWithIAMRequest& WithCodeVerifier(const Aws::String& value) { SetCodeVerifier(value); return *this;}
    inline CreateTokenWithIAMRequest& WithCodeVerifier(Aws::String&& value) { SetCodeVerifier(std::move(value)); return *this;}
    inline CreateTokenWithIAMRequest& WithCodeVerifier(const char* value) { SetCodeVerifier(value); return *this;}
    ///@}
  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_grantType;
    bool m_grantTypeHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    Aws::String m_assertion;
    bool m_assertionHasBeenSet = false;

    Aws::Vector<Aws::String> m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_redirectUri;
    bool m_redirectUriHasBeenSet = false;

    Aws::String m_subjectToken;
    bool m_subjectTokenHasBeenSet = false;

    Aws::String m_subjectTokenType;
    bool m_subjectTokenTypeHasBeenSet = false;

    Aws::String m_requestedTokenType;
    bool m_requestedTokenTypeHasBeenSet = false;

    Aws::String m_codeVerifier;
    bool m_codeVerifierHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
