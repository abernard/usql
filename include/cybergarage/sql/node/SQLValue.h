/******************************************************************
*
* uSQL for C++
*
* SQLValue.h
*
* Copyright (C) Satoshi Konno 2011
*
* This is licensed under BSD-style license, see file COPYING.
*
******************************************************************/

#ifndef CG_USQL_SQLVALUE_H
#define CG_USQL_SQLVALUE_H

#include <cybergarage/sql/SQLNode.h>

namespace uSQL {

class SQLValue : public SQLNode {

	std::string value;
    
public:

	SQLValue() {
    	setType(VALUE);
    }
    
	void setValue(const std::string &value) {
    	this->value = value;
    }
    
    const char *getValue() {
    	return this->value.c_str();
    }
    
    std::string &toString(std::string &buf) {
		std::ostringstream oss;
        oss << "VALUE " << getValue();
		buf = oss.str();
        return buf;
    }
};

}

#endif