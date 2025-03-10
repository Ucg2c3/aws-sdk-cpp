﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/InferenceComponentCapacitySizeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace InferenceComponentCapacitySizeTypeMapper
      {

        static const int COPY_COUNT_HASH = HashingUtils::HashString("COPY_COUNT");
        static const int CAPACITY_PERCENT_HASH = HashingUtils::HashString("CAPACITY_PERCENT");


        InferenceComponentCapacitySizeType GetInferenceComponentCapacitySizeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COPY_COUNT_HASH)
          {
            return InferenceComponentCapacitySizeType::COPY_COUNT;
          }
          else if (hashCode == CAPACITY_PERCENT_HASH)
          {
            return InferenceComponentCapacitySizeType::CAPACITY_PERCENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InferenceComponentCapacitySizeType>(hashCode);
          }

          return InferenceComponentCapacitySizeType::NOT_SET;
        }

        Aws::String GetNameForInferenceComponentCapacitySizeType(InferenceComponentCapacitySizeType enumValue)
        {
          switch(enumValue)
          {
          case InferenceComponentCapacitySizeType::NOT_SET:
            return {};
          case InferenceComponentCapacitySizeType::COPY_COUNT:
            return "COPY_COUNT";
          case InferenceComponentCapacitySizeType::CAPACITY_PERCENT:
            return "CAPACITY_PERCENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InferenceComponentCapacitySizeTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
