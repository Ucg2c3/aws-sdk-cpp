﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/CloudFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/StackResourceDriftStatus.h>
#include <utility>

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

  /**
   */
  class DescribeStackResourceDriftsRequest : public CloudFormationRequest
  {
  public:
    AWS_CLOUDFORMATION_API DescribeStackResourceDriftsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStackResourceDrifts"; }

    AWS_CLOUDFORMATION_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDFORMATION_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the stack for which you want drift information.</p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    DescribeStackResourceDriftsRequest& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource drift status values to use as filters for the resource drift
     * results returned.</p> <ul> <li> <p> <code>DELETED</code>: The resource differs
     * from its expected template configuration in that the resource has been
     * deleted.</p> </li> <li> <p> <code>MODIFIED</code>: One or more resource
     * properties differ from their expected template values.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The resource's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>NOT_CHECKED</code>:
     * CloudFormation doesn't currently return this value.</p> </li> <li> <p>
     * <code>UNKNOWN</code>: CloudFormation could not run drift detection for the
     * resource.</p> </li> </ul>
     */
    inline const Aws::Vector<StackResourceDriftStatus>& GetStackResourceDriftStatusFilters() const { return m_stackResourceDriftStatusFilters; }
    inline bool StackResourceDriftStatusFiltersHasBeenSet() const { return m_stackResourceDriftStatusFiltersHasBeenSet; }
    template<typename StackResourceDriftStatusFiltersT = Aws::Vector<StackResourceDriftStatus>>
    void SetStackResourceDriftStatusFilters(StackResourceDriftStatusFiltersT&& value) { m_stackResourceDriftStatusFiltersHasBeenSet = true; m_stackResourceDriftStatusFilters = std::forward<StackResourceDriftStatusFiltersT>(value); }
    template<typename StackResourceDriftStatusFiltersT = Aws::Vector<StackResourceDriftStatus>>
    DescribeStackResourceDriftsRequest& WithStackResourceDriftStatusFilters(StackResourceDriftStatusFiltersT&& value) { SetStackResourceDriftStatusFilters(std::forward<StackResourceDriftStatusFiltersT>(value)); return *this;}
    inline DescribeStackResourceDriftsRequest& AddStackResourceDriftStatusFilters(StackResourceDriftStatus value) { m_stackResourceDriftStatusFiltersHasBeenSet = true; m_stackResourceDriftStatusFilters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A string that identifies the next page of stack resource drift results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeStackResourceDriftsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned with a single call. If the
     * number of available results exceeds this maximum, the response includes a
     * <code>NextToken</code> value that you can assign to the <code>NextToken</code>
     * request parameter to get the next set of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeStackResourceDriftsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::Vector<StackResourceDriftStatus> m_stackResourceDriftStatusFilters;
    bool m_stackResourceDriftStatusFiltersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
