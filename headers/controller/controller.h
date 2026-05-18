#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../view/view.h"

#include "../view/StudentView.h"
#include "../service/StudentService.h"

#include "../view/TrainingPlanView.h"
#include "../service/TrainingPlanService.h"

#include "../view/MatriculaView.h"
#include "../service/MatriculaService.h"

class Controller {

private:
    View view;

    StudentView studentView;
    StudentService *studentService;

    TrainingPlanView trainingPlanView;
    TrainingPlanService *trainingPlanService;

    MatriculaView matriculaView;
    MatriculaService *matriculaService;

    void runStudents();
    void runTrainingPlans();
    void runMatriculas();

public:
    Controller(
        StudentService *studentService,
        TrainingPlanService *trainingPlanService,
        MatriculaService *matriculaService
    );

    void run();
};

#endif