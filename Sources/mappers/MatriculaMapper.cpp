#include "MatriculaMapper.h"

using namespace std;

void MatriculaMapper::model2DTO(
    Matricula *matricula,
    MatriculaOUTDTO& dto
) {

    Student *student = matricula->getStudent();
    TrainingPlan *trainingPlan = matricula->getTrainingPlan();

    dto.id = matricula->getId();

    dto.studentId = student->getId();
    dto.studentName = student->getName();

    dto.trainingPlanId = trainingPlan->getId();
    dto.trainingPlanName = trainingPlan->getName();
    dto.trainingPlanObjective = trainingPlan->getObjective();
    dto.trainingPlanDurationWeeks = trainingPlan->getDurationWeeks();

    dto.date.day = matricula->getDay();
    dto.date.month = matricula->getMonth();
    dto.date.year = matricula->getYear();
}

void MatriculaMapper::listModel2listDTO(
    list<Matricula*> matriculas,
    list<MatriculaOUTDTO>& dtos
) {

    for (Matricula* matricula : matriculas) {

        MatriculaOUTDTO dto;

        model2DTO(matricula, dto);

        dtos.push_back(dto);
    }
}

void MatriculaMapper::model2DTO(
    Student *student,
    list<Matricula*> matriculas,
    MatriculaStudentPlansOUTDTO& dto
) {

    dto.studentId = student->getId();
    dto.studentName = student->getName();

    for (Matricula* matricula : matriculas) {

        TrainingPlan *trainingPlan = matricula->getTrainingPlan();

        string str =
            to_string(trainingPlan->getId()) +
            " - " +
            trainingPlan->getName();

        dto.trainingPlans.push_back(str);
    }
}

void MatriculaMapper::model2DTO(
    TrainingPlan *trainingPlan,
    list<Matricula*> matriculas,
    MatriculaTrainingPlanStudentsOUTDTO& dto
) {

    dto.trainingPlanId = trainingPlan->getId();
    dto.trainingPlanName = trainingPlan->getName();

    for (Matricula* matricula : matriculas) {

        Student *student = matricula->getStudent();

        string str =
            to_string(student->getId()) +
            " - " +
            student->getName();

        dto.students.push_back(str);
    }
}