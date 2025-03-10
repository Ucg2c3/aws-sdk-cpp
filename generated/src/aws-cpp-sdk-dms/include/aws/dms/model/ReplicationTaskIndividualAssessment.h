﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Provides information that describes an individual assessment from a
   * premigration assessment run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationTaskIndividualAssessment">AWS
   * API Reference</a></p>
   */
  class ReplicationTaskIndividualAssessment
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskIndividualAssessment();
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskIndividualAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskIndividualAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of this individual assessment.</p>
     */
    inline const Aws::String& GetReplicationTaskIndividualAssessmentArn() const{ return m_replicationTaskIndividualAssessmentArn; }
    inline bool ReplicationTaskIndividualAssessmentArnHasBeenSet() const { return m_replicationTaskIndividualAssessmentArnHasBeenSet; }
    inline void SetReplicationTaskIndividualAssessmentArn(const Aws::String& value) { m_replicationTaskIndividualAssessmentArnHasBeenSet = true; m_replicationTaskIndividualAssessmentArn = value; }
    inline void SetReplicationTaskIndividualAssessmentArn(Aws::String&& value) { m_replicationTaskIndividualAssessmentArnHasBeenSet = true; m_replicationTaskIndividualAssessmentArn = std::move(value); }
    inline void SetReplicationTaskIndividualAssessmentArn(const char* value) { m_replicationTaskIndividualAssessmentArnHasBeenSet = true; m_replicationTaskIndividualAssessmentArn.assign(value); }
    inline ReplicationTaskIndividualAssessment& WithReplicationTaskIndividualAssessmentArn(const Aws::String& value) { SetReplicationTaskIndividualAssessmentArn(value); return *this;}
    inline ReplicationTaskIndividualAssessment& WithReplicationTaskIndividualAssessmentArn(Aws::String&& value) { SetReplicationTaskIndividualAssessmentArn(std::move(value)); return *this;}
    inline ReplicationTaskIndividualAssessment& WithReplicationTaskIndividualAssessmentArn(const char* value) { SetReplicationTaskIndividualAssessmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the premigration assessment run that is created to run this individual
     * assessment.</p>
     */
    inline const Aws::String& GetReplicationTaskAssessmentRunArn() const{ return m_replicationTaskAssessmentRunArn; }
    inline bool ReplicationTaskAssessmentRunArnHasBeenSet() const { return m_replicationTaskAssessmentRunArnHasBeenSet; }
    inline void SetReplicationTaskAssessmentRunArn(const Aws::String& value) { m_replicationTaskAssessmentRunArnHasBeenSet = true; m_replicationTaskAssessmentRunArn = value; }
    inline void SetReplicationTaskAssessmentRunArn(Aws::String&& value) { m_replicationTaskAssessmentRunArnHasBeenSet = true; m_replicationTaskAssessmentRunArn = std::move(value); }
    inline void SetReplicationTaskAssessmentRunArn(const char* value) { m_replicationTaskAssessmentRunArnHasBeenSet = true; m_replicationTaskAssessmentRunArn.assign(value); }
    inline ReplicationTaskIndividualAssessment& WithReplicationTaskAssessmentRunArn(const Aws::String& value) { SetReplicationTaskAssessmentRunArn(value); return *this;}
    inline ReplicationTaskIndividualAssessment& WithReplicationTaskAssessmentRunArn(Aws::String&& value) { SetReplicationTaskAssessmentRunArn(std::move(value)); return *this;}
    inline ReplicationTaskIndividualAssessment& WithReplicationTaskAssessmentRunArn(const char* value) { SetReplicationTaskAssessmentRunArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of this individual assessment.</p>
     */
    inline const Aws::String& GetIndividualAssessmentName() const{ return m_individualAssessmentName; }
    inline bool IndividualAssessmentNameHasBeenSet() const { return m_individualAssessmentNameHasBeenSet; }
    inline void SetIndividualAssessmentName(const Aws::String& value) { m_individualAssessmentNameHasBeenSet = true; m_individualAssessmentName = value; }
    inline void SetIndividualAssessmentName(Aws::String&& value) { m_individualAssessmentNameHasBeenSet = true; m_individualAssessmentName = std::move(value); }
    inline void SetIndividualAssessmentName(const char* value) { m_individualAssessmentNameHasBeenSet = true; m_individualAssessmentName.assign(value); }
    inline ReplicationTaskIndividualAssessment& WithIndividualAssessmentName(const Aws::String& value) { SetIndividualAssessmentName(value); return *this;}
    inline ReplicationTaskIndividualAssessment& WithIndividualAssessmentName(Aws::String&& value) { SetIndividualAssessmentName(std::move(value)); return *this;}
    inline ReplicationTaskIndividualAssessment& WithIndividualAssessmentName(const char* value) { SetIndividualAssessmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Individual assessment status.</p> <p>This status can have one of the
     * following values:</p> <ul> <li> <p> <code>"cancelled"</code> </p> </li> <li> <p>
     * <code>"error"</code> </p> </li> <li> <p> <code>"failed"</code> </p> </li> <li>
     * <p> <code>"passed"</code> </p> </li> <li> <p> <code>"pending"</code> </p> </li>
     * <li> <p> <code>"skipped"</code> </p> </li> <li> <p> <code>"running"</code> </p>
     * </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ReplicationTaskIndividualAssessment& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ReplicationTaskIndividualAssessment& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ReplicationTaskIndividualAssessment& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date when this individual assessment was started as part of running the
     * <code>StartReplicationTaskAssessmentRun</code> operation.</p>
     */
    inline const Aws::Utils::DateTime& GetReplicationTaskIndividualAssessmentStartDate() const{ return m_replicationTaskIndividualAssessmentStartDate; }
    inline bool ReplicationTaskIndividualAssessmentStartDateHasBeenSet() const { return m_replicationTaskIndividualAssessmentStartDateHasBeenSet; }
    inline void SetReplicationTaskIndividualAssessmentStartDate(const Aws::Utils::DateTime& value) { m_replicationTaskIndividualAssessmentStartDateHasBeenSet = true; m_replicationTaskIndividualAssessmentStartDate = value; }
    inline void SetReplicationTaskIndividualAssessmentStartDate(Aws::Utils::DateTime&& value) { m_replicationTaskIndividualAssessmentStartDateHasBeenSet = true; m_replicationTaskIndividualAssessmentStartDate = std::move(value); }
    inline ReplicationTaskIndividualAssessment& WithReplicationTaskIndividualAssessmentStartDate(const Aws::Utils::DateTime& value) { SetReplicationTaskIndividualAssessmentStartDate(value); return *this;}
    inline ReplicationTaskIndividualAssessment& WithReplicationTaskIndividualAssessmentStartDate(Aws::Utils::DateTime&& value) { SetReplicationTaskIndividualAssessmentStartDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationTaskIndividualAssessmentArn;
    bool m_replicationTaskIndividualAssessmentArnHasBeenSet = false;

    Aws::String m_replicationTaskAssessmentRunArn;
    bool m_replicationTaskAssessmentRunArnHasBeenSet = false;

    Aws::String m_individualAssessmentName;
    bool m_individualAssessmentNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_replicationTaskIndividualAssessmentStartDate;
    bool m_replicationTaskIndividualAssessmentStartDateHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
