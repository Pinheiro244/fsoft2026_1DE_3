#ifndef STUDENTSERVICE_H
#define STUDENTSERVICE_H

#include <list>

#include "../repo/ISchoolRepository.h"
#include "../dto/StudentINDTO.h"
#include "../dto/StudentOUTDTO.h"

using namespace std;

class StudentService {

private:
    ISchoolRepository *repo;

public:
    explicit StudentService(ISchoolRepository *repo);

    void add(const StudentINDTO& obj);

    void getAll(list<StudentOUTDTO>& dtos);

    void get(int id, StudentOUTDTO& dto);

    void remove(int id, StudentOUTDTO& dto);

    void update(int id, const StudentINDTO& obj);
};

#endif