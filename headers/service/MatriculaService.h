#ifndef MATRICULASERVICE_H
#define MATRICULASERVICE_H

#include <list>

#include "../repo/ISchoolRepository.h"

#include "../dto/MatriculaINDTO.h"
#include "../dto/MatriculaOUTDTO.h"
#include "../dto/MatriculaStudentPlansOUTDTO.h"
#include "../dto/MatriculaTrainingPlanStudentsOUTDTO.h"

using namespace std;

class MatriculaService {

private:
    ISchoolRepository *repo;

public:
    explicit MatriculaService(ISchoolRepository *repo);

    void add(const MatriculaINDTO& obj);

    void getAll(list<MatriculaOUTDTO>& dtos);

    void get(
        int studentId,
        int trainingPlanId,
        MatriculaOUTDTO& dto
    );

    void remove(
        int studentId,
        int trainingPlanId,
        MatriculaOUTDTO& dto
    );

    void get(
        int studentId,
        MatriculaStudentPlansOUTDTO& dto
    );

    void getTrainingPlanStudents(
        int trainingPlanId,
        MatriculaTrainingPlanStudentsOUTDTO& dto
    );
};

#endif
