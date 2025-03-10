﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent-runtime/model/SessionSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BedrockAgentRuntime
{
namespace Model
{
  class ListSessionsResult
  {
  public:
    AWS_BEDROCKAGENTRUNTIME_API ListSessionsResult();
    AWS_BEDROCKAGENTRUNTIME_API ListSessionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTRUNTIME_API ListSessionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, use this token when making another request in the
     * <code>nextToken</code> field to return the next batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSessionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSessionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSessionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of summaries for each session in your Amazon Web Services account.</p>
     */
    inline const Aws::Vector<SessionSummary>& GetSessionSummaries() const{ return m_sessionSummaries; }
    inline void SetSessionSummaries(const Aws::Vector<SessionSummary>& value) { m_sessionSummaries = value; }
    inline void SetSessionSummaries(Aws::Vector<SessionSummary>&& value) { m_sessionSummaries = std::move(value); }
    inline ListSessionsResult& WithSessionSummaries(const Aws::Vector<SessionSummary>& value) { SetSessionSummaries(value); return *this;}
    inline ListSessionsResult& WithSessionSummaries(Aws::Vector<SessionSummary>&& value) { SetSessionSummaries(std::move(value)); return *this;}
    inline ListSessionsResult& AddSessionSummaries(const SessionSummary& value) { m_sessionSummaries.push_back(value); return *this; }
    inline ListSessionsResult& AddSessionSummaries(SessionSummary&& value) { m_sessionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSessionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSessionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSessionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<SessionSummary> m_sessionSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
