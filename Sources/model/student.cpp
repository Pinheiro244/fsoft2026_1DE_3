#include "Student.h"

#include <stdexcept>

Student::Student(
    int id,
    const string& name,
    const string& phoneNumber,
    const string& email,
    const string& objective
) : Person(id, name, phoneNumber, email) {


    setObjective(objective);
}

Student::Student(const Student& other)
    : Person(other),
      weight(other.weight),
      height(other.height),
      objective(other.objective) {
}



bool Student::isObjectiveValid(const string& objective) const {
    return objective.length() >= 3;
}


string Student::getObjective() const {
    return objective;
}



void Student::setObjective(const string& objective) {

    if (!isObjectiveValid(objective)) {
        throw invalid_argument("Invalid objective.");
    }

    this->objective = objective;
}