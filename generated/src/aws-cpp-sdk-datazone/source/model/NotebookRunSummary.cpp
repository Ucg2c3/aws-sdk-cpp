/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/NotebookRunSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

NotebookRunSummary::NotebookRunSummary(JsonView jsonValue) { *this = jsonValue; }

NotebookRunSummary& NotebookRunSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domainId")) {
    m_domainId = jsonValue.GetString("domainId");
    m_domainIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("owningProjectId")) {
    m_owningProjectId = jsonValue.GetString("owningProjectId");
    m_owningProjectIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("notebookId")) {
    m_notebookId = jsonValue.GetString("notebookId");
    m_notebookIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scheduleId")) {
    m_scheduleId = jsonValue.GetString("scheduleId");
    m_scheduleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = NotebookRunStatusMapper::GetNotebookRunStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("triggerSource")) {
    m_triggerSource = jsonValue.GetObject("triggerSource");
    m_triggerSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdBy")) {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedBy")) {
    m_updatedBy = jsonValue.GetString("updatedBy");
    m_updatedByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedAt")) {
    m_completedAt = jsonValue.GetDouble("completedAt");
    m_completedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue NotebookRunSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_domainIdHasBeenSet) {
    payload.WithString("domainId", m_domainId);
  }

  if (m_owningProjectIdHasBeenSet) {
    payload.WithString("owningProjectId", m_owningProjectId);
  }

  if (m_notebookIdHasBeenSet) {
    payload.WithString("notebookId", m_notebookId);
  }

  if (m_scheduleIdHasBeenSet) {
    payload.WithString("scheduleId", m_scheduleId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", NotebookRunStatusMapper::GetNameForNotebookRunStatus(m_status));
  }

  if (m_triggerSourceHasBeenSet) {
    payload.WithObject("triggerSource", m_triggerSource.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_createdByHasBeenSet) {
    payload.WithString("createdBy", m_createdBy);
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if (m_updatedByHasBeenSet) {
    payload.WithString("updatedBy", m_updatedBy);
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_completedAtHasBeenSet) {
    payload.WithDouble("completedAt", m_completedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
