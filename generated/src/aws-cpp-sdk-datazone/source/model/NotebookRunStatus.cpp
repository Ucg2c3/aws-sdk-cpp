/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/datazone/model/NotebookRunStatus.h>

using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {
namespace NotebookRunStatusMapper {

static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
static const int STARTING_HASH = HashingUtils::HashString("STARTING");
static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

NotebookRunStatus GetNotebookRunStatusForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == QUEUED_HASH) {
    return NotebookRunStatus::QUEUED;
  } else if (hashCode == STARTING_HASH) {
    return NotebookRunStatus::STARTING;
  } else if (hashCode == RUNNING_HASH) {
    return NotebookRunStatus::RUNNING;
  } else if (hashCode == STOPPING_HASH) {
    return NotebookRunStatus::STOPPING;
  } else if (hashCode == STOPPED_HASH) {
    return NotebookRunStatus::STOPPED;
  } else if (hashCode == SUCCEEDED_HASH) {
    return NotebookRunStatus::SUCCEEDED;
  } else if (hashCode == FAILED_HASH) {
    return NotebookRunStatus::FAILED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<NotebookRunStatus>(hashCode);
  }

  return NotebookRunStatus::NOT_SET;
}

Aws::String GetNameForNotebookRunStatus(NotebookRunStatus enumValue) {
  switch (enumValue) {
    case NotebookRunStatus::NOT_SET:
      return {};
    case NotebookRunStatus::QUEUED:
      return "QUEUED";
    case NotebookRunStatus::STARTING:
      return "STARTING";
    case NotebookRunStatus::RUNNING:
      return "RUNNING";
    case NotebookRunStatus::STOPPING:
      return "STOPPING";
    case NotebookRunStatus::STOPPED:
      return "STOPPED";
    case NotebookRunStatus::SUCCEEDED:
      return "SUCCEEDED";
    case NotebookRunStatus::FAILED:
      return "FAILED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace NotebookRunStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
