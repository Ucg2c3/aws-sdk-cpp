﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Details about incompatible data types in a connection between
   * nodes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/IncompatibleConnectionDataTypeFlowValidationDetails">AWS
   * API Reference</a></p>
   */
  class IncompatibleConnectionDataTypeFlowValidationDetails
  {
  public:
    AWS_BEDROCKAGENT_API IncompatibleConnectionDataTypeFlowValidationDetails();
    AWS_BEDROCKAGENT_API IncompatibleConnectionDataTypeFlowValidationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API IncompatibleConnectionDataTypeFlowValidationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the connection with incompatible data types.</p>
     */
    inline const Aws::String& GetConnection() const{ return m_connection; }
    inline bool ConnectionHasBeenSet() const { return m_connectionHasBeenSet; }
    inline void SetConnection(const Aws::String& value) { m_connectionHasBeenSet = true; m_connection = value; }
    inline void SetConnection(Aws::String&& value) { m_connectionHasBeenSet = true; m_connection = std::move(value); }
    inline void SetConnection(const char* value) { m_connectionHasBeenSet = true; m_connection.assign(value); }
    inline IncompatibleConnectionDataTypeFlowValidationDetails& WithConnection(const Aws::String& value) { SetConnection(value); return *this;}
    inline IncompatibleConnectionDataTypeFlowValidationDetails& WithConnection(Aws::String&& value) { SetConnection(std::move(value)); return *this;}
    inline IncompatibleConnectionDataTypeFlowValidationDetails& WithConnection(const char* value) { SetConnection(value); return *this;}
    ///@}
  private:

    Aws::String m_connection;
    bool m_connectionHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
