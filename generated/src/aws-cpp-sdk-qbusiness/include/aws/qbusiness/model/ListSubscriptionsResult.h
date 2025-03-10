﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/Subscription.h>
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
namespace QBusiness
{
namespace Model
{
  class ListSubscriptionsResult
  {
  public:
    AWS_QBUSINESS_API ListSubscriptionsResult();
    AWS_QBUSINESS_API ListSubscriptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ListSubscriptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the response is truncated, Amazon Q Business returns this token. You can
     * use this token in a subsequent request to retrieve the next set of
     * subscriptions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSubscriptionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSubscriptionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSubscriptionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of summary information on the subscriptions configured for an Amazon
     * Q Business application.</p>
     */
    inline const Aws::Vector<Subscription>& GetSubscriptions() const{ return m_subscriptions; }
    inline void SetSubscriptions(const Aws::Vector<Subscription>& value) { m_subscriptions = value; }
    inline void SetSubscriptions(Aws::Vector<Subscription>&& value) { m_subscriptions = std::move(value); }
    inline ListSubscriptionsResult& WithSubscriptions(const Aws::Vector<Subscription>& value) { SetSubscriptions(value); return *this;}
    inline ListSubscriptionsResult& WithSubscriptions(Aws::Vector<Subscription>&& value) { SetSubscriptions(std::move(value)); return *this;}
    inline ListSubscriptionsResult& AddSubscriptions(const Subscription& value) { m_subscriptions.push_back(value); return *this; }
    inline ListSubscriptionsResult& AddSubscriptions(Subscription&& value) { m_subscriptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSubscriptionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSubscriptionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSubscriptionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Subscription> m_subscriptions;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
