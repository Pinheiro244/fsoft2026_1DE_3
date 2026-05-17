#ifndef DUPLICATEDDATAEXCEPTION_H
#define DUPLICATEDDATAEXCEPTION_H

#include "ApplicationException.h"

class DuplicatedDataException : public ApplicationException {

public:
    explicit DuplicatedDataException(const string& message);
};

#endif
#endif //FSOFT2026_1DE_3_DUPLICATEDDATAEXCEPTION_H