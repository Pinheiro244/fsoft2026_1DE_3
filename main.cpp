#include <iostream>

#include "headers/repo/SchoolMemoryRepository.h"

#include "headers/service/StudentService.h"
#include "headers/service/TrainingPlanService.h"
#include "headers/service/MatriculaService.h"

#include "headers/controller/controller.h"

using namespace std;

int main() {

    SchoolMemoryRepository repo;

    StudentService studentService(&repo);
    TrainingPlanService trainingPlanService(&repo);
    MatriculaService matriculaService(&repo);

    Controller controller(
        &studentService,
        &trainingPlanService,
        &matriculaService
    );

    controller.run();

    return 0;
}