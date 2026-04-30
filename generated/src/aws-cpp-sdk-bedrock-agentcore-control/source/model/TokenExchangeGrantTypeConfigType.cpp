/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/TokenExchangeGrantTypeConfigType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

TokenExchangeGrantTypeConfigType::TokenExchangeGrantTypeConfigType(JsonView jsonValue) { *this = jsonValue; }

TokenExchangeGrantTypeConfigType& TokenExchangeGrantTypeConfigType::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("actorTokenContent")) {
    m_actorTokenContent = ActorTokenContentTypeMapper::GetActorTokenContentTypeForName(jsonValue.GetString("actorTokenContent"));
    m_actorTokenContentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("actorTokenScopes")) {
    Aws::Utils::Array<JsonView> actorTokenScopesJsonList = jsonValue.GetArray("actorTokenScopes");
    for (unsigned actorTokenScopesIndex = 0; actorTokenScopesIndex < actorTokenScopesJsonList.GetLength(); ++actorTokenScopesIndex) {
      m_actorTokenScopes.push_back(actorTokenScopesJsonList[actorTokenScopesIndex].AsString());
    }
    m_actorTokenScopesHasBeenSet = true;
  }
  return *this;
}

JsonValue TokenExchangeGrantTypeConfigType::Jsonize() const {
  JsonValue payload;

  if (m_actorTokenContentHasBeenSet) {
    payload.WithString("actorTokenContent", ActorTokenContentTypeMapper::GetNameForActorTokenContentType(m_actorTokenContent));
  }

  if (m_actorTokenScopesHasBeenSet) {
    Aws::Utils::Array<JsonValue> actorTokenScopesJsonList(m_actorTokenScopes.size());
    for (unsigned actorTokenScopesIndex = 0; actorTokenScopesIndex < actorTokenScopesJsonList.GetLength(); ++actorTokenScopesIndex) {
      actorTokenScopesJsonList[actorTokenScopesIndex].AsString(m_actorTokenScopes[actorTokenScopesIndex]);
    }
    payload.WithArray("actorTokenScopes", std::move(actorTokenScopesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
