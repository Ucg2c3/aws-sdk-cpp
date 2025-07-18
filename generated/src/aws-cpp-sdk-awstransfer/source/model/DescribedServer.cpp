﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/DescribedServer.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

DescribedServer::DescribedServer(JsonView jsonValue)
{
  *this = jsonValue;
}

DescribedServer& DescribedServer::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Certificate"))
  {
    m_certificate = jsonValue.GetString("Certificate");
    m_certificateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ProtocolDetails"))
  {
    m_protocolDetails = jsonValue.GetObject("ProtocolDetails");
    m_protocolDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = DomainMapper::GetDomainForName(jsonValue.GetString("Domain"));
    m_domainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointDetails"))
  {
    m_endpointDetails = jsonValue.GetObject("EndpointDetails");
    m_endpointDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointType"))
  {
    m_endpointType = EndpointTypeMapper::GetEndpointTypeForName(jsonValue.GetString("EndpointType"));
    m_endpointTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HostKeyFingerprint"))
  {
    m_hostKeyFingerprint = jsonValue.GetString("HostKeyFingerprint");
    m_hostKeyFingerprintHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityProviderDetails"))
  {
    m_identityProviderDetails = jsonValue.GetObject("IdentityProviderDetails");
    m_identityProviderDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IdentityProviderType"))
  {
    m_identityProviderType = IdentityProviderTypeMapper::GetIdentityProviderTypeForName(jsonValue.GetString("IdentityProviderType"));
    m_identityProviderTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LoggingRole"))
  {
    m_loggingRole = jsonValue.GetString("LoggingRole");
    m_loggingRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PostAuthenticationLoginBanner"))
  {
    m_postAuthenticationLoginBanner = jsonValue.GetString("PostAuthenticationLoginBanner");
    m_postAuthenticationLoginBannerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PreAuthenticationLoginBanner"))
  {
    m_preAuthenticationLoginBanner = jsonValue.GetString("PreAuthenticationLoginBanner");
    m_preAuthenticationLoginBannerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Protocols"))
  {
    Aws::Utils::Array<JsonView> protocolsJsonList = jsonValue.GetArray("Protocols");
    for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
    {
      m_protocols.push_back(ProtocolMapper::GetProtocolForName(protocolsJsonList[protocolsIndex].AsString()));
    }
    m_protocolsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecurityPolicyName"))
  {
    m_securityPolicyName = jsonValue.GetString("SecurityPolicyName");
    m_securityPolicyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerId"))
  {
    m_serverId = jsonValue.GetString("ServerId");
    m_serverIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UserCount"))
  {
    m_userCount = jsonValue.GetInteger("UserCount");
    m_userCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WorkflowDetails"))
  {
    m_workflowDetails = jsonValue.GetObject("WorkflowDetails");
    m_workflowDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StructuredLogDestinations"))
  {
    Aws::Utils::Array<JsonView> structuredLogDestinationsJsonList = jsonValue.GetArray("StructuredLogDestinations");
    for(unsigned structuredLogDestinationsIndex = 0; structuredLogDestinationsIndex < structuredLogDestinationsJsonList.GetLength(); ++structuredLogDestinationsIndex)
    {
      m_structuredLogDestinations.push_back(structuredLogDestinationsJsonList[structuredLogDestinationsIndex].AsString());
    }
    m_structuredLogDestinationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("S3StorageOptions"))
  {
    m_s3StorageOptions = jsonValue.GetObject("S3StorageOptions");
    m_s3StorageOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("As2ServiceManagedEgressIpAddresses"))
  {
    Aws::Utils::Array<JsonView> as2ServiceManagedEgressIpAddressesJsonList = jsonValue.GetArray("As2ServiceManagedEgressIpAddresses");
    for(unsigned as2ServiceManagedEgressIpAddressesIndex = 0; as2ServiceManagedEgressIpAddressesIndex < as2ServiceManagedEgressIpAddressesJsonList.GetLength(); ++as2ServiceManagedEgressIpAddressesIndex)
    {
      m_as2ServiceManagedEgressIpAddresses.push_back(as2ServiceManagedEgressIpAddressesJsonList[as2ServiceManagedEgressIpAddressesIndex].AsString());
    }
    m_as2ServiceManagedEgressIpAddressesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IpAddressType"))
  {
    m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(jsonValue.GetString("IpAddressType"));
    m_ipAddressTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue DescribedServer::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_certificateHasBeenSet)
  {
   payload.WithString("Certificate", m_certificate);

  }

  if(m_protocolDetailsHasBeenSet)
  {
   payload.WithObject("ProtocolDetails", m_protocolDetails.Jsonize());

  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("Domain", DomainMapper::GetNameForDomain(m_domain));
  }

  if(m_endpointDetailsHasBeenSet)
  {
   payload.WithObject("EndpointDetails", m_endpointDetails.Jsonize());

  }

  if(m_endpointTypeHasBeenSet)
  {
   payload.WithString("EndpointType", EndpointTypeMapper::GetNameForEndpointType(m_endpointType));
  }

  if(m_hostKeyFingerprintHasBeenSet)
  {
   payload.WithString("HostKeyFingerprint", m_hostKeyFingerprint);

  }

  if(m_identityProviderDetailsHasBeenSet)
  {
   payload.WithObject("IdentityProviderDetails", m_identityProviderDetails.Jsonize());

  }

  if(m_identityProviderTypeHasBeenSet)
  {
   payload.WithString("IdentityProviderType", IdentityProviderTypeMapper::GetNameForIdentityProviderType(m_identityProviderType));
  }

  if(m_loggingRoleHasBeenSet)
  {
   payload.WithString("LoggingRole", m_loggingRole);

  }

  if(m_postAuthenticationLoginBannerHasBeenSet)
  {
   payload.WithString("PostAuthenticationLoginBanner", m_postAuthenticationLoginBanner);

  }

  if(m_preAuthenticationLoginBannerHasBeenSet)
  {
   payload.WithString("PreAuthenticationLoginBanner", m_preAuthenticationLoginBanner);

  }

  if(m_protocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> protocolsJsonList(m_protocols.size());
   for(unsigned protocolsIndex = 0; protocolsIndex < protocolsJsonList.GetLength(); ++protocolsIndex)
   {
     protocolsJsonList[protocolsIndex].AsString(ProtocolMapper::GetNameForProtocol(m_protocols[protocolsIndex]));
   }
   payload.WithArray("Protocols", std::move(protocolsJsonList));

  }

  if(m_securityPolicyNameHasBeenSet)
  {
   payload.WithString("SecurityPolicyName", m_securityPolicyName);

  }

  if(m_serverIdHasBeenSet)
  {
   payload.WithString("ServerId", m_serverId);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", StateMapper::GetNameForState(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  if(m_userCountHasBeenSet)
  {
   payload.WithInteger("UserCount", m_userCount);

  }

  if(m_workflowDetailsHasBeenSet)
  {
   payload.WithObject("WorkflowDetails", m_workflowDetails.Jsonize());

  }

  if(m_structuredLogDestinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> structuredLogDestinationsJsonList(m_structuredLogDestinations.size());
   for(unsigned structuredLogDestinationsIndex = 0; structuredLogDestinationsIndex < structuredLogDestinationsJsonList.GetLength(); ++structuredLogDestinationsIndex)
   {
     structuredLogDestinationsJsonList[structuredLogDestinationsIndex].AsString(m_structuredLogDestinations[structuredLogDestinationsIndex]);
   }
   payload.WithArray("StructuredLogDestinations", std::move(structuredLogDestinationsJsonList));

  }

  if(m_s3StorageOptionsHasBeenSet)
  {
   payload.WithObject("S3StorageOptions", m_s3StorageOptions.Jsonize());

  }

  if(m_as2ServiceManagedEgressIpAddressesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> as2ServiceManagedEgressIpAddressesJsonList(m_as2ServiceManagedEgressIpAddresses.size());
   for(unsigned as2ServiceManagedEgressIpAddressesIndex = 0; as2ServiceManagedEgressIpAddressesIndex < as2ServiceManagedEgressIpAddressesJsonList.GetLength(); ++as2ServiceManagedEgressIpAddressesIndex)
   {
     as2ServiceManagedEgressIpAddressesJsonList[as2ServiceManagedEgressIpAddressesIndex].AsString(m_as2ServiceManagedEgressIpAddresses[as2ServiceManagedEgressIpAddressesIndex]);
   }
   payload.WithArray("As2ServiceManagedEgressIpAddresses", std::move(as2ServiceManagedEgressIpAddressesJsonList));

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("IpAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
