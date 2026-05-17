#include "Student.h"

#include <stdexcept>

Student::Student(
    int id,
    const string& name,
    const string& phoneNumber,
    const string& email,
    double weight,
    double height,
    const string& objective
) : Person(id, name, phoneNumber, email) {

    setWeight(weight);
    setHeight(height);
    setObjective(objective);
}

Student::Student(const Student& other)
    : Person(other),
      weight(other.weight),
      height(other.height),
      objective(other.objective) {
}

bool Student::isWeightValid(double weight) const {
    return weight > 0;
}

bool Student::isHeightValid(double height) const {
    return height > 0;
}

bool Student::isObjectiveValid(const string& objective) const {
    return objective.length() >= 3;
}

double Student::getWeight() const {
    return weight;
}

double Student::getHeight() const {
    return height;
}

string Student::getObjective() const {
    return objective;
}

void Student::setWeight(double weight) {

    if (!isWeightValid(weight)) {
        throw invalid_argument("Invalid weight.");
    }

    this->weight = weight;
}

void Student::setHeight(double height) {

    if (!isHeightValid(height)) {
        throw invalid_argument("Invalid height.");
    }

    this->height = height;
}

void Student::setObjective(const string& objective) {

    if (!isObjectiveValid(objective)) {
        throw invalid_argument("Invalid objective.");
    }

    this->objective = objective;
}