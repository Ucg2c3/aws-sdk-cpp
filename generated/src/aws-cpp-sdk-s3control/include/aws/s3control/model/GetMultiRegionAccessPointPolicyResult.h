﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/MultiRegionAccessPointPolicyDocument.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class GetMultiRegionAccessPointPolicyResult
  {
  public:
    AWS_S3CONTROL_API GetMultiRegionAccessPointPolicyResult();
    AWS_S3CONTROL_API GetMultiRegionAccessPointPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetMultiRegionAccessPointPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The policy associated with the specified Multi-Region Access Point.</p>
     */
    inline const MultiRegionAccessPointPolicyDocument& GetPolicy() const{ return m_policy; }
    inline void SetPolicy(const MultiRegionAccessPointPolicyDocument& value) { m_policy = value; }
    inline void SetPolicy(MultiRegionAccessPointPolicyDocument&& value) { m_policy = std::move(value); }
    inline GetMultiRegionAccessPointPolicyResult& WithPolicy(const MultiRegionAccessPointPolicyDocument& value) { SetPolicy(value); return *this;}
    inline GetMultiRegionAccessPointPolicyResult& WithPolicy(MultiRegionAccessPointPolicyDocument&& value) { SetPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMultiRegionAccessPointPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMultiRegionAccessPointPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMultiRegionAccessPointPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline GetMultiRegionAccessPointPolicyResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline GetMultiRegionAccessPointPolicyResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline GetMultiRegionAccessPointPolicyResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    MultiRegionAccessPointPolicyDocument m_policy;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
