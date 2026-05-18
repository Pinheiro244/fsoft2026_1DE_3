#ifndef TRAININGPLANMAPPER_H
#define TRAININGPLANMAPPER_H

#include <list>

#include "TrainingPlan.h"
#include "TrainingPlanOUTDTO.h"

using namespace std;

class TrainingPlanMapper {

public:
    static void model2DTO(
        TrainingPlan* trainingPlan,
        TrainingPlanOUTDTO& dto
    );

    static void listModel2listDTO(
        list<TrainingPlan*> trainingPlans,
        list<TrainingPlanOUTDTO>& dtos
    );
};

#endif
