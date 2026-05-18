#ifndef SCHOOL_H
#define SCHOOL_H

#include "studentcontainer.h"
#include "trainingplancontainer.h"
#include "MatriculaContainer.h"

class School {

private:
    StudentContainer studentContainer;
    TrainingPlanContainer trainingPlanContainer;
    MatriculaContainer matriculaContainer;

public:
    School() = default;

    ~School() = default;

    StudentContainer& getStudentContainer();

    TrainingPlanContainer& getTrainingPlanContainer();

    MatriculaContainer& getMatriculaContainer();
};

#endif