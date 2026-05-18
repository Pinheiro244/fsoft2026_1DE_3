#ifndef DUPLICATEDDATAEXCEPTION_H
#define DUPLICATEDDATAEXCEPTION_H

#include "ApplicationException.h"

class DuplicatedDataException : public ApplicationException {

public:
    explicit DuplicatedDataException(const string& message);
};

#endif
