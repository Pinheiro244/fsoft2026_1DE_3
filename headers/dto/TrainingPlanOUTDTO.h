#ifndef TRAININGPLANOUTDTO_H
#define TRAININGPLANOUTDTO_H

#include <string>

using namespace std;

class TrainingPlanOUTDTO {

public:
    int id;
    string name;
    string objective;
    int durationWeeks;

    TrainingPlanOUTDTO() = default;

    TrainingPlanOUTDTO(
        int id,
        const string& name,
        const string& objective,
        int durationWeeks
    ) : id(id),
        name(name),
        objective(objective),
        durationWeeks(durationWeeks) {
    }
};

#endif
