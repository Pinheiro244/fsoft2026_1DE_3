#ifndef TRAININGPLAN_H
#define TRAININGPLAN_H

#include <string>

using namespace std;

class TrainingPlan {

private:
    int id;
    string name;
    string objective;
    int durationWeeks;

    bool isNameValid(const string& name) const;
    bool isObjectiveValid(const string& objective) const;
    bool isDurationWeeksValid(int durationWeeks) const;

public:
    TrainingPlan(
        int id,
        const string& name,
        const string& objective,
        int durationWeeks
    );

    TrainingPlan(const TrainingPlan& other);

    ~TrainingPlan() = default;

    int getId() const;
    string getName() const;
    string getObjective() const;
    int getDurationWeeks() const;

    void setName(const string& name);
    void setObjective(const string& objective);
    void setDurationWeeks(int durationWeeks);

    bool operator==(const TrainingPlan& other) const;
    bool operator==(int id) const;
};

#endif