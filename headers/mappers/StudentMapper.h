#ifndef STUDENTMAPPER_H
#define STUDENTMAPPER_H

#include <list>

#include "Student.h"
#include "StudentOUTDTO.h"

using namespace std;

class StudentMapper {

public:
    static void model2DTO(Student* student, StudentOUTDTO& dto);

    static void listModel2listDTO(
        list<Student*> students,
        list<StudentOUTDTO>& dtos
    );
};

#endif
