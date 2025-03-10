﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class TimestampFormatHeadersRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API TimestampFormatHeadersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TimestampFormatHeaders"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTXMLPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::Utils::DateTime& GetMemberEpochSeconds() const{ return m_memberEpochSeconds; }
    inline bool MemberEpochSecondsHasBeenSet() const { return m_memberEpochSecondsHasBeenSet; }
    inline void SetMemberEpochSeconds(const Aws::Utils::DateTime& value) { m_memberEpochSecondsHasBeenSet = true; m_memberEpochSeconds = value; }
    inline void SetMemberEpochSeconds(Aws::Utils::DateTime&& value) { m_memberEpochSecondsHasBeenSet = true; m_memberEpochSeconds = std::move(value); }
    inline TimestampFormatHeadersRequest& WithMemberEpochSeconds(const Aws::Utils::DateTime& value) { SetMemberEpochSeconds(value); return *this;}
    inline TimestampFormatHeadersRequest& WithMemberEpochSeconds(Aws::Utils::DateTime&& value) { SetMemberEpochSeconds(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetMemberHttpDate() const{ return m_memberHttpDate; }
    inline bool MemberHttpDateHasBeenSet() const { return m_memberHttpDateHasBeenSet; }
    inline void SetMemberHttpDate(const Aws::Utils::DateTime& value) { m_memberHttpDateHasBeenSet = true; m_memberHttpDate = value; }
    inline void SetMemberHttpDate(Aws::Utils::DateTime&& value) { m_memberHttpDateHasBeenSet = true; m_memberHttpDate = std::move(value); }
    inline TimestampFormatHeadersRequest& WithMemberHttpDate(const Aws::Utils::DateTime& value) { SetMemberHttpDate(value); return *this;}
    inline TimestampFormatHeadersRequest& WithMemberHttpDate(Aws::Utils::DateTime&& value) { SetMemberHttpDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetMemberDateTime() const{ return m_memberDateTime; }
    inline bool MemberDateTimeHasBeenSet() const { return m_memberDateTimeHasBeenSet; }
    inline void SetMemberDateTime(const Aws::Utils::DateTime& value) { m_memberDateTimeHasBeenSet = true; m_memberDateTime = value; }
    inline void SetMemberDateTime(Aws::Utils::DateTime&& value) { m_memberDateTimeHasBeenSet = true; m_memberDateTime = std::move(value); }
    inline TimestampFormatHeadersRequest& WithMemberDateTime(const Aws::Utils::DateTime& value) { SetMemberDateTime(value); return *this;}
    inline TimestampFormatHeadersRequest& WithMemberDateTime(Aws::Utils::DateTime&& value) { SetMemberDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetDefaultFormat() const{ return m_defaultFormat; }
    inline bool DefaultFormatHasBeenSet() const { return m_defaultFormatHasBeenSet; }
    inline void SetDefaultFormat(const Aws::Utils::DateTime& value) { m_defaultFormatHasBeenSet = true; m_defaultFormat = value; }
    inline void SetDefaultFormat(Aws::Utils::DateTime&& value) { m_defaultFormatHasBeenSet = true; m_defaultFormat = std::move(value); }
    inline TimestampFormatHeadersRequest& WithDefaultFormat(const Aws::Utils::DateTime& value) { SetDefaultFormat(value); return *this;}
    inline TimestampFormatHeadersRequest& WithDefaultFormat(Aws::Utils::DateTime&& value) { SetDefaultFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetTargetEpochSeconds() const{ return m_targetEpochSeconds; }
    inline bool TargetEpochSecondsHasBeenSet() const { return m_targetEpochSecondsHasBeenSet; }
    inline void SetTargetEpochSeconds(const Aws::Utils::DateTime& value) { m_targetEpochSecondsHasBeenSet = true; m_targetEpochSeconds = value; }
    inline void SetTargetEpochSeconds(Aws::Utils::DateTime&& value) { m_targetEpochSecondsHasBeenSet = true; m_targetEpochSeconds = std::move(value); }
    inline TimestampFormatHeadersRequest& WithTargetEpochSeconds(const Aws::Utils::DateTime& value) { SetTargetEpochSeconds(value); return *this;}
    inline TimestampFormatHeadersRequest& WithTargetEpochSeconds(Aws::Utils::DateTime&& value) { SetTargetEpochSeconds(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetTargetHttpDate() const{ return m_targetHttpDate; }
    inline bool TargetHttpDateHasBeenSet() const { return m_targetHttpDateHasBeenSet; }
    inline void SetTargetHttpDate(const Aws::Utils::DateTime& value) { m_targetHttpDateHasBeenSet = true; m_targetHttpDate = value; }
    inline void SetTargetHttpDate(Aws::Utils::DateTime&& value) { m_targetHttpDateHasBeenSet = true; m_targetHttpDate = std::move(value); }
    inline TimestampFormatHeadersRequest& WithTargetHttpDate(const Aws::Utils::DateTime& value) { SetTargetHttpDate(value); return *this;}
    inline TimestampFormatHeadersRequest& WithTargetHttpDate(Aws::Utils::DateTime&& value) { SetTargetHttpDate(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetTargetDateTime() const{ return m_targetDateTime; }
    inline bool TargetDateTimeHasBeenSet() const { return m_targetDateTimeHasBeenSet; }
    inline void SetTargetDateTime(const Aws::Utils::DateTime& value) { m_targetDateTimeHasBeenSet = true; m_targetDateTime = value; }
    inline void SetTargetDateTime(Aws::Utils::DateTime&& value) { m_targetDateTimeHasBeenSet = true; m_targetDateTime = std::move(value); }
    inline TimestampFormatHeadersRequest& WithTargetDateTime(const Aws::Utils::DateTime& value) { SetTargetDateTime(value); return *this;}
    inline TimestampFormatHeadersRequest& WithTargetDateTime(Aws::Utils::DateTime&& value) { SetTargetDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline TimestampFormatHeadersRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline TimestampFormatHeadersRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline TimestampFormatHeadersRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_memberEpochSeconds;
    bool m_memberEpochSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_memberHttpDate;
    bool m_memberHttpDateHasBeenSet = false;

    Aws::Utils::DateTime m_memberDateTime;
    bool m_memberDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_defaultFormat;
    bool m_defaultFormatHasBeenSet = false;

    Aws::Utils::DateTime m_targetEpochSeconds;
    bool m_targetEpochSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_targetHttpDate;
    bool m_targetHttpDateHasBeenSet = false;

    Aws::Utils::DateTime m_targetDateTime;
    bool m_targetDateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
