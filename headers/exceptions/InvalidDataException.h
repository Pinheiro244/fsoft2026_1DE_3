#ifndef INVALIDDATAEXCEPTION_H
#define INVALIDDATAEXCEPTION_H

#include "ApplicationException.h"

class InvalidDataException : public ApplicationException {

public:
    explicit InvalidDataException(const string& message);
};

#endif
#endif //FSOFT2026_1DE_3_INVALIDDATAEXCEPTION_H