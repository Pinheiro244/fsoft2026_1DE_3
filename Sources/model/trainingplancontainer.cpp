#include "TrainingPlanContainer.h"

#include <stdexcept>

TrainingPlanContainer::~TrainingPlanContainer() {

    for (TrainingPlan* trainingPlan : trainingPlans) {
        delete trainingPlan;
    }

    trainingPlans.clear();
}

TrainingPlan* TrainingPlanContainer::search(int id) const {

    for (TrainingPlan* trainingPlan : trainingPlans) {

        if ((trainingPlan) == id) {
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

    TrainingPlan trainingPlan = search(id);

    if (trainingPlan != nullptr) {
        throw invalid_argument("Duplicated training plan id.");
    }

    trainingPlan = new TrainingPlan(id, name, objective, durationWeeks);

    trainingPlans.push_back(trainingPlan);
}

TrainingPlan* TrainingPlanContainer::get(int id) const {

    TrainingPlan* trainingPlan = search(id);

    if (trainingPlan == nullptr) {
        throw invalid_argument("Training plan not found.");
    }

    return trainingPlan;
}

list<TrainingPlan> TrainingPlanContainer::getAll() const {
    return trainingPlans;
}

void TrainingPlanContainer::remove(int id) {

    for (auto it = trainingPlans.begin(); it != trainingPlans.end(); ++it) {

        if ((**it) == id) {
            deleteit;
            trainingPlans.erase(it);
            return;
        }
    }

    throw invalid_argument("Training plan not found.");
}