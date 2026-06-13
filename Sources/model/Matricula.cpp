#include "Matricula.h"

#include <stdexcept>

using namespace std;

Matricula::Matricula(
    int id,
    Student *student,
    TrainingPlan *trainingPlan,
    int day,
    int month,
    int year
) : id(id), student(student), trainingPlan(trainingPlan) {

    if (student == nullptr) {
        throw invalid_argument("Invalid student.");
    }

    if (trainingPlan == nullptr) {
        throw invalid_argument("Invalid training plan.");
    }

    if (!isDateValid(day, month, year)) {
        throw invalid_argument("Invalid matricula date.");
    }

    this->day = day;
    this->month = month;
    this->year = year;
}

Matricula::Matricula(const Matricula& other)
    : id(other.id),
      day(other.day),
      month(other.month),
      year(other.year),
      student(other.student),
      trainingPlan(other.trainingPlan) {
}

bool Matricula::isDateValid(int day, int month, int year) const {
    return day >= 1 && day <= 31 &&
           month >= 1 && month <= 12 &&
           year >= 1900;
}

int Matricula::getId() const {
    return id;
}

int Matricula::getDay() const {
    return day;
}

int Matricula::getMonth() const {
    return month;
}

int Matricula::getYear() const {
    return year;
}

Student* Matricula::getStudent() const {
    return student;
}

TrainingPlan* Matricula::getTrainingPlan() const {
    return trainingPlan;
}

bool Matricula::operator==(const Matricula& other) const {
    return this->id == other.id;
}

bool Matricula::operator==(int id) const {
    return this->id == id;
}

bool Matricula::hasStudent(Student *student) const {
    return this->student == student;
}

bool Matricula::hasTrainingPlan(TrainingPlan *trainingPlan) const {
    return this->trainingPlan == trainingPlan;
}

bool Matricula::hasStudentAndTrainingPlan(Student *student, TrainingPlan *trainingPlan) const {
    return hasStudent(student) && hasTrainingPlan(trainingPlan);
}
