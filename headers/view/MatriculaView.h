#ifndef MATRICULAVIEW_H
#define MATRICULAVIEW_H

#include <list>

#include "../dto/MatriculaINDTO.h"
#include "../dto/MatriculaOUTDTO.h"
#include "../dto/MatriculaStudentPlansOUTDTO.h"
#include "../dto/MatriculaTrainingPlanStudentsOUTDTO.h"

using namespace std;

class MatriculaView {

public:
    MatriculaINDTO getMatricula();

    void printMatricula(MatriculaOUTDTO *matricula);

    void printMatriculas(list<MatriculaOUTDTO> matriculas);

    void printMatricula(MatriculaStudentPlansOUTDTO *matricula);

    void printMatricula(MatriculaTrainingPlanStudentsOUTDTO *matricula);
};

#endif
