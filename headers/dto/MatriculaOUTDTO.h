#ifndef MATRICULAOUTDTO_H
#define MATRICULAOUTDTO_H

#include <string>
#include "DateDTO.h"

using namespace std;

class MatriculaOUTDTO {

public:
    int id;

    int studentId;
    string studentName;

    int trainingPlanId;
    string trainingPlanName;
    string trainingPlanObjective;
    int trainingPlanDurationWeeks;

    DateDTO date;

    MatriculaOUTDTO() = default;

    MatriculaOUTDTO(
        int id,
        int studentId,
        const string& studentName,
        int trainingPlanId,
        const string& trainingPlanName,
        const string& trainingPlanObjective,
        int trainingPlanDurationWeeks,
        const DateDTO& date
    ) : id(id),
        studentId(studentId),
        studentName(studentName),
        trainingPlanId(trainingPlanId),
        trainingPlanName(trainingPlanName),
        trainingPlanObjective(trainingPlanObjective),
        trainingPlanDurationWeeks(trainingPlanDurationWeeks),
        date(date) {
    }
};

#endif

