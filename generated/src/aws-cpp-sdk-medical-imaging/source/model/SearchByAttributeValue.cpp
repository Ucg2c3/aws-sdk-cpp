﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/SearchByAttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MedicalImaging
{
namespace Model
{

SearchByAttributeValue::SearchByAttributeValue(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchByAttributeValue& SearchByAttributeValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DICOMPatientId"))
  {
    m_dICOMPatientId = jsonValue.GetString("DICOMPatientId");
    m_dICOMPatientIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DICOMAccessionNumber"))
  {
    m_dICOMAccessionNumber = jsonValue.GetString("DICOMAccessionNumber");
    m_dICOMAccessionNumberHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DICOMStudyId"))
  {
    m_dICOMStudyId = jsonValue.GetString("DICOMStudyId");
    m_dICOMStudyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DICOMStudyInstanceUID"))
  {
    m_dICOMStudyInstanceUID = jsonValue.GetString("DICOMStudyInstanceUID");
    m_dICOMStudyInstanceUIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DICOMSeriesInstanceUID"))
  {
    m_dICOMSeriesInstanceUID = jsonValue.GetString("DICOMSeriesInstanceUID");
    m_dICOMSeriesInstanceUIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DICOMStudyDateAndTime"))
  {
    m_dICOMStudyDateAndTime = jsonValue.GetObject("DICOMStudyDateAndTime");
    m_dICOMStudyDateAndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isPrimary"))
  {
    m_isPrimary = jsonValue.GetBool("isPrimary");
    m_isPrimaryHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchByAttributeValue::Jsonize() const
{
  JsonValue payload;

  if(m_dICOMPatientIdHasBeenSet)
  {
   payload.WithString("DICOMPatientId", m_dICOMPatientId);

  }

  if(m_dICOMAccessionNumberHasBeenSet)
  {
   payload.WithString("DICOMAccessionNumber", m_dICOMAccessionNumber);

  }

  if(m_dICOMStudyIdHasBeenSet)
  {
   payload.WithString("DICOMStudyId", m_dICOMStudyId);

  }

  if(m_dICOMStudyInstanceUIDHasBeenSet)
  {
   payload.WithString("DICOMStudyInstanceUID", m_dICOMStudyInstanceUID);

  }

  if(m_dICOMSeriesInstanceUIDHasBeenSet)
  {
   payload.WithString("DICOMSeriesInstanceUID", m_dICOMSeriesInstanceUID);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_dICOMStudyDateAndTimeHasBeenSet)
  {
   payload.WithObject("DICOMStudyDateAndTime", m_dICOMStudyDateAndTime.Jsonize());

  }

  if(m_isPrimaryHasBeenSet)
  {
   payload.WithBool("isPrimary", m_isPrimary);

  }

  return payload;
}

} // namespace Model
} // namespace MedicalImaging
} // namespace Aws
