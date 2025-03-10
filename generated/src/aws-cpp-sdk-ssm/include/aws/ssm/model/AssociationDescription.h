﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AssociationStatus.h>
#include <aws/ssm/model/AssociationOverview.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InstanceAssociationOutputLocation.h>
#include <aws/ssm/model/AssociationComplianceSeverity.h>
#include <aws/ssm/model/AssociationSyncCompliance.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/TargetLocation.h>
#include <aws/ssm/model/AlarmStateInformation.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes the parameters for a document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationDescription">AWS
   * API Reference</a></p>
   */
  class AssociationDescription
  {
  public:
    AWS_SSM_API AssociationDescription();
    AWS_SSM_API AssociationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AssociationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AssociationDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AssociationDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AssociationDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline AssociationDescription& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline AssociationDescription& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline AssociationDescription& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association version.</p>
     */
    inline const Aws::String& GetAssociationVersion() const{ return m_associationVersion; }
    inline bool AssociationVersionHasBeenSet() const { return m_associationVersionHasBeenSet; }
    inline void SetAssociationVersion(const Aws::String& value) { m_associationVersionHasBeenSet = true; m_associationVersion = value; }
    inline void SetAssociationVersion(Aws::String&& value) { m_associationVersionHasBeenSet = true; m_associationVersion = std::move(value); }
    inline void SetAssociationVersion(const char* value) { m_associationVersionHasBeenSet = true; m_associationVersion.assign(value); }
    inline AssociationDescription& WithAssociationVersion(const Aws::String& value) { SetAssociationVersion(value); return *this;}
    inline AssociationDescription& WithAssociationVersion(Aws::String&& value) { SetAssociationVersion(std::move(value)); return *this;}
    inline AssociationDescription& WithAssociationVersion(const char* value) { SetAssociationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the association was made.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const{ return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    inline void SetDate(const Aws::Utils::DateTime& value) { m_dateHasBeenSet = true; m_date = value; }
    inline void SetDate(Aws::Utils::DateTime&& value) { m_dateHasBeenSet = true; m_date = std::move(value); }
    inline AssociationDescription& WithDate(const Aws::Utils::DateTime& value) { SetDate(value); return *this;}
    inline AssociationDescription& WithDate(Aws::Utils::DateTime&& value) { SetDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the association was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateAssociationDate() const{ return m_lastUpdateAssociationDate; }
    inline bool LastUpdateAssociationDateHasBeenSet() const { return m_lastUpdateAssociationDateHasBeenSet; }
    inline void SetLastUpdateAssociationDate(const Aws::Utils::DateTime& value) { m_lastUpdateAssociationDateHasBeenSet = true; m_lastUpdateAssociationDate = value; }
    inline void SetLastUpdateAssociationDate(Aws::Utils::DateTime&& value) { m_lastUpdateAssociationDateHasBeenSet = true; m_lastUpdateAssociationDate = std::move(value); }
    inline AssociationDescription& WithLastUpdateAssociationDate(const Aws::Utils::DateTime& value) { SetLastUpdateAssociationDate(value); return *this;}
    inline AssociationDescription& WithLastUpdateAssociationDate(Aws::Utils::DateTime&& value) { SetLastUpdateAssociationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association status.</p>
     */
    inline const AssociationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AssociationDescription& WithStatus(const AssociationStatus& value) { SetStatus(value); return *this;}
    inline AssociationDescription& WithStatus(AssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the association.</p>
     */
    inline const AssociationOverview& GetOverview() const{ return m_overview; }
    inline bool OverviewHasBeenSet() const { return m_overviewHasBeenSet; }
    inline void SetOverview(const AssociationOverview& value) { m_overviewHasBeenSet = true; m_overview = value; }
    inline void SetOverview(AssociationOverview&& value) { m_overviewHasBeenSet = true; m_overview = std::move(value); }
    inline AssociationDescription& WithOverview(const AssociationOverview& value) { SetOverview(value); return *this;}
    inline AssociationDescription& WithOverview(AssociationOverview&& value) { SetOverview(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const{ return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    inline void SetDocumentVersion(const Aws::String& value) { m_documentVersionHasBeenSet = true; m_documentVersion = value; }
    inline void SetDocumentVersion(Aws::String&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::move(value); }
    inline void SetDocumentVersion(const char* value) { m_documentVersionHasBeenSet = true; m_documentVersion.assign(value); }
    inline AssociationDescription& WithDocumentVersion(const Aws::String& value) { SetDocumentVersion(value); return *this;}
    inline AssociationDescription& WithDocumentVersion(Aws::String&& value) { SetDocumentVersion(std::move(value)); return *this;}
    inline AssociationDescription& WithDocumentVersion(const char* value) { SetDocumentVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose the parameter that will define how your automation will branch out.
     * This target is required for associations that use an Automation runbook and
     * target resources by using rate controls. Automation is a tool in Amazon Web
     * Services Systems Manager.</p>
     */
    inline const Aws::String& GetAutomationTargetParameterName() const{ return m_automationTargetParameterName; }
    inline bool AutomationTargetParameterNameHasBeenSet() const { return m_automationTargetParameterNameHasBeenSet; }
    inline void SetAutomationTargetParameterName(const Aws::String& value) { m_automationTargetParameterNameHasBeenSet = true; m_automationTargetParameterName = value; }
    inline void SetAutomationTargetParameterName(Aws::String&& value) { m_automationTargetParameterNameHasBeenSet = true; m_automationTargetParameterName = std::move(value); }
    inline void SetAutomationTargetParameterName(const char* value) { m_automationTargetParameterNameHasBeenSet = true; m_automationTargetParameterName.assign(value); }
    inline AssociationDescription& WithAutomationTargetParameterName(const Aws::String& value) { SetAutomationTargetParameterName(value); return *this;}
    inline AssociationDescription& WithAutomationTargetParameterName(Aws::String&& value) { SetAutomationTargetParameterName(std::move(value)); return *this;}
    inline AssociationDescription& WithAutomationTargetParameterName(const char* value) { SetAutomationTargetParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline AssociationDescription& WithParameters(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetParameters(value); return *this;}
    inline AssociationDescription& WithParameters(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetParameters(std::move(value)); return *this;}
    inline AssociationDescription& AddParameters(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline AssociationDescription& AddParameters(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline AssociationDescription& AddParameters(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline AssociationDescription& AddParameters(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline AssociationDescription& AddParameters(const char* key, Aws::Vector<Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline AssociationDescription& AddParameters(const char* key, const Aws::Vector<Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline AssociationDescription& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline AssociationDescription& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline AssociationDescription& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed nodes targeted by the request. </p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline AssociationDescription& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline AssociationDescription& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline AssociationDescription& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline AssociationDescription& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A cron expression that specifies a schedule when the association runs.</p>
     */
    inline const Aws::String& GetScheduleExpression() const{ return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    inline void SetScheduleExpression(const Aws::String& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = value; }
    inline void SetScheduleExpression(Aws::String&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::move(value); }
    inline void SetScheduleExpression(const char* value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression.assign(value); }
    inline AssociationDescription& WithScheduleExpression(const Aws::String& value) { SetScheduleExpression(value); return *this;}
    inline AssociationDescription& WithScheduleExpression(Aws::String&& value) { SetScheduleExpression(std::move(value)); return *this;}
    inline AssociationDescription& WithScheduleExpression(const char* value) { SetScheduleExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 bucket where you want to store the output details of the request.</p>
     */
    inline const InstanceAssociationOutputLocation& GetOutputLocation() const{ return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    inline void SetOutputLocation(const InstanceAssociationOutputLocation& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }
    inline void SetOutputLocation(InstanceAssociationOutputLocation&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }
    inline AssociationDescription& WithOutputLocation(const InstanceAssociationOutputLocation& value) { SetOutputLocation(value); return *this;}
    inline AssociationDescription& WithOutputLocation(InstanceAssociationOutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the association was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionDate() const{ return m_lastExecutionDate; }
    inline bool LastExecutionDateHasBeenSet() const { return m_lastExecutionDateHasBeenSet; }
    inline void SetLastExecutionDate(const Aws::Utils::DateTime& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = value; }
    inline void SetLastExecutionDate(Aws::Utils::DateTime&& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = std::move(value); }
    inline AssociationDescription& WithLastExecutionDate(const Aws::Utils::DateTime& value) { SetLastExecutionDate(value); return *this;}
    inline AssociationDescription& WithLastExecutionDate(Aws::Utils::DateTime&& value) { SetLastExecutionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date on which the association was successfully run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulExecutionDate() const{ return m_lastSuccessfulExecutionDate; }
    inline bool LastSuccessfulExecutionDateHasBeenSet() const { return m_lastSuccessfulExecutionDateHasBeenSet; }
    inline void SetLastSuccessfulExecutionDate(const Aws::Utils::DateTime& value) { m_lastSuccessfulExecutionDateHasBeenSet = true; m_lastSuccessfulExecutionDate = value; }
    inline void SetLastSuccessfulExecutionDate(Aws::Utils::DateTime&& value) { m_lastSuccessfulExecutionDateHasBeenSet = true; m_lastSuccessfulExecutionDate = std::move(value); }
    inline AssociationDescription& WithLastSuccessfulExecutionDate(const Aws::Utils::DateTime& value) { SetLastSuccessfulExecutionDate(value); return *this;}
    inline AssociationDescription& WithLastSuccessfulExecutionDate(Aws::Utils::DateTime&& value) { SetLastSuccessfulExecutionDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association name.</p>
     */
    inline const Aws::String& GetAssociationName() const{ return m_associationName; }
    inline bool AssociationNameHasBeenSet() const { return m_associationNameHasBeenSet; }
    inline void SetAssociationName(const Aws::String& value) { m_associationNameHasBeenSet = true; m_associationName = value; }
    inline void SetAssociationName(Aws::String&& value) { m_associationNameHasBeenSet = true; m_associationName = std::move(value); }
    inline void SetAssociationName(const char* value) { m_associationNameHasBeenSet = true; m_associationName.assign(value); }
    inline AssociationDescription& WithAssociationName(const Aws::String& value) { SetAssociationName(value); return *this;}
    inline AssociationDescription& WithAssociationName(Aws::String&& value) { SetAssociationName(std::move(value)); return *this;}
    inline AssociationDescription& WithAssociationName(const char* value) { SetAssociationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of errors that are allowed before the system stops sending
     * requests to run the association on additional targets. You can specify either an
     * absolute number of errors, for example 10, or a percentage of the target set,
     * for example 10%. If you specify 3, for example, the system stops sending
     * requests when the fourth error is received. If you specify 0, then the system
     * stops sending requests after the first error is returned. If you run an
     * association on 50 managed nodes and set <code>MaxError</code> to 10%, then the
     * system stops sending the request when the sixth error is received.</p>
     * <p>Executions that are already running an association when
     * <code>MaxErrors</code> is reached are allowed to complete, but some of these
     * executions may fail as well. If you need to ensure that there won't be more than
     * max-errors failed executions, set <code>MaxConcurrency</code> to 1 so that
     * executions proceed one at a time.</p>
     */
    inline const Aws::String& GetMaxErrors() const{ return m_maxErrors; }
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }
    inline void SetMaxErrors(const Aws::String& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = value; }
    inline void SetMaxErrors(Aws::String&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::move(value); }
    inline void SetMaxErrors(const char* value) { m_maxErrorsHasBeenSet = true; m_maxErrors.assign(value); }
    inline AssociationDescription& WithMaxErrors(const Aws::String& value) { SetMaxErrors(value); return *this;}
    inline AssociationDescription& WithMaxErrors(Aws::String&& value) { SetMaxErrors(std::move(value)); return *this;}
    inline AssociationDescription& WithMaxErrors(const char* value) { SetMaxErrors(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of targets allowed to run the association at the same
     * time. You can specify a number, for example 10, or a percentage of the target
     * set, for example 10%. The default value is 100%, which means all targets run the
     * association at the same time.</p> <p>If a new managed node starts and attempts
     * to run an association while Systems Manager is running
     * <code>MaxConcurrency</code> associations, the association is allowed to run.
     * During the next association interval, the new managed node will process its
     * association within the limit specified for <code>MaxConcurrency</code>.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const{ return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    inline void SetMaxConcurrency(const Aws::String& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = value; }
    inline void SetMaxConcurrency(Aws::String&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::move(value); }
    inline void SetMaxConcurrency(const char* value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency.assign(value); }
    inline AssociationDescription& WithMaxConcurrency(const Aws::String& value) { SetMaxConcurrency(value); return *this;}
    inline AssociationDescription& WithMaxConcurrency(Aws::String&& value) { SetMaxConcurrency(std::move(value)); return *this;}
    inline AssociationDescription& WithMaxConcurrency(const char* value) { SetMaxConcurrency(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity level that is assigned to the association.</p>
     */
    inline const AssociationComplianceSeverity& GetComplianceSeverity() const{ return m_complianceSeverity; }
    inline bool ComplianceSeverityHasBeenSet() const { return m_complianceSeverityHasBeenSet; }
    inline void SetComplianceSeverity(const AssociationComplianceSeverity& value) { m_complianceSeverityHasBeenSet = true; m_complianceSeverity = value; }
    inline void SetComplianceSeverity(AssociationComplianceSeverity&& value) { m_complianceSeverityHasBeenSet = true; m_complianceSeverity = std::move(value); }
    inline AssociationDescription& WithComplianceSeverity(const AssociationComplianceSeverity& value) { SetComplianceSeverity(value); return *this;}
    inline AssociationDescription& WithComplianceSeverity(AssociationComplianceSeverity&& value) { SetComplianceSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode for generating association compliance. You can specify
     * <code>AUTO</code> or <code>MANUAL</code>. In <code>AUTO</code> mode, the system
     * uses the status of the association execution to determine the compliance status.
     * If the association execution runs successfully, then the association is
     * <code>COMPLIANT</code>. If the association execution doesn't run successfully,
     * the association is <code>NON-COMPLIANT</code>.</p> <p>In <code>MANUAL</code>
     * mode, you must specify the <code>AssociationId</code> as a parameter for the
     * <a>PutComplianceItems</a> API operation. In this case, compliance data isn't
     * managed by State Manager, a tool in Amazon Web Services Systems Manager. It is
     * managed by your direct call to the <a>PutComplianceItems</a> API operation.</p>
     * <p>By default, all associations use <code>AUTO</code> mode.</p>
     */
    inline const AssociationSyncCompliance& GetSyncCompliance() const{ return m_syncCompliance; }
    inline bool SyncComplianceHasBeenSet() const { return m_syncComplianceHasBeenSet; }
    inline void SetSyncCompliance(const AssociationSyncCompliance& value) { m_syncComplianceHasBeenSet = true; m_syncCompliance = value; }
    inline void SetSyncCompliance(AssociationSyncCompliance&& value) { m_syncComplianceHasBeenSet = true; m_syncCompliance = std::move(value); }
    inline AssociationDescription& WithSyncCompliance(const AssociationSyncCompliance& value) { SetSyncCompliance(value); return *this;}
    inline AssociationDescription& WithSyncCompliance(AssociationSyncCompliance&& value) { SetSyncCompliance(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default, when you create a new associations, the system runs it
     * immediately after it is created and then according to the schedule you
     * specified. Specify this option if you don't want an association to run
     * immediately after you create it. This parameter isn't supported for rate
     * expressions.</p>
     */
    inline bool GetApplyOnlyAtCronInterval() const{ return m_applyOnlyAtCronInterval; }
    inline bool ApplyOnlyAtCronIntervalHasBeenSet() const { return m_applyOnlyAtCronIntervalHasBeenSet; }
    inline void SetApplyOnlyAtCronInterval(bool value) { m_applyOnlyAtCronIntervalHasBeenSet = true; m_applyOnlyAtCronInterval = value; }
    inline AssociationDescription& WithApplyOnlyAtCronInterval(bool value) { SetApplyOnlyAtCronInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names or Amazon Resource Names (ARNs) of the Change Calendar type
     * documents your associations are gated under. The associations only run when that
     * change calendar is open. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-change-calendar">Amazon
     * Web Services Systems Manager Change Calendar</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCalendarNames() const{ return m_calendarNames; }
    inline bool CalendarNamesHasBeenSet() const { return m_calendarNamesHasBeenSet; }
    inline void SetCalendarNames(const Aws::Vector<Aws::String>& value) { m_calendarNamesHasBeenSet = true; m_calendarNames = value; }
    inline void SetCalendarNames(Aws::Vector<Aws::String>&& value) { m_calendarNamesHasBeenSet = true; m_calendarNames = std::move(value); }
    inline AssociationDescription& WithCalendarNames(const Aws::Vector<Aws::String>& value) { SetCalendarNames(value); return *this;}
    inline AssociationDescription& WithCalendarNames(Aws::Vector<Aws::String>&& value) { SetCalendarNames(std::move(value)); return *this;}
    inline AssociationDescription& AddCalendarNames(const Aws::String& value) { m_calendarNamesHasBeenSet = true; m_calendarNames.push_back(value); return *this; }
    inline AssociationDescription& AddCalendarNames(Aws::String&& value) { m_calendarNamesHasBeenSet = true; m_calendarNames.push_back(std::move(value)); return *this; }
    inline AssociationDescription& AddCalendarNames(const char* value) { m_calendarNamesHasBeenSet = true; m_calendarNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The combination of Amazon Web Services Regions and Amazon Web Services
     * accounts where you want to run the association.</p>
     */
    inline const Aws::Vector<TargetLocation>& GetTargetLocations() const{ return m_targetLocations; }
    inline bool TargetLocationsHasBeenSet() const { return m_targetLocationsHasBeenSet; }
    inline void SetTargetLocations(const Aws::Vector<TargetLocation>& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = value; }
    inline void SetTargetLocations(Aws::Vector<TargetLocation>&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = std::move(value); }
    inline AssociationDescription& WithTargetLocations(const Aws::Vector<TargetLocation>& value) { SetTargetLocations(value); return *this;}
    inline AssociationDescription& WithTargetLocations(Aws::Vector<TargetLocation>&& value) { SetTargetLocations(std::move(value)); return *this;}
    inline AssociationDescription& AddTargetLocations(const TargetLocation& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.push_back(value); return *this; }
    inline AssociationDescription& AddTargetLocations(TargetLocation&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Number of days to wait after the scheduled day to run an association.</p>
     */
    inline int GetScheduleOffset() const{ return m_scheduleOffset; }
    inline bool ScheduleOffsetHasBeenSet() const { return m_scheduleOffsetHasBeenSet; }
    inline void SetScheduleOffset(int value) { m_scheduleOffsetHasBeenSet = true; m_scheduleOffset = value; }
    inline AssociationDescription& WithScheduleOffset(int value) { SetScheduleOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours that an association can run on specified targets. After
     * the resulting cutoff time passes, associations that are currently running are
     * cancelled, and no pending executions are started on remaining targets.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline AssociationDescription& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetTargetMaps() const{ return m_targetMaps; }
    inline bool TargetMapsHasBeenSet() const { return m_targetMapsHasBeenSet; }
    inline void SetTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps = value; }
    inline void SetTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps = std::move(value); }
    inline AssociationDescription& WithTargetMaps(const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetTargetMaps(value); return *this;}
    inline AssociationDescription& WithTargetMaps(Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetTargetMaps(std::move(value)); return *this;}
    inline AssociationDescription& AddTargetMaps(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(value); return *this; }
    inline AssociationDescription& AddTargetMaps(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const AlarmConfiguration& GetAlarmConfiguration() const{ return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    inline void SetAlarmConfiguration(const AlarmConfiguration& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = value; }
    inline void SetAlarmConfiguration(AlarmConfiguration&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::move(value); }
    inline AssociationDescription& WithAlarmConfiguration(const AlarmConfiguration& value) { SetAlarmConfiguration(value); return *this;}
    inline AssociationDescription& WithAlarmConfiguration(AlarmConfiguration&& value) { SetAlarmConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarm that was invoked during the association.</p>
     */
    inline const Aws::Vector<AlarmStateInformation>& GetTriggeredAlarms() const{ return m_triggeredAlarms; }
    inline bool TriggeredAlarmsHasBeenSet() const { return m_triggeredAlarmsHasBeenSet; }
    inline void SetTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = value; }
    inline void SetTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = std::move(value); }
    inline AssociationDescription& WithTriggeredAlarms(const Aws::Vector<AlarmStateInformation>& value) { SetTriggeredAlarms(value); return *this;}
    inline AssociationDescription& WithTriggeredAlarms(Aws::Vector<AlarmStateInformation>&& value) { SetTriggeredAlarms(std::move(value)); return *this;}
    inline AssociationDescription& AddTriggeredAlarms(const AlarmStateInformation& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.push_back(value); return *this; }
    inline AssociationDescription& AddTriggeredAlarms(AlarmStateInformation&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet = false;

    Aws::Utils::DateTime m_date;
    bool m_dateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateAssociationDate;
    bool m_lastUpdateAssociationDateHasBeenSet = false;

    AssociationStatus m_status;
    bool m_statusHasBeenSet = false;

    AssociationOverview m_overview;
    bool m_overviewHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::String m_automationTargetParameterName;
    bool m_automationTargetParameterNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    InstanceAssociationOutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::Utils::DateTime m_lastExecutionDate;
    bool m_lastExecutionDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulExecutionDate;
    bool m_lastSuccessfulExecutionDateHasBeenSet = false;

    Aws::String m_associationName;
    bool m_associationNameHasBeenSet = false;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet = false;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    AssociationComplianceSeverity m_complianceSeverity;
    bool m_complianceSeverityHasBeenSet = false;

    AssociationSyncCompliance m_syncCompliance;
    bool m_syncComplianceHasBeenSet = false;

    bool m_applyOnlyAtCronInterval;
    bool m_applyOnlyAtCronIntervalHasBeenSet = false;

    Aws::Vector<Aws::String> m_calendarNames;
    bool m_calendarNamesHasBeenSet = false;

    Aws::Vector<TargetLocation> m_targetLocations;
    bool m_targetLocationsHasBeenSet = false;

    int m_scheduleOffset;
    bool m_scheduleOffsetHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_targetMaps;
    bool m_targetMapsHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;

    Aws::Vector<AlarmStateInformation> m_triggeredAlarms;
    bool m_triggeredAlarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
