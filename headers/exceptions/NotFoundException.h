#ifndef NOTFOUNDEXCEPTION_H
#define NOTFOUNDEXCEPTION_H

#include "ApplicationException.h"

class NotFoundException : public ApplicationException {

public:
    explicit NotFoundException(const string& message);
};

#endif
