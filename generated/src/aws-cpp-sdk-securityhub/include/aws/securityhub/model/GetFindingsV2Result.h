﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
namespace SecurityHub
{
namespace Model
{
  class GetFindingsV2Result
  {
  public:
    AWS_SECURITYHUB_API GetFindingsV2Result() = default;
    AWS_SECURITYHUB_API GetFindingsV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API GetFindingsV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of security findings returned by the operation.</p>
     */
    inline const Aws::Vector<Aws::Utils::Document>& GetFindings() const { return m_findings; }
    template<typename FindingsT = Aws::Vector<Aws::Utils::Document>>
    void SetFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings = std::forward<FindingsT>(value); }
    template<typename FindingsT = Aws::Vector<Aws::Utils::Document>>
    GetFindingsV2Result& WithFindings(FindingsT&& value) { SetFindings(std::forward<FindingsT>(value)); return *this;}
    template<typename FindingsT = Aws::Utils::Document>
    GetFindingsV2Result& AddFindings(FindingsT&& value) { m_findingsHasBeenSet = true; m_findings.emplace_back(std::forward<FindingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to request the next page of results. Otherwise,
     * this parameter is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetFindingsV2Result& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFindingsV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Utils::Document> m_findings;
    bool m_findingsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
