#ifndef MATRICULATRAININGPLANSTUDENTSOUTDTO_H
#define MATRICULATRAININGPLANSTUDENTSOUTDTO_H

#include <list>
#include <string>

using namespace std;

class MatriculaTrainingPlanStudentsOUTDTO {

public:
    int trainingPlanId;
    string trainingPlanName;
    list<string> students;

    MatriculaTrainingPlanStudentsOUTDTO() = default;

    MatriculaTrainingPlanStudentsOUTDTO(
        int trainingPlanId,
        const string& trainingPlanName,
        const list<string>& students
    ) : trainingPlanId(trainingPlanId),
        trainingPlanName(trainingPlanName),
        students(students) {
    }
};

#endif
