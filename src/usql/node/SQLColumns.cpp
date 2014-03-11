/******************************************************************
*
* uSQL for C++
*
* Copyright (C) Satoshi Konno 2012
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#include <usql/SQLStatement.h>
#include <usql/node/SQLColumns.h>

std::string &uSQL::SQLColumns::toString(std::string &buf) 
{
  return toExpressionString(buf);
}
