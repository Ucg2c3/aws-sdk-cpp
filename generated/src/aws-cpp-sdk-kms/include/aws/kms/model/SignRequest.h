﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/kms/model/MessageType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kms/model/SigningAlgorithmSpec.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class SignRequest : public KMSRequest
  {
  public:
    AWS_KMS_API SignRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Sign"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Identifies an asymmetric KMS key. KMS uses the private key in the asymmetric
     * KMS key to sign the message. The <code>KeyUsage</code> type of the KMS key must
     * be <code>SIGN_VERIFY</code>. To find the <code>KeyUsage</code> of a KMS key, use
     * the <a>DescribeKey</a> operation.</p> <p>To specify a KMS key, use its key ID,
     * key ARN, alias name, or alias ARN. When using an alias name, prefix it with
     * <code>"alias/"</code>. To specify a KMS key in a different Amazon Web Services
     * account, you must use the key ARN or alias ARN.</p> <p>For example:</p> <ul>
     * <li> <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li>
     * <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> <li> <p>Alias name: <code>alias/ExampleAlias</code> </p> </li> <li>
     * <p>Alias ARN: <code>arn:aws:kms:us-east-2:111122223333:alias/ExampleAlias</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>. To get the alias name and alias ARN, use
     * <a>ListAliases</a>.</p>
     */
    inline const Aws::String& GetKeyId() const { return m_keyId; }
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }
    template<typename KeyIdT = Aws::String>
    void SetKeyId(KeyIdT&& value) { m_keyIdHasBeenSet = true; m_keyId = std::forward<KeyIdT>(value); }
    template<typename KeyIdT = Aws::String>
    SignRequest& WithKeyId(KeyIdT&& value) { SetKeyId(std::forward<KeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the message or message digest to sign. Messages can be 0-4096
     * bytes. To sign a larger message, provide a message digest.</p> <p>If you provide
     * a message digest, use the <code>DIGEST</code> value of <code>MessageType</code>
     * to prevent the digest from being hashed again while signing.</p>
     */
    inline const Aws::Utils::CryptoBuffer& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::Utils::CryptoBuffer>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::Utils::CryptoBuffer>
    SignRequest& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tells KMS whether the value of the <code>Message</code> parameter should be
     * hashed as part of the signing algorithm. Use <code>RAW</code> for unhashed
     * messages; use <code>DIGEST</code> for message digests, which are already hashed;
     * use <code>EXTERNAL_MU</code> for 64-byte representative μ used in ML-DSA signing
     * as defined in NIST FIPS 204 Section 6.2.</p> <p>When the value of
     * <code>MessageType</code> is <code>RAW</code>, KMS uses the standard signing
     * algorithm, which begins with a hash function. When the value is
     * <code>DIGEST</code>, KMS skips the hashing step in the signing algorithm. When
     * the value is <code>EXTERNAL_MU</code> KMS skips the concatenated hashing of the
     * public key hash and the message done in the ML-DSA signing algorithm.</p>
     *  <p>Use the <code>DIGEST</code> or <code>EXTERNAL_MU</code> value
     * only when the value of the <code>Message</code> parameter is a message digest.
     * If you use the <code>DIGEST</code> value with an unhashed message, the security
     * of the signing operation can be compromised.</p>  <p>When the value
     * of <code>MessageType</code> is <code>DIGEST</code>, the length of the
     * <code>Message</code> value must match the length of hashed messages for the
     * specified signing algorithm.</p> <p>When the value of <code>MessageType</code>
     * is <code>EXTERNAL_MU</code> the length of the <code>Message</code> value must be
     * 64 bytes.</p> <p>You can submit a message digest and omit the
     * <code>MessageType</code> or specify <code>RAW</code> so the digest is hashed
     * again while signing. However, this can cause verification failures when
     * verifying with a system that assumes a single hash.</p> <p>The hashing algorithm
     * that <code>Sign</code> uses is based on the <code>SigningAlgorithm</code>
     * value.</p> <ul> <li> <p>Signing algorithms that end in SHA_256 use the SHA_256
     * hashing algorithm.</p> </li> <li> <p>Signing algorithms that end in SHA_384 use
     * the SHA_384 hashing algorithm.</p> </li> <li> <p>Signing algorithms that end in
     * SHA_512 use the SHA_512 hashing algorithm.</p> </li> <li> <p>Signing algorithms
     * that end in SHAKE_256 use the SHAKE_256 hashing algorithm.</p> </li> <li>
     * <p>SM2DSA uses the SM3 hashing algorithm. For details, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/offline-operations.html#key-spec-sm-offline-verification">Offline
     * verification with SM2 key pairs</a>.</p> </li> </ul>
     */
    inline MessageType GetMessageType() const { return m_messageType; }
    inline bool MessageTypeHasBeenSet() const { return m_messageTypeHasBeenSet; }
    inline void SetMessageType(MessageType value) { m_messageTypeHasBeenSet = true; m_messageType = value; }
    inline SignRequest& WithMessageType(MessageType value) { SetMessageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of grant tokens.</p> <p>Use a grant token when your permission to call
     * this operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/using-grant-token.html">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGrantTokens() const { return m_grantTokens; }
    inline bool GrantTokensHasBeenSet() const { return m_grantTokensHasBeenSet; }
    template<typename GrantTokensT = Aws::Vector<Aws::String>>
    void SetGrantTokens(GrantTokensT&& value) { m_grantTokensHasBeenSet = true; m_grantTokens = std::forward<GrantTokensT>(value); }
    template<typename GrantTokensT = Aws::Vector<Aws::String>>
    SignRequest& WithGrantTokens(GrantTokensT&& value) { SetGrantTokens(std::forward<GrantTokensT>(value)); return *this;}
    template<typename GrantTokensT = Aws::String>
    SignRequest& AddGrantTokens(GrantTokensT&& value) { m_grantTokensHasBeenSet = true; m_grantTokens.emplace_back(std::forward<GrantTokensT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the signing algorithm to use when signing the message. </p>
     * <p>Choose an algorithm that is compatible with the type and size of the
     * specified asymmetric KMS key. When signing with RSA key pairs, RSASSA-PSS
     * algorithms are preferred. We include RSASSA-PKCS1-v1_5 algorithms for
     * compatibility with existing applications.</p>
     */
    inline SigningAlgorithmSpec GetSigningAlgorithm() const { return m_signingAlgorithm; }
    inline bool SigningAlgorithmHasBeenSet() const { return m_signingAlgorithmHasBeenSet; }
    inline void SetSigningAlgorithm(SigningAlgorithmSpec value) { m_signingAlgorithmHasBeenSet = true; m_signingAlgorithm = value; }
    inline SignRequest& WithSigningAlgorithm(SigningAlgorithmSpec value) { SetSigningAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks if your request will succeed. <code>DryRun</code> is an optional
     * parameter. </p> <p>To learn more about how to use this parameter, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/testing-permissions.html">Testing
     * your permissions</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline SignRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    Aws::Utils::CryptoBuffer m_message{};
    bool m_messageHasBeenSet = false;

    MessageType m_messageType{MessageType::NOT_SET};
    bool m_messageTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_grantTokens;
    bool m_grantTokensHasBeenSet = false;

    SigningAlgorithmSpec m_signingAlgorithm{SigningAlgorithmSpec::NOT_SET};
    bool m_signingAlgorithmHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
