/******************************************************************
*
* uSQL for C++
*
* Copyright (C) Satoshi Konno 2012
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#ifndef CG_USQL_SQLLIMIT_H
#define CG_USQL_SQLLIMIT_H

#include <usql/SQLNode.h>

namespace uSQL {

class SQLLimit : public SQLNode {

public:

  SQLLimit() {
    setType(LIMIT);
  }
  
  const char *getTypeName() {
    return "SQLLimit";
  }
  
  std::string &toString(std::string &buf) {
    std::ostringstream oss;
    std::string childNodeStr;
    oss << "LIMIT " << childNodesToString(childNodeStr, ",");
    buf = oss.str();
    return buf;
  }
};

}

#endif
