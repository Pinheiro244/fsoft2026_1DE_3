#include "MatriculaContainer.h"

#include "DuplicatedDataException.h"
#include "NotFoundException.h"

using namespace std;

MatriculaContainer::~MatriculaContainer() {

    for (Matricula* matricula : matriculas) {
        delete matricula;
    }

    matriculas.clear();
}

Matricula* MatriculaContainer::search(int id) const {

    for (Matricula* matricula : matriculas) {

        if ((*matricula) == id) {
            return matricula;
        }
    }

    return nullptr;
}

Matricula* MatriculaContainer::search(Student *student, TrainingPlan *trainingPlan) const {

    for (Matricula* matricula : matriculas) {

        if (matricula->hasStudentAndTrainingPlan(student, trainingPlan)) {
            return matricula;
        }
    }

    return nullptr;
}

void MatriculaContainer::add(
    int id,
    Student *student,
    TrainingPlan *trainingPlan,
    int day,
    int month,
    int year
) {

    if (search(id) != nullptr) {
        throw DuplicatedDataException("Matricula: " + to_string(id));
    }

    if (search(student, trainingPlan) != nullptr) {
        throw DuplicatedDataException(
            "Student " + to_string(student->getId()) +
            " already has Training Plan " +
            to_string(trainingPlan->getId())
        );
    }

    Matricula* matricula = new Matricula(
        id,
        student,
        trainingPlan,
        day,
        month,
        year
    );

    matriculas.push_back(matricula);
}

Matricula* MatriculaContainer::get(int id) const {

    Matricula* matricula = search(id);

    if (matricula == nullptr) {
        throw NotFoundException("Matricula: " + to_string(id));
    }

    return matricula;
}

Matricula* MatriculaContainer::get(Student *student, TrainingPlan *trainingPlan) const {

    Matricula* matricula = search(student, trainingPlan);

    if (matricula == nullptr) {
        throw NotFoundException(
            "Student: " + to_string(student->getId()) +
            " Training Plan: " +
            to_string(trainingPlan->getId())
        );
    }

    return matricula;
}

list<Matricula*> MatriculaContainer::getAll() const {
    return matriculas;
}

list<Matricula*> MatriculaContainer::getByStudent(Student *student) const {

    list<Matricula*> result;

    for (Matricula* matricula : matriculas) {

        if (matricula->hasStudent(student)) {
            result.push_back(matricula);
        }
    }

    return result;
}

list<Matricula*> MatriculaContainer::getByTrainingPlan(TrainingPlan *trainingPlan) const {

    list<Matricula*> result;

    for (Matricula* matricula : matriculas) {

        if (matricula->hasTrainingPlan(trainingPlan)) {
            result.push_back(matricula);
        }
    }

    return result;
}

Matricula* MatriculaContainer::remove(Student *student, TrainingPlan *trainingPlan) {

    for (auto it = matriculas.begin(); it != matriculas.end(); ++it) {

        if ((*it)->hasStudentAndTrainingPlan(student, trainingPlan)) {

            Matricula* matricula = *it;

            matriculas.erase(it);

            return matricula;
        }
    }

    throw NotFoundException(
        "Student: " + to_string(student->getId()) +
        " Training Plan: " +
        to_string(trainingPlan->getId())
    );
}