#ifndef MATRICULAINDTO_H
#define MATRICULAINDTO_H

#include "DateDTO.h"

class MatriculaINDTO {

public:
    int studentId;
    int trainingPlanId;
    DateDTO date;

    MatriculaINDTO() = default;

    MatriculaINDTO(
        int studentId,
        int trainingPlanId,
        const DateDTO& date
    ) : studentId(studentId),
        trainingPlanId(trainingPlanId),
        date(date) {
    }
};

#endif
