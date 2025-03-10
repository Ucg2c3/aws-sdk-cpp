﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent-runtime/model/InvocationStepPayload.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{

  /**
   * <p>Stores fine-grained state checkpoints, including text and images, for each
   * interaction in an invocation in a session. For more information about sessions,
   * see <a
   * href="https://docs.aws.amazon.com/bedrock/latest/userguide/sessions.html">Store
   * and retrieve conversation history and context with Amazon Bedrock sessions</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/InvocationStep">AWS
   * API Reference</a></p>
   */
  class InvocationStep
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API InvocationStep();
    AWS_BEDROCKAGENTRUNTIME_API InvocationStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API InvocationStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (in UUID format) for the invocation that includes the
     * invocation step.</p>
     */
    inline const Aws::String& GetInvocationId() const{ return m_invocationId; }
    inline bool InvocationIdHasBeenSet() const { return m_invocationIdHasBeenSet; }
    inline void SetInvocationId(const Aws::String& value) { m_invocationIdHasBeenSet = true; m_invocationId = value; }
    inline void SetInvocationId(Aws::String&& value) { m_invocationIdHasBeenSet = true; m_invocationId = std::move(value); }
    inline void SetInvocationId(const char* value) { m_invocationIdHasBeenSet = true; m_invocationId.assign(value); }
    inline InvocationStep& WithInvocationId(const Aws::String& value) { SetInvocationId(value); return *this;}
    inline InvocationStep& WithInvocationId(Aws::String&& value) { SetInvocationId(std::move(value)); return *this;}
    inline InvocationStep& WithInvocationId(const char* value) { SetInvocationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier (in UUID format) for the invocation step.</p>
     */
    inline const Aws::String& GetInvocationStepId() const{ return m_invocationStepId; }
    inline bool InvocationStepIdHasBeenSet() const { return m_invocationStepIdHasBeenSet; }
    inline void SetInvocationStepId(const Aws::String& value) { m_invocationStepIdHasBeenSet = true; m_invocationStepId = value; }
    inline void SetInvocationStepId(Aws::String&& value) { m_invocationStepIdHasBeenSet = true; m_invocationStepId = std::move(value); }
    inline void SetInvocationStepId(const char* value) { m_invocationStepIdHasBeenSet = true; m_invocationStepId.assign(value); }
    inline InvocationStep& WithInvocationStepId(const Aws::String& value) { SetInvocationStepId(value); return *this;}
    inline InvocationStep& WithInvocationStepId(Aws::String&& value) { SetInvocationStepId(std::move(value)); return *this;}
    inline InvocationStep& WithInvocationStepId(const char* value) { SetInvocationStepId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the invocation step was created.</p>
     */
    inline const Aws::Utils::DateTime& GetInvocationStepTime() const{ return m_invocationStepTime; }
    inline bool InvocationStepTimeHasBeenSet() const { return m_invocationStepTimeHasBeenSet; }
    inline void SetInvocationStepTime(const Aws::Utils::DateTime& value) { m_invocationStepTimeHasBeenSet = true; m_invocationStepTime = value; }
    inline void SetInvocationStepTime(Aws::Utils::DateTime&& value) { m_invocationStepTimeHasBeenSet = true; m_invocationStepTime = std::move(value); }
    inline InvocationStep& WithInvocationStepTime(const Aws::Utils::DateTime& value) { SetInvocationStepTime(value); return *this;}
    inline InvocationStep& WithInvocationStepTime(Aws::Utils::DateTime&& value) { SetInvocationStepTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Payload content, such as text and images, for the invocation step.</p>
     */
    inline const InvocationStepPayload& GetPayload() const{ return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    inline void SetPayload(const InvocationStepPayload& value) { m_payloadHasBeenSet = true; m_payload = value; }
    inline void SetPayload(InvocationStepPayload&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }
    inline InvocationStep& WithPayload(const InvocationStepPayload& value) { SetPayload(value); return *this;}
    inline InvocationStep& WithPayload(InvocationStepPayload&& value) { SetPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the session containing the invocation step.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline InvocationStep& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline InvocationStep& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline InvocationStep& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}
  private:

    Aws::String m_invocationId;
    bool m_invocationIdHasBeenSet = false;

    Aws::String m_invocationStepId;
    bool m_invocationStepIdHasBeenSet = false;

    Aws::Utils::DateTime m_invocationStepTime;
    bool m_invocationStepTimeHasBeenSet = false;

    InvocationStepPayload m_payload;
    bool m_payloadHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
