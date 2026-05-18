#ifndef MATRICULAMAPPER_H
#define MATRICULAMAPPER_H

#include <list>
#include <string>

#include "Matricula.h"
#include "MatriculaOUTDTO.h"
#include "MatriculaStudentPlansOUTDTO.h"
#include "MatriculaTrainingPlanStudentsOUTDTO.h"

using namespace std;

class MatriculaMapper {

public:
    static void model2DTO(
        Matricula *matricula,
        MatriculaOUTDTO& dto
    );

    static void listModel2listDTO(
        list<Matricula*> matriculas,
        list<MatriculaOUTDTO>& dtos
    );

    static void model2DTO(
        Student *student,
        list<Matricula*> matriculas,
        MatriculaStudentPlansOUTDTO& dto
    );

    static void model2DTO(
        TrainingPlan *trainingPlan,
        list<Matricula*> matriculas,
        MatriculaTrainingPlanStudentsOUTDTO& dto
    );
};

#endif
