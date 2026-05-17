#ifndef NOTFOUNDEXCEPTION_H
#define NOTFOUNDEXCEPTION_H

#include "ApplicationException.h"

class NotFoundException : public ApplicationException {

public:
    explicit NotFoundException(const string& message);
};

#endif
#endif //FSOFT2026_1DE_3_NOTFOUNDEXCEPTION_H