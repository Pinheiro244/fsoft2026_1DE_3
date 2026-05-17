#ifndef DATACONSISTENCYEXCEPTION_H
#define DATACONSISTENCYEXCEPTION_H

#include "ApplicationException.h"

class DataConsistencyException : public ApplicationException {

public:
    explicit DataConsistencyException(const string& message);
};

#endif

#endif //FSOFT2026_1DE_3_DATACONSISTENCYEXCEPTION_H