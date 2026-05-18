#ifndef MATRICULASTUDENTPLANSOUTDTO_H
#define MATRICULASTUDENTPLANSOUTDTO_H

#include <list>
#include <string>

using namespace std;

class MatriculaStudentPlansOUTDTO {

public:
    int studentId;
    string studentName;
    list<string> trainingPlans;

    MatriculaStudentPlansOUTDTO() = default;

    MatriculaStudentPlansOUTDTO(
        int studentId,
        const string& studentName,
        const list<string>& trainingPlans
    ) : studentId(studentId),
        studentName(studentName),
        trainingPlans(trainingPlans) {
    }
};

#endif
