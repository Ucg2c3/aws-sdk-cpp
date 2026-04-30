/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ActorTokenContentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Configuration for RFC 8693 Token Exchange</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/TokenExchangeGrantTypeConfigType">AWS
 * API Reference</a></p>
 */
class TokenExchangeGrantTypeConfigType {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API TokenExchangeGrantTypeConfigType() = default;
  AWS_BEDROCKAGENTCORECONTROL_API TokenExchangeGrantTypeConfigType(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API TokenExchangeGrantTypeConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content type for the actor token in the token exchange.</p>
   */
  inline ActorTokenContentType GetActorTokenContent() const { return m_actorTokenContent; }
  inline bool ActorTokenContentHasBeenSet() const { return m_actorTokenContentHasBeenSet; }
  inline void SetActorTokenContent(ActorTokenContentType value) {
    m_actorTokenContentHasBeenSet = true;
    m_actorTokenContent = value;
  }
  inline TokenExchangeGrantTypeConfigType& WithActorTokenContent(ActorTokenContentType value) {
    SetActorTokenContent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Only valid when actorTokenContent is M2M</p>
   */
  inline const Aws::Vector<Aws::String>& GetActorTokenScopes() const { return m_actorTokenScopes; }
  inline bool ActorTokenScopesHasBeenSet() const { return m_actorTokenScopesHasBeenSet; }
  template <typename ActorTokenScopesT = Aws::Vector<Aws::String>>
  void SetActorTokenScopes(ActorTokenScopesT&& value) {
    m_actorTokenScopesHasBeenSet = true;
    m_actorTokenScopes = std::forward<ActorTokenScopesT>(value);
  }
  template <typename ActorTokenScopesT = Aws::Vector<Aws::String>>
  TokenExchangeGrantTypeConfigType& WithActorTokenScopes(ActorTokenScopesT&& value) {
    SetActorTokenScopes(std::forward<ActorTokenScopesT>(value));
    return *this;
  }
  template <typename ActorTokenScopesT = Aws::String>
  TokenExchangeGrantTypeConfigType& AddActorTokenScopes(ActorTokenScopesT&& value) {
    m_actorTokenScopesHasBeenSet = true;
    m_actorTokenScopes.emplace_back(std::forward<ActorTokenScopesT>(value));
    return *this;
  }
  ///@}
 private:
  ActorTokenContentType m_actorTokenContent{ActorTokenContentType::NOT_SET};

  Aws::Vector<Aws::String> m_actorTokenScopes;
  bool m_actorTokenContentHasBeenSet = false;
  bool m_actorTokenScopesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
