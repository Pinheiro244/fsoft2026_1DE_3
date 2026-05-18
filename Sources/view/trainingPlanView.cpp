#include "TrainingPlanView.h"

#include <iostream>
#include "Utils.h"

using namespace std;

TrainingPlanINDTO TrainingPlanView::getTrainingPlan() {

    string name = Utils::getString("Enter the Training Plan Name");
    string objective = Utils::getString("Enter the Training Plan Objective");
    int durationWeeks = Utils::getNumber("Enter the Duration in Weeks");

    TrainingPlanINDTO trainingPlan(
        name,
        objective,
        durationWeeks
    );

    return trainingPlan;
}

void TrainingPlanView::printTrainingPlan(TrainingPlanOUTDTO *trainingPlan) {

    cout << endl;
    cout << "Training Plan Id: " << trainingPlan->id << endl;
    cout << "Name: " << trainingPlan->name << endl;
    cout << "Objective: " << trainingPlan->objective << endl;
    cout << "Duration Weeks: " << trainingPlan->durationWeeks << endl;
}

void TrainingPlanView::printTrainingPlans(list<TrainingPlanOUTDTO> trainingPlans) {

    for (TrainingPlanOUTDTO trainingPlan : trainingPlans) {
        printTrainingPlan(&trainingPlan);
        cout << "------------------------" << endl;
    }
}