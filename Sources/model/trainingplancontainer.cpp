#include "trainingplancontainer.h"

#include "DuplicatedDataException.h"
#include "NotFoundException.h"

TrainingPlanContainer::~TrainingPlanContainer() {

    for (TrainingPlan* trainingPlan : trainingPlans) {
        delete trainingPlan;
    }

    trainingPlans.clear();
}

TrainingPlan* TrainingPlanContainer::search(int id) const {

    for (TrainingPlan* trainingPlan : trainingPlans) {

        if ((*trainingPlan) == id) {
            return trainingPlan;
        }
    }

    return nullptr;
}

void TrainingPlanContainer::add(
    int id,
    const string& name,
    const string& objective,
    int durationWeeks
) {

    TrainingPlan* trainingPlan = search(id);

    if (trainingPlan != nullptr) {
        throw DuplicatedDataException("Training Plan: " + to_string(id));
    }

    trainingPlan = new TrainingPlan(
        id,
        name,
        objective,
        durationWeeks
    );

    trainingPlans.push_back(trainingPlan);
}

TrainingPlan* TrainingPlanContainer::get(int id) const {

    TrainingPlan* trainingPlan = search(id);

    if (trainingPlan == nullptr) {
        throw NotFoundException("Training Plan: " + to_string(id));
    }

    return trainingPlan;
}

list<TrainingPlan*> TrainingPlanContainer::getAll() const {
    return trainingPlans;
}

TrainingPlan* TrainingPlanContainer::remove(int id) {

    for (auto it = trainingPlans.begin(); it != trainingPlans.end(); ++it) {

        if ((**it) == id) {

            TrainingPlan* trainingPlan = *it;

            trainingPlans.erase(it);

            return trainingPlan;
        }
    }

    throw NotFoundException("Training Plan: " + to_string(id));
}