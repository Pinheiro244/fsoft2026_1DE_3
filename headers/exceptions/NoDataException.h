#ifndef NODATAEXCEPTION_H
#define NODATAEXCEPTION_H

#include "ApplicationException.h"

class NoDataException : public ApplicationException {

public:
    explicit NoDataException(const string& message);
};

#endif