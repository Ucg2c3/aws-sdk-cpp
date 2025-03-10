﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/CredentialLockerSummary.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class ListCredentialLockersResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListCredentialLockersResult();
    AWS_IOTMANAGEDINTEGRATIONS_API ListCredentialLockersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API ListCredentialLockersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of credential lockers.</p>
     */
    inline const Aws::Vector<CredentialLockerSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<CredentialLockerSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<CredentialLockerSummary>&& value) { m_items = std::move(value); }
    inline ListCredentialLockersResult& WithItems(const Aws::Vector<CredentialLockerSummary>& value) { SetItems(value); return *this;}
    inline ListCredentialLockersResult& WithItems(Aws::Vector<CredentialLockerSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListCredentialLockersResult& AddItems(const CredentialLockerSummary& value) { m_items.push_back(value); return *this; }
    inline ListCredentialLockersResult& AddItems(CredentialLockerSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCredentialLockersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCredentialLockersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCredentialLockersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCredentialLockersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCredentialLockersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCredentialLockersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CredentialLockerSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
