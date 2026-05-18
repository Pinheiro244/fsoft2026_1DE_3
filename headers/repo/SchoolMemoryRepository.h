#ifndef SCHOOLMEMORYREPOSITORY_H
#define SCHOOLMEMORYREPOSITORY_H

#include "../repo/ISchoolRepository.h"

class SchoolMemoryRepository : public ISchoolRepository {

private:
    School *school;

public:
    SchoolMemoryRepository();

    ~SchoolMemoryRepository() override;

    School* getModel() override;
};

#endif