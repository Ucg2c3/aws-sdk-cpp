﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/Status.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SESV2
{
namespace Model
{
  /**
   * <p>An HTTP 200 response if the request succeeds, or an error message if the
   * request fails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/CreateMultiRegionEndpointResponse">AWS
   * API Reference</a></p>
   */
  class CreateMultiRegionEndpointResult
  {
  public:
    AWS_SESV2_API CreateMultiRegionEndpointResult();
    AWS_SESV2_API CreateMultiRegionEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API CreateMultiRegionEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A status of the multi-region endpoint (global-endpoint) right after the
     * create request.</p> <ul> <li> <p> <code>CREATING</code> – The resource is being
     * provisioned.</p> </li> <li> <p> <code>READY</code> – The resource is ready to
     * use.</p> </li> <li> <p> <code>FAILED</code> – The resource failed to be
     * provisioned.</p> </li> <li> <p> <code>DELETING</code> – The resource is being
     * deleted as requested.</p> </li> </ul>
     */
    inline const Status& GetStatus() const{ return m_status; }
    inline void SetStatus(const Status& value) { m_status = value; }
    inline void SetStatus(Status&& value) { m_status = std::move(value); }
    inline CreateMultiRegionEndpointResult& WithStatus(const Status& value) { SetStatus(value); return *this;}
    inline CreateMultiRegionEndpointResult& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the multi-region endpoint (global-endpoint).</p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }
    inline void SetEndpointId(const Aws::String& value) { m_endpointId = value; }
    inline void SetEndpointId(Aws::String&& value) { m_endpointId = std::move(value); }
    inline void SetEndpointId(const char* value) { m_endpointId.assign(value); }
    inline CreateMultiRegionEndpointResult& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}
    inline CreateMultiRegionEndpointResult& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}
    inline CreateMultiRegionEndpointResult& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMultiRegionEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMultiRegionEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMultiRegionEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Status m_status;

    Aws::String m_endpointId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
