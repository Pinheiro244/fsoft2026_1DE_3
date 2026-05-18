#include "TrainingPlan.h"

#include "InvalidDataException.h"

TrainingPlan::TrainingPlan(
    int id,
    const string& name,
    const string& objective,
    int durationWeeks
) : id(id) {

    setName(name);
    setObjective(objective);
    setDurationWeeks(durationWeeks);
}

TrainingPlan::TrainingPlan(const TrainingPlan& other)
    : id(other.id),
      name(other.name),
      objective(other.objective),
      durationWeeks(other.durationWeeks) {
}

bool TrainingPlan::isNameValid(const string& name) const {
    return name.length() >= 3;
}

bool TrainingPlan::isObjectiveValid(const string& objective) const {
    return objective.length() >= 3;
}

bool TrainingPlan::isDurationWeeksValid(int durationWeeks) const {
    return durationWeeks > 0;
}

int TrainingPlan::getId() const {
    return id;
}

string TrainingPlan::getName() const {
    return name;
}

string TrainingPlan::getObjective() const {
    return objective;
}

int TrainingPlan::getDurationWeeks() const {
    return durationWeeks;
}

void TrainingPlan::setName(const string& name) {

    if (!isNameValid(name)) {
        throw InvalidDataException("Invalid training plan name.");
    }

    this->name = name;
}

void TrainingPlan::setObjective(const string& objective) {

    if (!isObjectiveValid(objective)) {
        throw InvalidDataException("Invalid training plan objective.");
    }

    this->objective = objective;
}

void TrainingPlan::setDurationWeeks(int durationWeeks) {

    if (!isDurationWeeksValid(durationWeeks)) {
        throw InvalidDataException("Invalid training plan duration.");
    }

    this->durationWeeks = durationWeeks;
}

bool TrainingPlan::operator==(const TrainingPlan& other) const {
    return this->id == other.id;
}

bool TrainingPlan::operator==(int id) const {
    return this->id == id;
}