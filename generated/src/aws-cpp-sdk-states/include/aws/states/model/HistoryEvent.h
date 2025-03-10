﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/states/model/HistoryEventType.h>
#include <aws/states/model/ActivityFailedEventDetails.h>
#include <aws/states/model/ActivityScheduleFailedEventDetails.h>
#include <aws/states/model/ActivityScheduledEventDetails.h>
#include <aws/states/model/ActivityStartedEventDetails.h>
#include <aws/states/model/ActivitySucceededEventDetails.h>
#include <aws/states/model/ActivityTimedOutEventDetails.h>
#include <aws/states/model/TaskFailedEventDetails.h>
#include <aws/states/model/TaskScheduledEventDetails.h>
#include <aws/states/model/TaskStartFailedEventDetails.h>
#include <aws/states/model/TaskStartedEventDetails.h>
#include <aws/states/model/TaskSubmitFailedEventDetails.h>
#include <aws/states/model/TaskSubmittedEventDetails.h>
#include <aws/states/model/TaskSucceededEventDetails.h>
#include <aws/states/model/TaskTimedOutEventDetails.h>
#include <aws/states/model/ExecutionFailedEventDetails.h>
#include <aws/states/model/ExecutionStartedEventDetails.h>
#include <aws/states/model/ExecutionSucceededEventDetails.h>
#include <aws/states/model/ExecutionAbortedEventDetails.h>
#include <aws/states/model/ExecutionTimedOutEventDetails.h>
#include <aws/states/model/ExecutionRedrivenEventDetails.h>
#include <aws/states/model/MapStateStartedEventDetails.h>
#include <aws/states/model/MapIterationEventDetails.h>
#include <aws/states/model/LambdaFunctionFailedEventDetails.h>
#include <aws/states/model/LambdaFunctionScheduleFailedEventDetails.h>
#include <aws/states/model/LambdaFunctionScheduledEventDetails.h>
#include <aws/states/model/LambdaFunctionStartFailedEventDetails.h>
#include <aws/states/model/LambdaFunctionSucceededEventDetails.h>
#include <aws/states/model/LambdaFunctionTimedOutEventDetails.h>
#include <aws/states/model/StateEnteredEventDetails.h>
#include <aws/states/model/StateExitedEventDetails.h>
#include <aws/states/model/MapRunStartedEventDetails.h>
#include <aws/states/model/MapRunFailedEventDetails.h>
#include <aws/states/model/MapRunRedrivenEventDetails.h>
#include <aws/states/model/EvaluationFailedEventDetails.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about the events of an execution.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/HistoryEvent">AWS
   * API Reference</a></p>
   */
  class HistoryEvent
  {
  public:
    AWS_SFN_API HistoryEvent();
    AWS_SFN_API HistoryEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API HistoryEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline HistoryEvent& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline HistoryEvent& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the event.</p>
     */
    inline const HistoryEventType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const HistoryEventType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(HistoryEventType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline HistoryEvent& WithType(const HistoryEventType& value) { SetType(value); return *this;}
    inline HistoryEvent& WithType(HistoryEventType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the event. Events are numbered sequentially, starting at one.</p>
     */
    inline long long GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(long long value) { m_idHasBeenSet = true; m_id = value; }
    inline HistoryEvent& WithId(long long value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The id of the previous event.</p>
     */
    inline long long GetPreviousEventId() const{ return m_previousEventId; }
    inline bool PreviousEventIdHasBeenSet() const { return m_previousEventIdHasBeenSet; }
    inline void SetPreviousEventId(long long value) { m_previousEventIdHasBeenSet = true; m_previousEventId = value; }
    inline HistoryEvent& WithPreviousEventId(long long value) { SetPreviousEventId(value); return *this;}
    ///@}

    ///@{
    
    inline const ActivityFailedEventDetails& GetActivityFailedEventDetails() const{ return m_activityFailedEventDetails; }
    inline bool ActivityFailedEventDetailsHasBeenSet() const { return m_activityFailedEventDetailsHasBeenSet; }
    inline void SetActivityFailedEventDetails(const ActivityFailedEventDetails& value) { m_activityFailedEventDetailsHasBeenSet = true; m_activityFailedEventDetails = value; }
    inline void SetActivityFailedEventDetails(ActivityFailedEventDetails&& value) { m_activityFailedEventDetailsHasBeenSet = true; m_activityFailedEventDetails = std::move(value); }
    inline HistoryEvent& WithActivityFailedEventDetails(const ActivityFailedEventDetails& value) { SetActivityFailedEventDetails(value); return *this;}
    inline HistoryEvent& WithActivityFailedEventDetails(ActivityFailedEventDetails&& value) { SetActivityFailedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an activity schedule event that failed during an
     * execution.</p>
     */
    inline const ActivityScheduleFailedEventDetails& GetActivityScheduleFailedEventDetails() const{ return m_activityScheduleFailedEventDetails; }
    inline bool ActivityScheduleFailedEventDetailsHasBeenSet() const { return m_activityScheduleFailedEventDetailsHasBeenSet; }
    inline void SetActivityScheduleFailedEventDetails(const ActivityScheduleFailedEventDetails& value) { m_activityScheduleFailedEventDetailsHasBeenSet = true; m_activityScheduleFailedEventDetails = value; }
    inline void SetActivityScheduleFailedEventDetails(ActivityScheduleFailedEventDetails&& value) { m_activityScheduleFailedEventDetailsHasBeenSet = true; m_activityScheduleFailedEventDetails = std::move(value); }
    inline HistoryEvent& WithActivityScheduleFailedEventDetails(const ActivityScheduleFailedEventDetails& value) { SetActivityScheduleFailedEventDetails(value); return *this;}
    inline HistoryEvent& WithActivityScheduleFailedEventDetails(ActivityScheduleFailedEventDetails&& value) { SetActivityScheduleFailedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ActivityScheduledEventDetails& GetActivityScheduledEventDetails() const{ return m_activityScheduledEventDetails; }
    inline bool ActivityScheduledEventDetailsHasBeenSet() const { return m_activityScheduledEventDetailsHasBeenSet; }
    inline void SetActivityScheduledEventDetails(const ActivityScheduledEventDetails& value) { m_activityScheduledEventDetailsHasBeenSet = true; m_activityScheduledEventDetails = value; }
    inline void SetActivityScheduledEventDetails(ActivityScheduledEventDetails&& value) { m_activityScheduledEventDetailsHasBeenSet = true; m_activityScheduledEventDetails = std::move(value); }
    inline HistoryEvent& WithActivityScheduledEventDetails(const ActivityScheduledEventDetails& value) { SetActivityScheduledEventDetails(value); return *this;}
    inline HistoryEvent& WithActivityScheduledEventDetails(ActivityScheduledEventDetails&& value) { SetActivityScheduledEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ActivityStartedEventDetails& GetActivityStartedEventDetails() const{ return m_activityStartedEventDetails; }
    inline bool ActivityStartedEventDetailsHasBeenSet() const { return m_activityStartedEventDetailsHasBeenSet; }
    inline void SetActivityStartedEventDetails(const ActivityStartedEventDetails& value) { m_activityStartedEventDetailsHasBeenSet = true; m_activityStartedEventDetails = value; }
    inline void SetActivityStartedEventDetails(ActivityStartedEventDetails&& value) { m_activityStartedEventDetailsHasBeenSet = true; m_activityStartedEventDetails = std::move(value); }
    inline HistoryEvent& WithActivityStartedEventDetails(const ActivityStartedEventDetails& value) { SetActivityStartedEventDetails(value); return *this;}
    inline HistoryEvent& WithActivityStartedEventDetails(ActivityStartedEventDetails&& value) { SetActivityStartedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ActivitySucceededEventDetails& GetActivitySucceededEventDetails() const{ return m_activitySucceededEventDetails; }
    inline bool ActivitySucceededEventDetailsHasBeenSet() const { return m_activitySucceededEventDetailsHasBeenSet; }
    inline void SetActivitySucceededEventDetails(const ActivitySucceededEventDetails& value) { m_activitySucceededEventDetailsHasBeenSet = true; m_activitySucceededEventDetails = value; }
    inline void SetActivitySucceededEventDetails(ActivitySucceededEventDetails&& value) { m_activitySucceededEventDetailsHasBeenSet = true; m_activitySucceededEventDetails = std::move(value); }
    inline HistoryEvent& WithActivitySucceededEventDetails(const ActivitySucceededEventDetails& value) { SetActivitySucceededEventDetails(value); return *this;}
    inline HistoryEvent& WithActivitySucceededEventDetails(ActivitySucceededEventDetails&& value) { SetActivitySucceededEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ActivityTimedOutEventDetails& GetActivityTimedOutEventDetails() const{ return m_activityTimedOutEventDetails; }
    inline bool ActivityTimedOutEventDetailsHasBeenSet() const { return m_activityTimedOutEventDetailsHasBeenSet; }
    inline void SetActivityTimedOutEventDetails(const ActivityTimedOutEventDetails& value) { m_activityTimedOutEventDetailsHasBeenSet = true; m_activityTimedOutEventDetails = value; }
    inline void SetActivityTimedOutEventDetails(ActivityTimedOutEventDetails&& value) { m_activityTimedOutEventDetailsHasBeenSet = true; m_activityTimedOutEventDetails = std::move(value); }
    inline HistoryEvent& WithActivityTimedOutEventDetails(const ActivityTimedOutEventDetails& value) { SetActivityTimedOutEventDetails(value); return *this;}
    inline HistoryEvent& WithActivityTimedOutEventDetails(ActivityTimedOutEventDetails&& value) { SetActivityTimedOutEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the failure of a task.</p>
     */
    inline const TaskFailedEventDetails& GetTaskFailedEventDetails() const{ return m_taskFailedEventDetails; }
    inline bool TaskFailedEventDetailsHasBeenSet() const { return m_taskFailedEventDetailsHasBeenSet; }
    inline void SetTaskFailedEventDetails(const TaskFailedEventDetails& value) { m_taskFailedEventDetailsHasBeenSet = true; m_taskFailedEventDetails = value; }
    inline void SetTaskFailedEventDetails(TaskFailedEventDetails&& value) { m_taskFailedEventDetailsHasBeenSet = true; m_taskFailedEventDetails = std::move(value); }
    inline HistoryEvent& WithTaskFailedEventDetails(const TaskFailedEventDetails& value) { SetTaskFailedEventDetails(value); return *this;}
    inline HistoryEvent& WithTaskFailedEventDetails(TaskFailedEventDetails&& value) { SetTaskFailedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a task that was scheduled.</p>
     */
    inline const TaskScheduledEventDetails& GetTaskScheduledEventDetails() const{ return m_taskScheduledEventDetails; }
    inline bool TaskScheduledEventDetailsHasBeenSet() const { return m_taskScheduledEventDetailsHasBeenSet; }
    inline void SetTaskScheduledEventDetails(const TaskScheduledEventDetails& value) { m_taskScheduledEventDetailsHasBeenSet = true; m_taskScheduledEventDetails = value; }
    inline void SetTaskScheduledEventDetails(TaskScheduledEventDetails&& value) { m_taskScheduledEventDetailsHasBeenSet = true; m_taskScheduledEventDetails = std::move(value); }
    inline HistoryEvent& WithTaskScheduledEventDetails(const TaskScheduledEventDetails& value) { SetTaskScheduledEventDetails(value); return *this;}
    inline HistoryEvent& WithTaskScheduledEventDetails(TaskScheduledEventDetails&& value) { SetTaskScheduledEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a task that failed to start.</p>
     */
    inline const TaskStartFailedEventDetails& GetTaskStartFailedEventDetails() const{ return m_taskStartFailedEventDetails; }
    inline bool TaskStartFailedEventDetailsHasBeenSet() const { return m_taskStartFailedEventDetailsHasBeenSet; }
    inline void SetTaskStartFailedEventDetails(const TaskStartFailedEventDetails& value) { m_taskStartFailedEventDetailsHasBeenSet = true; m_taskStartFailedEventDetails = value; }
    inline void SetTaskStartFailedEventDetails(TaskStartFailedEventDetails&& value) { m_taskStartFailedEventDetailsHasBeenSet = true; m_taskStartFailedEventDetails = std::move(value); }
    inline HistoryEvent& WithTaskStartFailedEventDetails(const TaskStartFailedEventDetails& value) { SetTaskStartFailedEventDetails(value); return *this;}
    inline HistoryEvent& WithTaskStartFailedEventDetails(TaskStartFailedEventDetails&& value) { SetTaskStartFailedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a task that was started.</p>
     */
    inline const TaskStartedEventDetails& GetTaskStartedEventDetails() const{ return m_taskStartedEventDetails; }
    inline bool TaskStartedEventDetailsHasBeenSet() const { return m_taskStartedEventDetailsHasBeenSet; }
    inline void SetTaskStartedEventDetails(const TaskStartedEventDetails& value) { m_taskStartedEventDetailsHasBeenSet = true; m_taskStartedEventDetails = value; }
    inline void SetTaskStartedEventDetails(TaskStartedEventDetails&& value) { m_taskStartedEventDetailsHasBeenSet = true; m_taskStartedEventDetails = std::move(value); }
    inline HistoryEvent& WithTaskStartedEventDetails(const TaskStartedEventDetails& value) { SetTaskStartedEventDetails(value); return *this;}
    inline HistoryEvent& WithTaskStartedEventDetails(TaskStartedEventDetails&& value) { SetTaskStartedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a task that where the submit failed.</p>
     */
    inline const TaskSubmitFailedEventDetails& GetTaskSubmitFailedEventDetails() const{ return m_taskSubmitFailedEventDetails; }
    inline bool TaskSubmitFailedEventDetailsHasBeenSet() const { return m_taskSubmitFailedEventDetailsHasBeenSet; }
    inline void SetTaskSubmitFailedEventDetails(const TaskSubmitFailedEventDetails& value) { m_taskSubmitFailedEventDetailsHasBeenSet = true; m_taskSubmitFailedEventDetails = value; }
    inline void SetTaskSubmitFailedEventDetails(TaskSubmitFailedEventDetails&& value) { m_taskSubmitFailedEventDetailsHasBeenSet = true; m_taskSubmitFailedEventDetails = std::move(value); }
    inline HistoryEvent& WithTaskSubmitFailedEventDetails(const TaskSubmitFailedEventDetails& value) { SetTaskSubmitFailedEventDetails(value); return *this;}
    inline HistoryEvent& WithTaskSubmitFailedEventDetails(TaskSubmitFailedEventDetails&& value) { SetTaskSubmitFailedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a submitted task.</p>
     */
    inline const TaskSubmittedEventDetails& GetTaskSubmittedEventDetails() const{ return m_taskSubmittedEventDetails; }
    inline bool TaskSubmittedEventDetailsHasBeenSet() const { return m_taskSubmittedEventDetailsHasBeenSet; }
    inline void SetTaskSubmittedEventDetails(const TaskSubmittedEventDetails& value) { m_taskSubmittedEventDetailsHasBeenSet = true; m_taskSubmittedEventDetails = value; }
    inline void SetTaskSubmittedEventDetails(TaskSubmittedEventDetails&& value) { m_taskSubmittedEventDetailsHasBeenSet = true; m_taskSubmittedEventDetails = std::move(value); }
    inline HistoryEvent& WithTaskSubmittedEventDetails(const TaskSubmittedEventDetails& value) { SetTaskSubmittedEventDetails(value); return *this;}
    inline HistoryEvent& WithTaskSubmittedEventDetails(TaskSubmittedEventDetails&& value) { SetTaskSubmittedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a task that succeeded.</p>
     */
    inline const TaskSucceededEventDetails& GetTaskSucceededEventDetails() const{ return m_taskSucceededEventDetails; }
    inline bool TaskSucceededEventDetailsHasBeenSet() const { return m_taskSucceededEventDetailsHasBeenSet; }
    inline void SetTaskSucceededEventDetails(const TaskSucceededEventDetails& value) { m_taskSucceededEventDetailsHasBeenSet = true; m_taskSucceededEventDetails = value; }
    inline void SetTaskSucceededEventDetails(TaskSucceededEventDetails&& value) { m_taskSucceededEventDetailsHasBeenSet = true; m_taskSucceededEventDetails = std::move(value); }
    inline HistoryEvent& WithTaskSucceededEventDetails(const TaskSucceededEventDetails& value) { SetTaskSucceededEventDetails(value); return *this;}
    inline HistoryEvent& WithTaskSucceededEventDetails(TaskSucceededEventDetails&& value) { SetTaskSucceededEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a task that timed out.</p>
     */
    inline const TaskTimedOutEventDetails& GetTaskTimedOutEventDetails() const{ return m_taskTimedOutEventDetails; }
    inline bool TaskTimedOutEventDetailsHasBeenSet() const { return m_taskTimedOutEventDetailsHasBeenSet; }
    inline void SetTaskTimedOutEventDetails(const TaskTimedOutEventDetails& value) { m_taskTimedOutEventDetailsHasBeenSet = true; m_taskTimedOutEventDetails = value; }
    inline void SetTaskTimedOutEventDetails(TaskTimedOutEventDetails&& value) { m_taskTimedOutEventDetailsHasBeenSet = true; m_taskTimedOutEventDetails = std::move(value); }
    inline HistoryEvent& WithTaskTimedOutEventDetails(const TaskTimedOutEventDetails& value) { SetTaskTimedOutEventDetails(value); return *this;}
    inline HistoryEvent& WithTaskTimedOutEventDetails(TaskTimedOutEventDetails&& value) { SetTaskTimedOutEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionFailedEventDetails& GetExecutionFailedEventDetails() const{ return m_executionFailedEventDetails; }
    inline bool ExecutionFailedEventDetailsHasBeenSet() const { return m_executionFailedEventDetailsHasBeenSet; }
    inline void SetExecutionFailedEventDetails(const ExecutionFailedEventDetails& value) { m_executionFailedEventDetailsHasBeenSet = true; m_executionFailedEventDetails = value; }
    inline void SetExecutionFailedEventDetails(ExecutionFailedEventDetails&& value) { m_executionFailedEventDetailsHasBeenSet = true; m_executionFailedEventDetails = std::move(value); }
    inline HistoryEvent& WithExecutionFailedEventDetails(const ExecutionFailedEventDetails& value) { SetExecutionFailedEventDetails(value); return *this;}
    inline HistoryEvent& WithExecutionFailedEventDetails(ExecutionFailedEventDetails&& value) { SetExecutionFailedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionStartedEventDetails& GetExecutionStartedEventDetails() const{ return m_executionStartedEventDetails; }
    inline bool ExecutionStartedEventDetailsHasBeenSet() const { return m_executionStartedEventDetailsHasBeenSet; }
    inline void SetExecutionStartedEventDetails(const ExecutionStartedEventDetails& value) { m_executionStartedEventDetailsHasBeenSet = true; m_executionStartedEventDetails = value; }
    inline void SetExecutionStartedEventDetails(ExecutionStartedEventDetails&& value) { m_executionStartedEventDetailsHasBeenSet = true; m_executionStartedEventDetails = std::move(value); }
    inline HistoryEvent& WithExecutionStartedEventDetails(const ExecutionStartedEventDetails& value) { SetExecutionStartedEventDetails(value); return *this;}
    inline HistoryEvent& WithExecutionStartedEventDetails(ExecutionStartedEventDetails&& value) { SetExecutionStartedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionSucceededEventDetails& GetExecutionSucceededEventDetails() const{ return m_executionSucceededEventDetails; }
    inline bool ExecutionSucceededEventDetailsHasBeenSet() const { return m_executionSucceededEventDetailsHasBeenSet; }
    inline void SetExecutionSucceededEventDetails(const ExecutionSucceededEventDetails& value) { m_executionSucceededEventDetailsHasBeenSet = true; m_executionSucceededEventDetails = value; }
    inline void SetExecutionSucceededEventDetails(ExecutionSucceededEventDetails&& value) { m_executionSucceededEventDetailsHasBeenSet = true; m_executionSucceededEventDetails = std::move(value); }
    inline HistoryEvent& WithExecutionSucceededEventDetails(const ExecutionSucceededEventDetails& value) { SetExecutionSucceededEventDetails(value); return *this;}
    inline HistoryEvent& WithExecutionSucceededEventDetails(ExecutionSucceededEventDetails&& value) { SetExecutionSucceededEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionAbortedEventDetails& GetExecutionAbortedEventDetails() const{ return m_executionAbortedEventDetails; }
    inline bool ExecutionAbortedEventDetailsHasBeenSet() const { return m_executionAbortedEventDetailsHasBeenSet; }
    inline void SetExecutionAbortedEventDetails(const ExecutionAbortedEventDetails& value) { m_executionAbortedEventDetailsHasBeenSet = true; m_executionAbortedEventDetails = value; }
    inline void SetExecutionAbortedEventDetails(ExecutionAbortedEventDetails&& value) { m_executionAbortedEventDetailsHasBeenSet = true; m_executionAbortedEventDetails = std::move(value); }
    inline HistoryEvent& WithExecutionAbortedEventDetails(const ExecutionAbortedEventDetails& value) { SetExecutionAbortedEventDetails(value); return *this;}
    inline HistoryEvent& WithExecutionAbortedEventDetails(ExecutionAbortedEventDetails&& value) { SetExecutionAbortedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ExecutionTimedOutEventDetails& GetExecutionTimedOutEventDetails() const{ return m_executionTimedOutEventDetails; }
    inline bool ExecutionTimedOutEventDetailsHasBeenSet() const { return m_executionTimedOutEventDetailsHasBeenSet; }
    inline void SetExecutionTimedOutEventDetails(const ExecutionTimedOutEventDetails& value) { m_executionTimedOutEventDetailsHasBeenSet = true; m_executionTimedOutEventDetails = value; }
    inline void SetExecutionTimedOutEventDetails(ExecutionTimedOutEventDetails&& value) { m_executionTimedOutEventDetailsHasBeenSet = true; m_executionTimedOutEventDetails = std::move(value); }
    inline HistoryEvent& WithExecutionTimedOutEventDetails(const ExecutionTimedOutEventDetails& value) { SetExecutionTimedOutEventDetails(value); return *this;}
    inline HistoryEvent& WithExecutionTimedOutEventDetails(ExecutionTimedOutEventDetails&& value) { SetExecutionTimedOutEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the redrive attempt of an execution.</p>
     */
    inline const ExecutionRedrivenEventDetails& GetExecutionRedrivenEventDetails() const{ return m_executionRedrivenEventDetails; }
    inline bool ExecutionRedrivenEventDetailsHasBeenSet() const { return m_executionRedrivenEventDetailsHasBeenSet; }
    inline void SetExecutionRedrivenEventDetails(const ExecutionRedrivenEventDetails& value) { m_executionRedrivenEventDetailsHasBeenSet = true; m_executionRedrivenEventDetails = value; }
    inline void SetExecutionRedrivenEventDetails(ExecutionRedrivenEventDetails&& value) { m_executionRedrivenEventDetailsHasBeenSet = true; m_executionRedrivenEventDetails = std::move(value); }
    inline HistoryEvent& WithExecutionRedrivenEventDetails(const ExecutionRedrivenEventDetails& value) { SetExecutionRedrivenEventDetails(value); return *this;}
    inline HistoryEvent& WithExecutionRedrivenEventDetails(ExecutionRedrivenEventDetails&& value) { SetExecutionRedrivenEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about Map state that was started.</p>
     */
    inline const MapStateStartedEventDetails& GetMapStateStartedEventDetails() const{ return m_mapStateStartedEventDetails; }
    inline bool MapStateStartedEventDetailsHasBeenSet() const { return m_mapStateStartedEventDetailsHasBeenSet; }
    inline void SetMapStateStartedEventDetails(const MapStateStartedEventDetails& value) { m_mapStateStartedEventDetailsHasBeenSet = true; m_mapStateStartedEventDetails = value; }
    inline void SetMapStateStartedEventDetails(MapStateStartedEventDetails&& value) { m_mapStateStartedEventDetailsHasBeenSet = true; m_mapStateStartedEventDetails = std::move(value); }
    inline HistoryEvent& WithMapStateStartedEventDetails(const MapStateStartedEventDetails& value) { SetMapStateStartedEventDetails(value); return *this;}
    inline HistoryEvent& WithMapStateStartedEventDetails(MapStateStartedEventDetails&& value) { SetMapStateStartedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an iteration of a Map state that was started.</p>
     */
    inline const MapIterationEventDetails& GetMapIterationStartedEventDetails() const{ return m_mapIterationStartedEventDetails; }
    inline bool MapIterationStartedEventDetailsHasBeenSet() const { return m_mapIterationStartedEventDetailsHasBeenSet; }
    inline void SetMapIterationStartedEventDetails(const MapIterationEventDetails& value) { m_mapIterationStartedEventDetailsHasBeenSet = true; m_mapIterationStartedEventDetails = value; }
    inline void SetMapIterationStartedEventDetails(MapIterationEventDetails&& value) { m_mapIterationStartedEventDetailsHasBeenSet = true; m_mapIterationStartedEventDetails = std::move(value); }
    inline HistoryEvent& WithMapIterationStartedEventDetails(const MapIterationEventDetails& value) { SetMapIterationStartedEventDetails(value); return *this;}
    inline HistoryEvent& WithMapIterationStartedEventDetails(MapIterationEventDetails&& value) { SetMapIterationStartedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an iteration of a Map state that succeeded.</p>
     */
    inline const MapIterationEventDetails& GetMapIterationSucceededEventDetails() const{ return m_mapIterationSucceededEventDetails; }
    inline bool MapIterationSucceededEventDetailsHasBeenSet() const { return m_mapIterationSucceededEventDetailsHasBeenSet; }
    inline void SetMapIterationSucceededEventDetails(const MapIterationEventDetails& value) { m_mapIterationSucceededEventDetailsHasBeenSet = true; m_mapIterationSucceededEventDetails = value; }
    inline void SetMapIterationSucceededEventDetails(MapIterationEventDetails&& value) { m_mapIterationSucceededEventDetailsHasBeenSet = true; m_mapIterationSucceededEventDetails = std::move(value); }
    inline HistoryEvent& WithMapIterationSucceededEventDetails(const MapIterationEventDetails& value) { SetMapIterationSucceededEventDetails(value); return *this;}
    inline HistoryEvent& WithMapIterationSucceededEventDetails(MapIterationEventDetails&& value) { SetMapIterationSucceededEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an iteration of a Map state that failed.</p>
     */
    inline const MapIterationEventDetails& GetMapIterationFailedEventDetails() const{ return m_mapIterationFailedEventDetails; }
    inline bool MapIterationFailedEventDetailsHasBeenSet() const { return m_mapIterationFailedEventDetailsHasBeenSet; }
    inline void SetMapIterationFailedEventDetails(const MapIterationEventDetails& value) { m_mapIterationFailedEventDetailsHasBeenSet = true; m_mapIterationFailedEventDetails = value; }
    inline void SetMapIterationFailedEventDetails(MapIterationEventDetails&& value) { m_mapIterationFailedEventDetailsHasBeenSet = true; m_mapIterationFailedEventDetails = std::move(value); }
    inline HistoryEvent& WithMapIterationFailedEventDetails(const MapIterationEventDetails& value) { SetMapIterationFailedEventDetails(value); return *this;}
    inline HistoryEvent& WithMapIterationFailedEventDetails(MapIterationEventDetails&& value) { SetMapIterationFailedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an iteration of a Map state that was aborted.</p>
     */
    inline const MapIterationEventDetails& GetMapIterationAbortedEventDetails() const{ return m_mapIterationAbortedEventDetails; }
    inline bool MapIterationAbortedEventDetailsHasBeenSet() const { return m_mapIterationAbortedEventDetailsHasBeenSet; }
    inline void SetMapIterationAbortedEventDetails(const MapIterationEventDetails& value) { m_mapIterationAbortedEventDetailsHasBeenSet = true; m_mapIterationAbortedEventDetails = value; }
    inline void SetMapIterationAbortedEventDetails(MapIterationEventDetails&& value) { m_mapIterationAbortedEventDetailsHasBeenSet = true; m_mapIterationAbortedEventDetails = std::move(value); }
    inline HistoryEvent& WithMapIterationAbortedEventDetails(const MapIterationEventDetails& value) { SetMapIterationAbortedEventDetails(value); return *this;}
    inline HistoryEvent& WithMapIterationAbortedEventDetails(MapIterationEventDetails&& value) { SetMapIterationAbortedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const LambdaFunctionFailedEventDetails& GetLambdaFunctionFailedEventDetails() const{ return m_lambdaFunctionFailedEventDetails; }
    inline bool LambdaFunctionFailedEventDetailsHasBeenSet() const { return m_lambdaFunctionFailedEventDetailsHasBeenSet; }
    inline void SetLambdaFunctionFailedEventDetails(const LambdaFunctionFailedEventDetails& value) { m_lambdaFunctionFailedEventDetailsHasBeenSet = true; m_lambdaFunctionFailedEventDetails = value; }
    inline void SetLambdaFunctionFailedEventDetails(LambdaFunctionFailedEventDetails&& value) { m_lambdaFunctionFailedEventDetailsHasBeenSet = true; m_lambdaFunctionFailedEventDetails = std::move(value); }
    inline HistoryEvent& WithLambdaFunctionFailedEventDetails(const LambdaFunctionFailedEventDetails& value) { SetLambdaFunctionFailedEventDetails(value); return *this;}
    inline HistoryEvent& WithLambdaFunctionFailedEventDetails(LambdaFunctionFailedEventDetails&& value) { SetLambdaFunctionFailedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const LambdaFunctionScheduleFailedEventDetails& GetLambdaFunctionScheduleFailedEventDetails() const{ return m_lambdaFunctionScheduleFailedEventDetails; }
    inline bool LambdaFunctionScheduleFailedEventDetailsHasBeenSet() const { return m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet; }
    inline void SetLambdaFunctionScheduleFailedEventDetails(const LambdaFunctionScheduleFailedEventDetails& value) { m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet = true; m_lambdaFunctionScheduleFailedEventDetails = value; }
    inline void SetLambdaFunctionScheduleFailedEventDetails(LambdaFunctionScheduleFailedEventDetails&& value) { m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet = true; m_lambdaFunctionScheduleFailedEventDetails = std::move(value); }
    inline HistoryEvent& WithLambdaFunctionScheduleFailedEventDetails(const LambdaFunctionScheduleFailedEventDetails& value) { SetLambdaFunctionScheduleFailedEventDetails(value); return *this;}
    inline HistoryEvent& WithLambdaFunctionScheduleFailedEventDetails(LambdaFunctionScheduleFailedEventDetails&& value) { SetLambdaFunctionScheduleFailedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const LambdaFunctionScheduledEventDetails& GetLambdaFunctionScheduledEventDetails() const{ return m_lambdaFunctionScheduledEventDetails; }
    inline bool LambdaFunctionScheduledEventDetailsHasBeenSet() const { return m_lambdaFunctionScheduledEventDetailsHasBeenSet; }
    inline void SetLambdaFunctionScheduledEventDetails(const LambdaFunctionScheduledEventDetails& value) { m_lambdaFunctionScheduledEventDetailsHasBeenSet = true; m_lambdaFunctionScheduledEventDetails = value; }
    inline void SetLambdaFunctionScheduledEventDetails(LambdaFunctionScheduledEventDetails&& value) { m_lambdaFunctionScheduledEventDetailsHasBeenSet = true; m_lambdaFunctionScheduledEventDetails = std::move(value); }
    inline HistoryEvent& WithLambdaFunctionScheduledEventDetails(const LambdaFunctionScheduledEventDetails& value) { SetLambdaFunctionScheduledEventDetails(value); return *this;}
    inline HistoryEvent& WithLambdaFunctionScheduledEventDetails(LambdaFunctionScheduledEventDetails&& value) { SetLambdaFunctionScheduledEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a lambda function that failed to start during an
     * execution.</p>
     */
    inline const LambdaFunctionStartFailedEventDetails& GetLambdaFunctionStartFailedEventDetails() const{ return m_lambdaFunctionStartFailedEventDetails; }
    inline bool LambdaFunctionStartFailedEventDetailsHasBeenSet() const { return m_lambdaFunctionStartFailedEventDetailsHasBeenSet; }
    inline void SetLambdaFunctionStartFailedEventDetails(const LambdaFunctionStartFailedEventDetails& value) { m_lambdaFunctionStartFailedEventDetailsHasBeenSet = true; m_lambdaFunctionStartFailedEventDetails = value; }
    inline void SetLambdaFunctionStartFailedEventDetails(LambdaFunctionStartFailedEventDetails&& value) { m_lambdaFunctionStartFailedEventDetailsHasBeenSet = true; m_lambdaFunctionStartFailedEventDetails = std::move(value); }
    inline HistoryEvent& WithLambdaFunctionStartFailedEventDetails(const LambdaFunctionStartFailedEventDetails& value) { SetLambdaFunctionStartFailedEventDetails(value); return *this;}
    inline HistoryEvent& WithLambdaFunctionStartFailedEventDetails(LambdaFunctionStartFailedEventDetails&& value) { SetLambdaFunctionStartFailedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about a Lambda function that terminated successfully during
     * an execution.</p>
     */
    inline const LambdaFunctionSucceededEventDetails& GetLambdaFunctionSucceededEventDetails() const{ return m_lambdaFunctionSucceededEventDetails; }
    inline bool LambdaFunctionSucceededEventDetailsHasBeenSet() const { return m_lambdaFunctionSucceededEventDetailsHasBeenSet; }
    inline void SetLambdaFunctionSucceededEventDetails(const LambdaFunctionSucceededEventDetails& value) { m_lambdaFunctionSucceededEventDetailsHasBeenSet = true; m_lambdaFunctionSucceededEventDetails = value; }
    inline void SetLambdaFunctionSucceededEventDetails(LambdaFunctionSucceededEventDetails&& value) { m_lambdaFunctionSucceededEventDetailsHasBeenSet = true; m_lambdaFunctionSucceededEventDetails = std::move(value); }
    inline HistoryEvent& WithLambdaFunctionSucceededEventDetails(const LambdaFunctionSucceededEventDetails& value) { SetLambdaFunctionSucceededEventDetails(value); return *this;}
    inline HistoryEvent& WithLambdaFunctionSucceededEventDetails(LambdaFunctionSucceededEventDetails&& value) { SetLambdaFunctionSucceededEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const LambdaFunctionTimedOutEventDetails& GetLambdaFunctionTimedOutEventDetails() const{ return m_lambdaFunctionTimedOutEventDetails; }
    inline bool LambdaFunctionTimedOutEventDetailsHasBeenSet() const { return m_lambdaFunctionTimedOutEventDetailsHasBeenSet; }
    inline void SetLambdaFunctionTimedOutEventDetails(const LambdaFunctionTimedOutEventDetails& value) { m_lambdaFunctionTimedOutEventDetailsHasBeenSet = true; m_lambdaFunctionTimedOutEventDetails = value; }
    inline void SetLambdaFunctionTimedOutEventDetails(LambdaFunctionTimedOutEventDetails&& value) { m_lambdaFunctionTimedOutEventDetailsHasBeenSet = true; m_lambdaFunctionTimedOutEventDetails = std::move(value); }
    inline HistoryEvent& WithLambdaFunctionTimedOutEventDetails(const LambdaFunctionTimedOutEventDetails& value) { SetLambdaFunctionTimedOutEventDetails(value); return *this;}
    inline HistoryEvent& WithLambdaFunctionTimedOutEventDetails(LambdaFunctionTimedOutEventDetails&& value) { SetLambdaFunctionTimedOutEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const StateEnteredEventDetails& GetStateEnteredEventDetails() const{ return m_stateEnteredEventDetails; }
    inline bool StateEnteredEventDetailsHasBeenSet() const { return m_stateEnteredEventDetailsHasBeenSet; }
    inline void SetStateEnteredEventDetails(const StateEnteredEventDetails& value) { m_stateEnteredEventDetailsHasBeenSet = true; m_stateEnteredEventDetails = value; }
    inline void SetStateEnteredEventDetails(StateEnteredEventDetails&& value) { m_stateEnteredEventDetailsHasBeenSet = true; m_stateEnteredEventDetails = std::move(value); }
    inline HistoryEvent& WithStateEnteredEventDetails(const StateEnteredEventDetails& value) { SetStateEnteredEventDetails(value); return *this;}
    inline HistoryEvent& WithStateEnteredEventDetails(StateEnteredEventDetails&& value) { SetStateEnteredEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const StateExitedEventDetails& GetStateExitedEventDetails() const{ return m_stateExitedEventDetails; }
    inline bool StateExitedEventDetailsHasBeenSet() const { return m_stateExitedEventDetailsHasBeenSet; }
    inline void SetStateExitedEventDetails(const StateExitedEventDetails& value) { m_stateExitedEventDetailsHasBeenSet = true; m_stateExitedEventDetails = value; }
    inline void SetStateExitedEventDetails(StateExitedEventDetails&& value) { m_stateExitedEventDetailsHasBeenSet = true; m_stateExitedEventDetails = std::move(value); }
    inline HistoryEvent& WithStateExitedEventDetails(const StateExitedEventDetails& value) { SetStateExitedEventDetails(value); return *this;}
    inline HistoryEvent& WithStateExitedEventDetails(StateExitedEventDetails&& value) { SetStateExitedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details, such as <code>mapRunArn</code>, and the start date and time
     * of a Map Run. <code>mapRunArn</code> is the Amazon Resource Name (ARN) of the
     * Map Run that was started.</p>
     */
    inline const MapRunStartedEventDetails& GetMapRunStartedEventDetails() const{ return m_mapRunStartedEventDetails; }
    inline bool MapRunStartedEventDetailsHasBeenSet() const { return m_mapRunStartedEventDetailsHasBeenSet; }
    inline void SetMapRunStartedEventDetails(const MapRunStartedEventDetails& value) { m_mapRunStartedEventDetailsHasBeenSet = true; m_mapRunStartedEventDetails = value; }
    inline void SetMapRunStartedEventDetails(MapRunStartedEventDetails&& value) { m_mapRunStartedEventDetailsHasBeenSet = true; m_mapRunStartedEventDetails = std::move(value); }
    inline HistoryEvent& WithMapRunStartedEventDetails(const MapRunStartedEventDetails& value) { SetMapRunStartedEventDetails(value); return *this;}
    inline HistoryEvent& WithMapRunStartedEventDetails(MapRunStartedEventDetails&& value) { SetMapRunStartedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains error and cause details about a Map Run that failed.</p>
     */
    inline const MapRunFailedEventDetails& GetMapRunFailedEventDetails() const{ return m_mapRunFailedEventDetails; }
    inline bool MapRunFailedEventDetailsHasBeenSet() const { return m_mapRunFailedEventDetailsHasBeenSet; }
    inline void SetMapRunFailedEventDetails(const MapRunFailedEventDetails& value) { m_mapRunFailedEventDetailsHasBeenSet = true; m_mapRunFailedEventDetails = value; }
    inline void SetMapRunFailedEventDetails(MapRunFailedEventDetails&& value) { m_mapRunFailedEventDetailsHasBeenSet = true; m_mapRunFailedEventDetails = std::move(value); }
    inline HistoryEvent& WithMapRunFailedEventDetails(const MapRunFailedEventDetails& value) { SetMapRunFailedEventDetails(value); return *this;}
    inline HistoryEvent& WithMapRunFailedEventDetails(MapRunFailedEventDetails&& value) { SetMapRunFailedEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the redrive attempt of a Map Run.</p>
     */
    inline const MapRunRedrivenEventDetails& GetMapRunRedrivenEventDetails() const{ return m_mapRunRedrivenEventDetails; }
    inline bool MapRunRedrivenEventDetailsHasBeenSet() const { return m_mapRunRedrivenEventDetailsHasBeenSet; }
    inline void SetMapRunRedrivenEventDetails(const MapRunRedrivenEventDetails& value) { m_mapRunRedrivenEventDetailsHasBeenSet = true; m_mapRunRedrivenEventDetails = value; }
    inline void SetMapRunRedrivenEventDetails(MapRunRedrivenEventDetails&& value) { m_mapRunRedrivenEventDetailsHasBeenSet = true; m_mapRunRedrivenEventDetails = std::move(value); }
    inline HistoryEvent& WithMapRunRedrivenEventDetails(const MapRunRedrivenEventDetails& value) { SetMapRunRedrivenEventDetails(value); return *this;}
    inline HistoryEvent& WithMapRunRedrivenEventDetails(MapRunRedrivenEventDetails&& value) { SetMapRunRedrivenEventDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about an evaluation failure that occurred while processing a
     * state.</p>
     */
    inline const EvaluationFailedEventDetails& GetEvaluationFailedEventDetails() const{ return m_evaluationFailedEventDetails; }
    inline bool EvaluationFailedEventDetailsHasBeenSet() const { return m_evaluationFailedEventDetailsHasBeenSet; }
    inline void SetEvaluationFailedEventDetails(const EvaluationFailedEventDetails& value) { m_evaluationFailedEventDetailsHasBeenSet = true; m_evaluationFailedEventDetails = value; }
    inline void SetEvaluationFailedEventDetails(EvaluationFailedEventDetails&& value) { m_evaluationFailedEventDetailsHasBeenSet = true; m_evaluationFailedEventDetails = std::move(value); }
    inline HistoryEvent& WithEvaluationFailedEventDetails(const EvaluationFailedEventDetails& value) { SetEvaluationFailedEventDetails(value); return *this;}
    inline HistoryEvent& WithEvaluationFailedEventDetails(EvaluationFailedEventDetails&& value) { SetEvaluationFailedEventDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    HistoryEventType m_type;
    bool m_typeHasBeenSet = false;

    long long m_id;
    bool m_idHasBeenSet = false;

    long long m_previousEventId;
    bool m_previousEventIdHasBeenSet = false;

    ActivityFailedEventDetails m_activityFailedEventDetails;
    bool m_activityFailedEventDetailsHasBeenSet = false;

    ActivityScheduleFailedEventDetails m_activityScheduleFailedEventDetails;
    bool m_activityScheduleFailedEventDetailsHasBeenSet = false;

    ActivityScheduledEventDetails m_activityScheduledEventDetails;
    bool m_activityScheduledEventDetailsHasBeenSet = false;

    ActivityStartedEventDetails m_activityStartedEventDetails;
    bool m_activityStartedEventDetailsHasBeenSet = false;

    ActivitySucceededEventDetails m_activitySucceededEventDetails;
    bool m_activitySucceededEventDetailsHasBeenSet = false;

    ActivityTimedOutEventDetails m_activityTimedOutEventDetails;
    bool m_activityTimedOutEventDetailsHasBeenSet = false;

    TaskFailedEventDetails m_taskFailedEventDetails;
    bool m_taskFailedEventDetailsHasBeenSet = false;

    TaskScheduledEventDetails m_taskScheduledEventDetails;
    bool m_taskScheduledEventDetailsHasBeenSet = false;

    TaskStartFailedEventDetails m_taskStartFailedEventDetails;
    bool m_taskStartFailedEventDetailsHasBeenSet = false;

    TaskStartedEventDetails m_taskStartedEventDetails;
    bool m_taskStartedEventDetailsHasBeenSet = false;

    TaskSubmitFailedEventDetails m_taskSubmitFailedEventDetails;
    bool m_taskSubmitFailedEventDetailsHasBeenSet = false;

    TaskSubmittedEventDetails m_taskSubmittedEventDetails;
    bool m_taskSubmittedEventDetailsHasBeenSet = false;

    TaskSucceededEventDetails m_taskSucceededEventDetails;
    bool m_taskSucceededEventDetailsHasBeenSet = false;

    TaskTimedOutEventDetails m_taskTimedOutEventDetails;
    bool m_taskTimedOutEventDetailsHasBeenSet = false;

    ExecutionFailedEventDetails m_executionFailedEventDetails;
    bool m_executionFailedEventDetailsHasBeenSet = false;

    ExecutionStartedEventDetails m_executionStartedEventDetails;
    bool m_executionStartedEventDetailsHasBeenSet = false;

    ExecutionSucceededEventDetails m_executionSucceededEventDetails;
    bool m_executionSucceededEventDetailsHasBeenSet = false;

    ExecutionAbortedEventDetails m_executionAbortedEventDetails;
    bool m_executionAbortedEventDetailsHasBeenSet = false;

    ExecutionTimedOutEventDetails m_executionTimedOutEventDetails;
    bool m_executionTimedOutEventDetailsHasBeenSet = false;

    ExecutionRedrivenEventDetails m_executionRedrivenEventDetails;
    bool m_executionRedrivenEventDetailsHasBeenSet = false;

    MapStateStartedEventDetails m_mapStateStartedEventDetails;
    bool m_mapStateStartedEventDetailsHasBeenSet = false;

    MapIterationEventDetails m_mapIterationStartedEventDetails;
    bool m_mapIterationStartedEventDetailsHasBeenSet = false;

    MapIterationEventDetails m_mapIterationSucceededEventDetails;
    bool m_mapIterationSucceededEventDetailsHasBeenSet = false;

    MapIterationEventDetails m_mapIterationFailedEventDetails;
    bool m_mapIterationFailedEventDetailsHasBeenSet = false;

    MapIterationEventDetails m_mapIterationAbortedEventDetails;
    bool m_mapIterationAbortedEventDetailsHasBeenSet = false;

    LambdaFunctionFailedEventDetails m_lambdaFunctionFailedEventDetails;
    bool m_lambdaFunctionFailedEventDetailsHasBeenSet = false;

    LambdaFunctionScheduleFailedEventDetails m_lambdaFunctionScheduleFailedEventDetails;
    bool m_lambdaFunctionScheduleFailedEventDetailsHasBeenSet = false;

    LambdaFunctionScheduledEventDetails m_lambdaFunctionScheduledEventDetails;
    bool m_lambdaFunctionScheduledEventDetailsHasBeenSet = false;

    LambdaFunctionStartFailedEventDetails m_lambdaFunctionStartFailedEventDetails;
    bool m_lambdaFunctionStartFailedEventDetailsHasBeenSet = false;

    LambdaFunctionSucceededEventDetails m_lambdaFunctionSucceededEventDetails;
    bool m_lambdaFunctionSucceededEventDetailsHasBeenSet = false;

    LambdaFunctionTimedOutEventDetails m_lambdaFunctionTimedOutEventDetails;
    bool m_lambdaFunctionTimedOutEventDetailsHasBeenSet = false;

    StateEnteredEventDetails m_stateEnteredEventDetails;
    bool m_stateEnteredEventDetailsHasBeenSet = false;

    StateExitedEventDetails m_stateExitedEventDetails;
    bool m_stateExitedEventDetailsHasBeenSet = false;

    MapRunStartedEventDetails m_mapRunStartedEventDetails;
    bool m_mapRunStartedEventDetailsHasBeenSet = false;

    MapRunFailedEventDetails m_mapRunFailedEventDetails;
    bool m_mapRunFailedEventDetailsHasBeenSet = false;

    MapRunRedrivenEventDetails m_mapRunRedrivenEventDetails;
    bool m_mapRunRedrivenEventDetailsHasBeenSet = false;

    EvaluationFailedEventDetails m_evaluationFailedEventDetails;
    bool m_evaluationFailedEventDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
