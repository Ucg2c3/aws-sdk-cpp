﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ListCalculatedAttributeDefinitionItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ListCalculatedAttributeDefinitionItem::ListCalculatedAttributeDefinitionItem(JsonView jsonValue)
{
  *this = jsonValue;
}

ListCalculatedAttributeDefinitionItem& ListCalculatedAttributeDefinitionItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CalculatedAttributeName"))
  {
    m_calculatedAttributeName = jsonValue.GetString("CalculatedAttributeName");
    m_calculatedAttributeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UseHistoricalData"))
  {
    m_useHistoricalData = jsonValue.GetBool("UseHistoricalData");
    m_useHistoricalDataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ReadinessStatusMapper::GetReadinessStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue ListCalculatedAttributeDefinitionItem::Jsonize() const
{
  JsonValue payload;

  if(m_calculatedAttributeNameHasBeenSet)
  {
   payload.WithString("CalculatedAttributeName", m_calculatedAttributeName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_useHistoricalDataHasBeenSet)
  {
   payload.WithBool("UseHistoricalData", m_useHistoricalData);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ReadinessStatusMapper::GetNameForReadinessStatus(m_status));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
