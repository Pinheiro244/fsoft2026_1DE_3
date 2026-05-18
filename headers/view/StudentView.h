#ifndef STUDENTVIEW_H
#define STUDENTVIEW_H

#include <list>

#include "../dto/StudentINDTO.h"
#include "../dto/StudentOUTDTO.h"

using namespace std;

class StudentView {

public:
    StudentINDTO getStudent();

    void printStudent(StudentOUTDTO *student);

    void printStudents(list<StudentOUTDTO> students);
};

#endif