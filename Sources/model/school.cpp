#include "school.h"

StudentContainer& School::getStudentContainer() {
    return this->studentContainer;
}

TrainingPlanContainer& School::getTrainingPlanContainer() {
    return this->trainingPlanContainer;
}

MatriculaContainer& School::getMatriculaContainer() {
    return this->matriculaContainer;
}