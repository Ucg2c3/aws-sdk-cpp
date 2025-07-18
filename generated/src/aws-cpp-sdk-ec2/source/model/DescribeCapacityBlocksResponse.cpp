﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DescribeCapacityBlocksResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::EC2::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

DescribeCapacityBlocksResponse::DescribeCapacityBlocksResponse(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

DescribeCapacityBlocksResponse& DescribeCapacityBlocksResponse::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "DescribeCapacityBlocksResponse"))
  {
    resultNode = rootNode.FirstChild("DescribeCapacityBlocksResponse");
  }

  if(!resultNode.IsNull())
  {
    XmlNode capacityBlocksNode = resultNode.FirstChild("capacityBlockSet");
    if(!capacityBlocksNode.IsNull())
    {
      XmlNode capacityBlocksMember = capacityBlocksNode.FirstChild("item");
      m_capacityBlocksHasBeenSet = !capacityBlocksMember.IsNull();
      while(!capacityBlocksMember.IsNull())
      {
        m_capacityBlocks.push_back(capacityBlocksMember);
        capacityBlocksMember = capacityBlocksMember.NextNode("item");
      }

      m_capacityBlocksHasBeenSet = true;
    }
    XmlNode nextTokenNode = resultNode.FirstChild("nextToken");
    if(!nextTokenNode.IsNull())
    {
      m_nextToken = Aws::Utils::Xml::DecodeEscapedXmlText(nextTokenNode.GetText());
      m_nextTokenHasBeenSet = true;
    }
  }

  if (!rootNode.IsNull()) {
    XmlNode requestIdNode = rootNode.FirstChild("requestId");
    if (!requestIdNode.IsNull())
    {
      m_responseMetadata.SetRequestId(StringUtils::Trim(requestIdNode.GetText().c_str()));
      m_responseMetadataHasBeenSet = true;
    }
    AWS_LOGSTREAM_DEBUG("Aws::EC2::Model::DescribeCapacityBlocksResponse", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
