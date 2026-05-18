#ifndef TRAININGPLANVIEW_H
#define TRAININGPLANVIEW_H

#include <list>

#include "../dto/TrainingPlanINDTO.h"
#include "../dto/TrainingPlanOUTDTO.h"

using namespace std;

class TrainingPlanView {

public:
    TrainingPlanINDTO getTrainingPlan();

    void printTrainingPlan(TrainingPlanOUTDTO *trainingPlan);

    void printTrainingPlans(list<TrainingPlanOUTDTO> trainingPlans);
};

#endif