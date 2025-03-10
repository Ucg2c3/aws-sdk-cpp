﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DirectQueryDataSourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/Tag.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p> The configuration details for a data source that can be directly queried.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DirectQueryDataSource">AWS
   * API Reference</a></p>
   */
  class DirectQueryDataSource
  {
  public:
    AWS_OPENSEARCHSERVICE_API DirectQueryDataSource();
    AWS_OPENSEARCHSERVICE_API DirectQueryDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DirectQueryDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique, user-defined label to identify the data source within your
     * OpenSearch Service environment. </p>
     */
    inline const Aws::String& GetDataSourceName() const{ return m_dataSourceName; }
    inline bool DataSourceNameHasBeenSet() const { return m_dataSourceNameHasBeenSet; }
    inline void SetDataSourceName(const Aws::String& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = value; }
    inline void SetDataSourceName(Aws::String&& value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName = std::move(value); }
    inline void SetDataSourceName(const char* value) { m_dataSourceNameHasBeenSet = true; m_dataSourceName.assign(value); }
    inline DirectQueryDataSource& WithDataSourceName(const Aws::String& value) { SetDataSourceName(value); return *this;}
    inline DirectQueryDataSource& WithDataSourceName(Aws::String&& value) { SetDataSourceName(std::move(value)); return *this;}
    inline DirectQueryDataSource& WithDataSourceName(const char* value) { SetDataSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The supported Amazon Web Services service that is used as the source for
     * direct queries in OpenSearch Service. </p>
     */
    inline const DirectQueryDataSourceType& GetDataSourceType() const{ return m_dataSourceType; }
    inline bool DataSourceTypeHasBeenSet() const { return m_dataSourceTypeHasBeenSet; }
    inline void SetDataSourceType(const DirectQueryDataSourceType& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = value; }
    inline void SetDataSourceType(DirectQueryDataSourceType&& value) { m_dataSourceTypeHasBeenSet = true; m_dataSourceType = std::move(value); }
    inline DirectQueryDataSource& WithDataSourceType(const DirectQueryDataSourceType& value) { SetDataSourceType(value); return *this;}
    inline DirectQueryDataSource& WithDataSourceType(DirectQueryDataSourceType&& value) { SetDataSourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description that provides additional context and details about the data
     * source.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DirectQueryDataSource& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DirectQueryDataSource& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DirectQueryDataSource& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of Amazon Resource Names (ARNs) for the OpenSearch collections that
     * are associated with the direct query data source. </p>
     */
    inline const Aws::Vector<Aws::String>& GetOpenSearchArns() const{ return m_openSearchArns; }
    inline bool OpenSearchArnsHasBeenSet() const { return m_openSearchArnsHasBeenSet; }
    inline void SetOpenSearchArns(const Aws::Vector<Aws::String>& value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns = value; }
    inline void SetOpenSearchArns(Aws::Vector<Aws::String>&& value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns = std::move(value); }
    inline DirectQueryDataSource& WithOpenSearchArns(const Aws::Vector<Aws::String>& value) { SetOpenSearchArns(value); return *this;}
    inline DirectQueryDataSource& WithOpenSearchArns(Aws::Vector<Aws::String>&& value) { SetOpenSearchArns(std::move(value)); return *this;}
    inline DirectQueryDataSource& AddOpenSearchArns(const Aws::String& value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns.push_back(value); return *this; }
    inline DirectQueryDataSource& AddOpenSearchArns(Aws::String&& value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns.push_back(std::move(value)); return *this; }
    inline DirectQueryDataSource& AddOpenSearchArns(const char* value) { m_openSearchArnsHasBeenSet = true; m_openSearchArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The unique, system-generated identifier that represents the data source.</p>
     */
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }
    inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = value; }
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::move(value); }
    inline void SetDataSourceArn(const char* value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn.assign(value); }
    inline DirectQueryDataSource& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}
    inline DirectQueryDataSource& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}
    inline DirectQueryDataSource& WithDataSourceArn(const char* value) { SetDataSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of tags attached to a direct query data source.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline DirectQueryDataSource& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline DirectQueryDataSource& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline DirectQueryDataSource& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline DirectQueryDataSource& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_dataSourceName;
    bool m_dataSourceNameHasBeenSet = false;

    DirectQueryDataSourceType m_dataSourceType;
    bool m_dataSourceTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_openSearchArns;
    bool m_openSearchArnsHasBeenSet = false;

    Aws::String m_dataSourceArn;
    bool m_dataSourceArnHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
