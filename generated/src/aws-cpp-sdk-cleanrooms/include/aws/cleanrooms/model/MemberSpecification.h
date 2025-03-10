﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/MLMemberAbilities.h>
#include <aws/cleanrooms/model/PaymentConfiguration.h>
#include <aws/cleanrooms/model/MemberAbility.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Basic metadata used to construct a new member.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MemberSpecification">AWS
   * API Reference</a></p>
   */
  class MemberSpecification
  {
  public:
    AWS_CLEANROOMS_API MemberSpecification();
    AWS_CLEANROOMS_API MemberSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MemberSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier used to reference members of the collaboration. Currently only
     * supports Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline MemberSpecification& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline MemberSpecification& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline MemberSpecification& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The abilities granted to the collaboration member.</p>
     */
    inline const Aws::Vector<MemberAbility>& GetMemberAbilities() const{ return m_memberAbilities; }
    inline bool MemberAbilitiesHasBeenSet() const { return m_memberAbilitiesHasBeenSet; }
    inline void SetMemberAbilities(const Aws::Vector<MemberAbility>& value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities = value; }
    inline void SetMemberAbilities(Aws::Vector<MemberAbility>&& value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities = std::move(value); }
    inline MemberSpecification& WithMemberAbilities(const Aws::Vector<MemberAbility>& value) { SetMemberAbilities(value); return *this;}
    inline MemberSpecification& WithMemberAbilities(Aws::Vector<MemberAbility>&& value) { SetMemberAbilities(std::move(value)); return *this;}
    inline MemberSpecification& AddMemberAbilities(const MemberAbility& value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities.push_back(value); return *this; }
    inline MemberSpecification& AddMemberAbilities(MemberAbility&& value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ML abilities granted to the collaboration member.</p> <p>Custom ML
     * modeling is in beta release and is subject to change. For beta terms and
     * conditions, see <i>Betas and Previews</i> in the <a
     * href="https://aws.amazon.com/service-terms/">Amazon Web Services Service
     * Terms</a>.</p>
     */
    inline const MLMemberAbilities& GetMlMemberAbilities() const{ return m_mlMemberAbilities; }
    inline bool MlMemberAbilitiesHasBeenSet() const { return m_mlMemberAbilitiesHasBeenSet; }
    inline void SetMlMemberAbilities(const MLMemberAbilities& value) { m_mlMemberAbilitiesHasBeenSet = true; m_mlMemberAbilities = value; }
    inline void SetMlMemberAbilities(MLMemberAbilities&& value) { m_mlMemberAbilitiesHasBeenSet = true; m_mlMemberAbilities = std::move(value); }
    inline MemberSpecification& WithMlMemberAbilities(const MLMemberAbilities& value) { SetMlMemberAbilities(value); return *this;}
    inline MemberSpecification& WithMlMemberAbilities(MLMemberAbilities&& value) { SetMlMemberAbilities(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member's display name.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline MemberSpecification& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline MemberSpecification& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline MemberSpecification& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collaboration member's payment responsibilities set by the collaboration
     * creator. </p> <p>If the collaboration creator hasn't speciﬁed anyone as the
     * member paying for query compute costs, then the member who can query is the
     * default payer.</p>
     */
    inline const PaymentConfiguration& GetPaymentConfiguration() const{ return m_paymentConfiguration; }
    inline bool PaymentConfigurationHasBeenSet() const { return m_paymentConfigurationHasBeenSet; }
    inline void SetPaymentConfiguration(const PaymentConfiguration& value) { m_paymentConfigurationHasBeenSet = true; m_paymentConfiguration = value; }
    inline void SetPaymentConfiguration(PaymentConfiguration&& value) { m_paymentConfigurationHasBeenSet = true; m_paymentConfiguration = std::move(value); }
    inline MemberSpecification& WithPaymentConfiguration(const PaymentConfiguration& value) { SetPaymentConfiguration(value); return *this;}
    inline MemberSpecification& WithPaymentConfiguration(PaymentConfiguration&& value) { SetPaymentConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<MemberAbility> m_memberAbilities;
    bool m_memberAbilitiesHasBeenSet = false;

    MLMemberAbilities m_mlMemberAbilities;
    bool m_mlMemberAbilitiesHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    PaymentConfiguration m_paymentConfiguration;
    bool m_paymentConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
