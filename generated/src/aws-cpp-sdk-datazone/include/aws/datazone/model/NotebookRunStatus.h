/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

namespace Aws {
namespace DataZone {
namespace Model {
enum class NotebookRunStatus { NOT_SET, QUEUED, STARTING, RUNNING, STOPPING, STOPPED, SUCCEEDED, FAILED };

namespace NotebookRunStatusMapper {
AWS_DATAZONE_API NotebookRunStatus GetNotebookRunStatusForName(const Aws::String& name);

AWS_DATAZONE_API Aws::String GetNameForNotebookRunStatus(NotebookRunStatus value);
}  // namespace NotebookRunStatusMapper
}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
