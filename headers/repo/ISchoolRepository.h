#ifndef ISCHOOLREPOSITORY_H
#define ISCHOOLREPOSITORY_H

#include "../model/school.h"

class ISchoolRepository {

public:
    virtual ~ISchoolRepository() = default;

    virtual School* getModel() = 0;
};

#endif