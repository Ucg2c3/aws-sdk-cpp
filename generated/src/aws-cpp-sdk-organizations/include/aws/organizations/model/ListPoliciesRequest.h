﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/organizations/model/PolicyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class ListPoliciesRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API ListPoliciesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPolicies"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the type of policy that you want to include in the response. You
     * must specify one of the following values:</p> <ul> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_scp.html">SERVICE_CONTROL_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_rcps.html">RESOURCE_CONTROL_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_declarative.html">DECLARATIVE_POLICY_EC2</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_backup.html">BACKUP_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_tag-policies.html">TAG_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_chatbot.html">CHATBOT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_ai-opt-out.html">AISERVICES_OPT_OUT_POLICY</a>
     * </p> </li> <li> <p> <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_policies_security_hub.html">SECURITYHUB_POLICY</a>
     * </p> </li> </ul>
     */
    inline PolicyType GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(PolicyType value) { m_filterHasBeenSet = true; m_filter = value; }
    inline ListPoliciesRequest& WithFilter(PolicyType value) { SetFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter for receiving additional results if you receive a
     * <code>NextToken</code> response in a previous request. A <code>NextToken</code>
     * response indicates that more output is available. Set this parameter to the
     * value of the previous call's <code>NextToken</code> response to indicate where
     * the output should continue from.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPoliciesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of results that you want included on each page of the
     * response. If you do not include this parameter, it defaults to a value that is
     * specific to the operation. If additional items exist beyond the maximum you
     * specify, the <code>NextToken</code> response element is present and has a value
     * (is not null). Include that value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that Organizations might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPoliciesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    PolicyType m_filter{PolicyType::NOT_SET};
    bool m_filterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
