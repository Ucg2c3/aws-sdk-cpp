﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/rest-xml-protocol-namespace/RestXmlProtocolNamespace_EXPORTS.h>

namespace Aws
{
namespace RestXmlProtocolNamespace
{
enum class RestXmlProtocolNamespaceErrors
{
  //From Core//
  //////////////////////////////////////////////////////////////////////////////////////////
  INCOMPLETE_SIGNATURE = 0,
  INTERNAL_FAILURE = 1,
  INVALID_ACTION = 2,
  INVALID_CLIENT_TOKEN_ID = 3,
  INVALID_PARAMETER_COMBINATION = 4,
  INVALID_QUERY_PARAMETER = 5,
  INVALID_PARAMETER_VALUE = 6,
  MISSING_ACTION = 7, // SDK should never allow
  MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
  MISSING_PARAMETER = 9, // SDK should never allow
  OPT_IN_REQUIRED = 10,
  REQUEST_EXPIRED = 11,
  SERVICE_UNAVAILABLE = 12,
  THROTTLING = 13,
  VALIDATION = 14,
  ACCESS_DENIED = 15,
  RESOURCE_NOT_FOUND = 16,
  UNRECOGNIZED_CLIENT = 17,
  MALFORMED_QUERY_STRING = 18,
  SLOW_DOWN = 19,
  REQUEST_TIME_TOO_SKEWED = 20,
  INVALID_SIGNATURE = 21,
  SIGNATURE_DOES_NOT_MATCH = 22,
  INVALID_ACCESS_KEY_ID = 23,
  REQUEST_TIMEOUT = 24,
  NETWORK_CONNECTION = 99,

  UNKNOWN = 100,
  ///////////////////////////////////////////////////////////////////////////////////////////


};

class AWS_RESTXMLPROTOCOLNAMESPACE_API RestXmlProtocolNamespaceError : public Aws::Client::AWSError<RestXmlProtocolNamespaceErrors>
{
public:
  RestXmlProtocolNamespaceError() {}
  RestXmlProtocolNamespaceError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<RestXmlProtocolNamespaceErrors>(rhs) {}
  RestXmlProtocolNamespaceError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<RestXmlProtocolNamespaceErrors>(rhs) {}
  RestXmlProtocolNamespaceError(const Aws::Client::AWSError<RestXmlProtocolNamespaceErrors>& rhs) : Aws::Client::AWSError<RestXmlProtocolNamespaceErrors>(rhs) {}
  RestXmlProtocolNamespaceError(Aws::Client::AWSError<RestXmlProtocolNamespaceErrors>&& rhs) : Aws::Client::AWSError<RestXmlProtocolNamespaceErrors>(rhs) {}

  template <typename T>
  T GetModeledError();
};

namespace RestXmlProtocolNamespaceErrorMapper
{
  AWS_RESTXMLPROTOCOLNAMESPACE_API Aws::Client::AWSError<Aws::Client::CoreErrors> GetErrorForName(const char* errorName);
}

} // namespace RestXmlProtocolNamespace
} // namespace Aws
