#include "TrainingPlanMapper.h"

void TrainingPlanMapper::model2DTO(
    TrainingPlan* trainingPlan,
    TrainingPlanOUTDTO& dto
) {

    dto.id = trainingPlan->getId();
    dto.name = trainingPlan->getName();
    dto.objective = trainingPlan->getObjective();
    dto.durationWeeks = trainingPlan->getDurationWeeks();
}

void TrainingPlanMapper::listModel2listDTO(
    list<TrainingPlan*> trainingPlans,
    list<TrainingPlanOUTDTO>& dtos
) {

    for (TrainingPlan* trainingPlan : trainingPlans) {

        TrainingPlanOUTDTO dto;

        model2DTO(trainingPlan, dto);

        dtos.push_back(dto);
    }
}