﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/BillEstimateStatus.h>
#include <aws/bcm-pricing-calculator/model/BillInterval.h>
#include <aws/bcm-pricing-calculator/model/BillEstimateCostSummary.h>
#include <aws/core/utils/DateTime.h>
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
namespace BCMPricingCalculator
{
namespace Model
{
  class UpdateBillEstimateResult
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API UpdateBillEstimateResult();
    AWS_BCMPRICINGCALCULATOR_API UpdateBillEstimateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BCMPRICINGCALCULATOR_API UpdateBillEstimateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The unique identifier of the updated bill estimate. </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline UpdateBillEstimateResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateBillEstimateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateBillEstimateResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The updated name of the bill estimate. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateBillEstimateResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateBillEstimateResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateBillEstimateResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the updated bill estimate. </p>
     */
    inline const BillEstimateStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const BillEstimateStatus& value) { m_status = value; }
    inline void SetStatus(BillEstimateStatus&& value) { m_status = std::move(value); }
    inline UpdateBillEstimateResult& WithStatus(const BillEstimateStatus& value) { SetStatus(value); return *this;}
    inline UpdateBillEstimateResult& WithStatus(BillEstimateStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An error message if the bill estimate update failed. </p>
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }
    inline UpdateBillEstimateResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline UpdateBillEstimateResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline UpdateBillEstimateResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time period covered by the updated bill estimate. </p>
     */
    inline const BillInterval& GetBillInterval() const{ return m_billInterval; }
    inline void SetBillInterval(const BillInterval& value) { m_billInterval = value; }
    inline void SetBillInterval(BillInterval&& value) { m_billInterval = std::move(value); }
    inline UpdateBillEstimateResult& WithBillInterval(const BillInterval& value) { SetBillInterval(value); return *this;}
    inline UpdateBillEstimateResult& WithBillInterval(BillInterval&& value) { SetBillInterval(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A summary of the updated estimated costs. </p>
     */
    inline const BillEstimateCostSummary& GetCostSummary() const{ return m_costSummary; }
    inline void SetCostSummary(const BillEstimateCostSummary& value) { m_costSummary = value; }
    inline void SetCostSummary(BillEstimateCostSummary&& value) { m_costSummary = std::move(value); }
    inline UpdateBillEstimateResult& WithCostSummary(const BillEstimateCostSummary& value) { SetCostSummary(value); return *this;}
    inline UpdateBillEstimateResult& WithCostSummary(BillEstimateCostSummary&& value) { SetCostSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp when the bill estimate was originally created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline UpdateBillEstimateResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline UpdateBillEstimateResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The updated expiration timestamp for the bill estimate. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAt = value; }
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAt = std::move(value); }
    inline UpdateBillEstimateResult& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}
    inline UpdateBillEstimateResult& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateBillEstimateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateBillEstimateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateBillEstimateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    BillEstimateStatus m_status;

    Aws::String m_failureMessage;

    BillInterval m_billInterval;

    BillEstimateCostSummary m_costSummary;

    Aws::Utils::DateTime m_createdAt;

    Aws::Utils::DateTime m_expiresAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
