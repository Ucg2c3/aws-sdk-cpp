﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3vectors/S3VectorsEndpointRules.h>
#include <aws/core/utils/memory/stl/AWSArray.h>

namespace Aws
{
namespace S3Vectors
{
const size_t S3VectorsEndpointRules::RulesBlobStrLen = 1630;
const size_t S3VectorsEndpointRules::RulesBlobSize = 1631;

using RulesBlobT = Aws::Array<const char, S3VectorsEndpointRules::RulesBlobSize>;
static constexpr RulesBlobT RulesBlob = {{
'{','"','v','e','r','s','i','o','n','"',':','"','1','.','0','"',',','"','p','a','r','a','m','e','t',
'e','r','s','"',':','{','"','U','s','e','F','I','P','S','"',':','{','"','b','u','i','l','t','I','n',
'"',':','"','A','W','S',':',':','U','s','e','F','I','P','S','"',',','"','r','e','q','u','i','r','e',
'd','"',':','t','r','u','e',',','"','d','e','f','a','u','l','t','"',':','f','a','l','s','e',',','"',
'd','o','c','u','m','e','n','t','a','t','i','o','n','"',':','"','W','h','e','n',' ','t','r','u','e',
',',' ','s','e','n','d',' ','t','h','i','s',' ','r','e','q','u','e','s','t',' ','t','o',' ','t','h',
'e',' ','F','I','P','S','-','c','o','m','p','l','i','a','n','t',' ','r','e','g','i','o','n','a','l',
' ','e','n','d','p','o','i','n','t','.',' ','I','f',' ','t','h','e',' ','c','o','n','f','i','g','u',
'r','e','d',' ','e','n','d','p','o','i','n','t',' ','d','o','e','s',' ','n','o','t',' ','h','a','v',
'e',' ','a',' ','F','I','P','S',' ','c','o','m','p','l','i','a','n','t',' ','e','n','d','p','o','i',
'n','t',',',' ','d','i','s','p','a','t','c','h','i','n','g',' ','t','h','e',' ','r','e','q','u','e',
's','t',' ','w','i','l','l',' ','r','e','t','u','r','n',' ','a','n',' ','e','r','r','o','r','.','"',
',','"','t','y','p','e','"',':','"','B','o','o','l','e','a','n','"','}',',','"','E','n','d','p','o',
'i','n','t','"',':','{','"','b','u','i','l','t','I','n','"',':','"','S','D','K',':',':','E','n','d',
'p','o','i','n','t','"',',','"','r','e','q','u','i','r','e','d','"',':','f','a','l','s','e',',','"',
'd','o','c','u','m','e','n','t','a','t','i','o','n','"',':','"','O','v','e','r','r','i','d','e',' ',
't','h','e',' ','e','n','d','p','o','i','n','t',' ','u','s','e','d',' ','t','o',' ','s','e','n','d',
' ','t','h','i','s',' ','r','e','q','u','e','s','t','"',',','"','t','y','p','e','"',':','"','S','t',
'r','i','n','g','"','}',',','"','R','e','g','i','o','n','"',':','{','"','b','u','i','l','t','I','n',
'"',':','"','A','W','S',':',':','R','e','g','i','o','n','"',',','"','r','e','q','u','i','r','e','d',
'"',':','f','a','l','s','e',',','"','d','o','c','u','m','e','n','t','a','t','i','o','n','"',':','"',
'T','h','e',' ','A','W','S',' ','r','e','g','i','o','n',' ','u','s','e','d',' ','t','o',' ','d','i',
's','p','a','t','c','h',' ','t','h','e',' ','r','e','q','u','e','s','t','.','"',',','"','t','y','p',
'e','"',':','"','S','t','r','i','n','g','"','}','}',',','"','r','u','l','e','s','"',':','[','{','"',
'c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':','"','i','s','S','e','t',
'"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','E','n','d','p','o','i','n',
't','"','}',']','}',']',',','"','r','u','l','e','s','"',':','[','{','"','c','o','n','d','i','t','i',
'o','n','s','"',':','[','{','"','f','n','"',':','"','b','o','o','l','e','a','n','E','q','u','a','l',
's','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','U','s','e','F','I','P',
'S','"','}',',','t','r','u','e',']','}',']',',','"','e','r','r','o','r','"',':','"','I','n','v','a',
'l','i','d',' ','C','o','n','f','i','g','u','r','a','t','i','o','n',':',' ','F','I','P','S',' ','a',
'n','d',' ','c','u','s','t','o','m',' ','e','n','d','p','o','i','n','t',' ','a','r','e',' ','n','o',
't',' ','s','u','p','p','o','r','t','e','d','"',',','"','t','y','p','e','"',':','"','e','r','r','o',
'r','"','}',',','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[',']',',','"','e','n','d',
'p','o','i','n','t','"',':','{','"','u','r','l','"',':','{','"','r','e','f','"',':','"','E','n','d',
'p','o','i','n','t','"','}',',','"','p','r','o','p','e','r','t','i','e','s','"',':','{','}',',','"',
'h','e','a','d','e','r','s','"',':','{','}','}',',','"','t','y','p','e','"',':','"','e','n','d','p',
'o','i','n','t','"','}',']',',','"','t','y','p','e','"',':','"','t','r','e','e','"','}',',','{','"',
'c','o','n','d','i','t','i','o','n','s','"',':','[',']',',','"','r','u','l','e','s','"',':','[','{',
'"','c','o','n','d','i','t','i','o','n','s','"',':','[','{','"','f','n','"',':','"','i','s','S','e',
't','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','R','e','g','i','o','n',
'"','}',']','}',']',',','"','r','u','l','e','s','"',':','[','{','"','c','o','n','d','i','t','i','o',
'n','s','"',':','[','{','"','f','n','"',':','"','a','w','s','.','p','a','r','t','i','t','i','o','n',
'"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','R','e','g','i','o','n','"',
'}',']',',','"','a','s','s','i','g','n','"',':','"','P','a','r','t','i','t','i','o','n','R','e','s',
'u','l','t','"','}',']',',','"','r','u','l','e','s','"',':','[','{','"','c','o','n','d','i','t','i',
'o','n','s','"',':','[','{','"','f','n','"',':','"','b','o','o','l','e','a','n','E','q','u','a','l',
's','"',',','"','a','r','g','v','"',':','[','{','"','r','e','f','"',':','"','U','s','e','F','I','P',
'S','"','}',',','t','r','u','e',']','}',']',',','"','e','n','d','p','o','i','n','t','"',':','{','"',
'u','r','l','"',':','"','h','t','t','p','s',':','/','/','s','3','v','e','c','t','o','r','s','-','f',
'i','p','s','.','{','R','e','g','i','o','n','}','.','{','P','a','r','t','i','t','i','o','n','R','e',
's','u','l','t','#','d','u','a','l','S','t','a','c','k','D','n','s','S','u','f','f','i','x','}','"',
',','"','p','r','o','p','e','r','t','i','e','s','"',':','{','}',',','"','h','e','a','d','e','r','s',
'"',':','{','}','}',',','"','t','y','p','e','"',':','"','e','n','d','p','o','i','n','t','"','}',',',
'{','"','c','o','n','d','i','t','i','o','n','s','"',':','[',']',',','"','e','n','d','p','o','i','n',
't','"',':','{','"','u','r','l','"',':','"','h','t','t','p','s',':','/','/','s','3','v','e','c','t',
'o','r','s','.','{','R','e','g','i','o','n','}','.','{','P','a','r','t','i','t','i','o','n','R','e',
's','u','l','t','#','d','u','a','l','S','t','a','c','k','D','n','s','S','u','f','f','i','x','}','"',
',','"','p','r','o','p','e','r','t','i','e','s','"',':','{','}',',','"','h','e','a','d','e','r','s',
'"',':','{','}','}',',','"','t','y','p','e','"',':','"','e','n','d','p','o','i','n','t','"','}',']',
',','"','t','y','p','e','"',':','"','t','r','e','e','"','}',']',',','"','t','y','p','e','"',':','"',
't','r','e','e','"','}',',','{','"','c','o','n','d','i','t','i','o','n','s','"',':','[',']',',','"',
'e','r','r','o','r','"',':','"','I','n','v','a','l','i','d',' ','C','o','n','f','i','g','u','r','a',
't','i','o','n',':',' ','M','i','s','s','i','n','g',' ','R','e','g','i','o','n','"',',','"','t','y',
'p','e','"',':','"','e','r','r','o','r','"','}',']',',','"','t','y','p','e','"',':','"','t','r','e',
'e','"','}',']','}','\0'
}};

const char* S3VectorsEndpointRules::GetRulesBlob()
{
    return RulesBlob.data();
}

} // namespace S3Vectors
} // namespace Aws
