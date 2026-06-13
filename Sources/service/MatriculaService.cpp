#include "MatriculaService.h"
#include "MatriculaMapper.h"

using namespace std;

MatriculaService::MatriculaService(ISchoolRepository *repo) {
    this->repo = repo;
}

void MatriculaService::add(const MatriculaINDTO& obj) {

    School *model = this->repo->getModel();

    StudentContainer& studentContainer = model->getStudentContainer();
    TrainingPlanContainer& trainingPlanContainer = model->getTrainingPlanContainer();
    MatriculaContainer& matriculaContainer = model->getMatriculaContainer();

    Student *student = studentContainer.get(obj.studentId);
    TrainingPlan *trainingPlan = trainingPlanContainer.get(obj.trainingPlanId);

    int id = matriculaContainer.getAll().size() + 1;

    matriculaContainer.add(
        id,
        student,
        trainingPlan,
        obj.date.day,
        obj.date.month,
        obj.date.year
    );
}

void MatriculaService::getAll(list<MatriculaOUTDTO>& dtos) {

    School *model = this->repo->getModel();

    MatriculaContainer& matriculaContainer = model->getMatriculaContainer();

    list<Matricula*> matriculas = matriculaContainer.getAll();

    MatriculaMapper::listModel2listDTO(matriculas, dtos);
}

void MatriculaService::get(
    int studentId,
    int trainingPlanId,
    MatriculaOUTDTO& dto
) {

    School *model = this->repo->getModel();

    StudentContainer& studentContainer = model->getStudentContainer();
    TrainingPlanContainer& trainingPlanContainer = model->getTrainingPlanContainer();
    MatriculaContainer& matriculaContainer = model->getMatriculaContainer();

    Student *student = studentContainer.get(studentId);
    TrainingPlan *trainingPlan = trainingPlanContainer.get(trainingPlanId);

    Matricula *matricula = matriculaContainer.get(student, trainingPlan);

    MatriculaMapper::model2DTO(matricula, dto);
}

void MatriculaService::remove(
    int studentId,
    int trainingPlanId,
    MatriculaOUTDTO& dto
) {

    School *model = this->repo->getModel();

    StudentContainer& studentContainer = model->getStudentContainer();
    TrainingPlanContainer& trainingPlanContainer = model->getTrainingPlanContainer();
    MatriculaContainer& matriculaContainer = model->getMatriculaContainer();

    Student *student = studentContainer.get(studentId);
    TrainingPlan *trainingPlan = trainingPlanContainer.get(trainingPlanId);

    Matricula *matricula = matriculaContainer.remove(student, trainingPlan);

    MatriculaMapper::model2DTO(matricula, dto);

    delete matricula;
}

void MatriculaService::get(
    int studentId,
    MatriculaStudentPlansOUTDTO& dto
) {

    School *model = this->repo->getModel();

    StudentContainer& studentContainer = model->getStudentContainer();
    MatriculaContainer& matriculaContainer = model->getMatriculaContainer();

    Student *student = studentContainer.get(studentId);

    list<Matricula*> matriculas = matriculaContainer.getByStudent(student);

    MatriculaMapper::model2DTO(student, matriculas, dto);
}

void MatriculaService::getTrainingPlanStudents(
    int trainingPlanId,
    MatriculaTrainingPlanStudentsOUTDTO& dto
) {

    School *model = this->repo->getModel();

    TrainingPlanContainer& trainingPlanContainer = model->getTrainingPlanContainer();
    MatriculaContainer& matriculaContainer = model->getMatriculaContainer();

    TrainingPlan *trainingPlan = trainingPlanContainer.get(trainingPlanId);

    list<Matricula*> matriculas = matriculaContainer.getByTrainingPlan(trainingPlan);

    MatriculaMapper::model2DTO(trainingPlan, matriculas, dto);
}