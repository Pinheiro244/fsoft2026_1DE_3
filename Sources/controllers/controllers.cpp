#include <string>
#include <list>

#include "../headers/controller/controller.h"
#include "utils.h"

#include "DataConsistencyException.h"
#include "DuplicatedDataException.h"
#include "InvalidDataException.h"
#include "NotFoundException.h"

using namespace std;

Controller::Controller(
    StudentService *studentService,
    TrainingPlanService *trainingPlanService,
    MatriculaService *matriculaService
) {
    this->studentService = studentService;
    this->trainingPlanService = trainingPlanService;
    this->matriculaService = matriculaService;
}

void Controller::run() {

    int op = -1;

    do {
        op = this->view.menuSchool();

        switch (op) {
            case 1:
                runStudents();
                break;

            case 2:
                runTrainingPlans();
                break;

            case 3:
                runMatriculas();
                break;

            default:
                break;
        }

    } while (op != 0);
}

void Controller::runStudents() {

    int op = -1;

    do {
        op = this->view.menuStudents();

        switch (op) {
            case 1: {
                try {
                    StudentINDTO student = this->studentView.getStudent();

                    this->studentService->add(student);

                } catch (InvalidDataException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (DuplicatedDataException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (DataConsistencyException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (exception& e) {
                    string str("Unknown exception");
                    this->view.printMessage(&str);
                }
            }
                break;

            case 2: {
                try {
                    StudentOUTDTO student;

                    int id = Utils::getNumber("Enter the Student Id");

                    this->studentService->get(id, student);

                    this->studentView.printStudent(&student);

                } catch (NotFoundException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (exception& e) {
                    string str("Unknown exception");
                    this->view.printMessage(&str);
                }
            }
                break;

            case 3: {
                try {
                    StudentOUTDTO student;

                    int id = Utils::getNumber("Enter the Student Id");

                    this->studentService->remove(id, student);

                    this->studentView.printStudent(&student);

                } catch (DataConsistencyException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (NotFoundException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (exception& e) {
                    string str("Unknown exception");
                    this->view.printMessage(&str);
                }
            }
                break;

            case 4: {
                try {
                    StudentOUTDTO student1;

                    int id = Utils::getNumber("Enter the Student Id");

                    this->studentService->get(id, student1);
                    this->studentView.printStudent(&student1);

                    StudentINDTO student2 = this->studentView.getStudent();

                    this->studentService->update(id, student2);

                    this->studentService->get(id, student1);
                    this->studentView.printStudent(&student1);

                } catch (NotFoundException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (InvalidDataException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (exception& e) {
                    string str("Unknown exception");
                    this->view.printMessage(&str);
                }
            }
                break;

            case 5: {
                list<StudentOUTDTO> students;

                this->studentService->getAll(students);

                this->studentView.printStudents(students);
            }
                break;

            default:
                break;
        }

    } while (op != 0);
}

void Controller::runTrainingPlans() {

    int op = -1;

    do {
        op = this->view.menuTrainingPlans();

        switch (op) {
            case 1: {
                try {
                    TrainingPlanINDTO trainingPlan = this->trainingPlanView.getTrainingPlan();

                    this->trainingPlanService->add(trainingPlan);

                } catch (InvalidDataException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (DuplicatedDataException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (DataConsistencyException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (exception& e) {
                    string str("Unknown exception");
                    this->view.printMessage(&str);
                }
            }
                break;

            case 2: {
                try {
                    TrainingPlanOUTDTO trainingPlan;

                    int id = Utils::getNumber("Enter the Training Plan Id");

                    this->trainingPlanService->get(id, trainingPlan);

                    this->trainingPlanView.printTrainingPlan(&trainingPlan);

                } catch (NotFoundException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (exception& e) {
                    string str("Unknown exception");
                    this->view.printMessage(&str);
                }
            }
                break;

            case 3: {
                try {
                    TrainingPlanOUTDTO trainingPlan;

                    int id = Utils::getNumber("Enter the Training Plan Id");

                    this->trainingPlanService->remove(id, trainingPlan);

                    this->trainingPlanView.printTrainingPlan(&trainingPlan);

                } catch (DataConsistencyException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (NotFoundException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (exception& e) {
                    string str("Unknown exception");
                    this->view.printMessage(&str);
                }
            }
                break;

            case 4: {
                try {
                    TrainingPlanOUTDTO trainingPlan1;

                    int id = Utils::getNumber("Enter the Training Plan Id");

                    this->trainingPlanService->get(id, trainingPlan1);
                    this->trainingPlanView.printTrainingPlan(&trainingPlan1);

                    TrainingPlanINDTO trainingPlan2 = this->trainingPlanView.getTrainingPlan();

                    this->trainingPlanService->update(id, trainingPlan2);

                    this->trainingPlanService->get(id, trainingPlan1);
                    this->trainingPlanView.printTrainingPlan(&trainingPlan1);

                } catch (NotFoundException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (InvalidDataException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (exception& e) {
                    string str("Unknown exception");
                    this->view.printMessage(&str);
                }
            }
                break;

            case 5: {
                list<TrainingPlanOUTDTO> trainingPlans;

                this->trainingPlanService->getAll(trainingPlans);

                this->trainingPlanView.printTrainingPlans(trainingPlans);
            }
                break;

            default:
                break;
        }

    } while (op != 0);
}

void Controller::runMatriculas() {

    int op = -1;

    do {
        op = this->view.menuMatriculas();

        switch (op) {
            case 1: {
                try {
                    MatriculaINDTO matricula = this->matriculaView.getMatricula();

                    this->matriculaService->add(matricula);

                } catch (InvalidDataException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (DuplicatedDataException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (DataConsistencyException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (exception& e) {
                    string str("Unknown exception");
                    this->view.printMessage(&str);
                }
            }
                break;

            case 2: {
                try {
                    MatriculaStudentPlansOUTDTO dto;

                    int studentId = Utils::getNumber("Enter Student Id");

                    this->matriculaService->get(studentId, dto);

                    this->matriculaView.printMatricula(&dto);

                } catch (NotFoundException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (exception& e) {
                    string str("Unknown exception");
                    this->view.printMessage(&str);
                }
            }
                break;

            case 3: {
                try {
                    MatriculaOUTDTO matricula;

                    int studentId = Utils::getNumber("Enter Student Id");
                    int trainingPlanId = Utils::getNumber("Enter Training Plan Id");

                    this->matriculaService->remove(studentId, trainingPlanId, matricula);

                    this->matriculaView.printMatricula(&matricula);

                } catch (NotFoundException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (exception& e) {
                    string str("Unknown exception");
                    this->view.printMessage(&str);
                }
            }
                break;

            case 4: {
                list<MatriculaOUTDTO> matriculas;

                this->matriculaService->getAll(matriculas);

                this->matriculaView.printMatriculas(matriculas);
            }
                break;

            case 5: {
                try {
                    MatriculaTrainingPlanStudentsOUTDTO dto;

                    int trainingPlanId = Utils::getNumber("Enter Training Plan Id");

                    this->matriculaService->getTrainingPlanStudents(trainingPlanId, dto);

                    this->matriculaView.printMatricula(&dto);

                } catch (NotFoundException& e) {
                    string str(e.what());
                    this->view.printMessage(&str);

                } catch (exception& e) {
                    string str("Unknown exception");
                    this->view.printMessage(&str);
                }
            }
                break;

            default:
                break;
        }

    } while (op != 0);
}