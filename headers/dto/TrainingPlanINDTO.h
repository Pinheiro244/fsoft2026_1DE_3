#ifndef TRAININGPLANINDTO_H
#define TRAININGPLANINDTO_H

#include <string>

using namespace std;

class TrainingPlanINDTO {

public:
    string name;
    string objective;
    int durationWeeks;

    TrainingPlanINDTO() = default;

    TrainingPlanINDTO(
        const string& name,
        const string& objective,
        int durationWeeks
    ) : name(name),
        objective(objective),
        durationWeeks(durationWeeks) {
    }
};

#endif
