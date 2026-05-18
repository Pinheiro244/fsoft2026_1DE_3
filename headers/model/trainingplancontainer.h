#ifndef TRAININGPLANCONTAINER_H
#define TRAININGPLANCONTAINER_H

#include <list>
#include <string>
#include "trainingplan.h"

using namespace std;

class TrainingPlanContainer {

private:
    list<TrainingPlan*> trainingPlans;

    TrainingPlan* search(int id) const;

public:
    TrainingPlanContainer() = default;

    ~TrainingPlanContainer();

    void add(
        int id,
        const string& name,
        const string& objective,
        int durationWeeks
    );

    TrainingPlan* get(int id) const;

    list<TrainingPlan*> getAll() const;

    TrainingPlan* remove(int id);
};

#endif