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

Matricula* MatriculaContainer::search(int studentId, int trainingPlanId) const {

    for (Matricula* matricula : matriculas) {

        if (matricula->hasStudentAndTrainingPlan(studentId, trainingPlanId)) {
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

    if (search(student->getId(), trainingPlan->getId()) != nullptr) {
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

Matricula* MatriculaContainer::get(int studentId, int trainingPlanId) const {

    Matricula* matricula = search(studentId, trainingPlanId);

    if (matricula == nullptr) {
        throw NotFoundException(
            "Student: " + to_string(studentId) +
            " Training Plan: " +
            to_string(trainingPlanId)
        );
    }

    return matricula;
}

list<Matricula*> MatriculaContainer::getAll() const {
    return matriculas;
}

list<Matricula*> MatriculaContainer::getByStudent(int studentId) const {

    list<Matricula*> result;

    for (Matricula* matricula : matriculas) {

        if (matricula->hasStudent(studentId)) {
            result.push_back(matricula);
        }
    }

    return result;
}

list<Matricula*> MatriculaContainer::getByTrainingPlan(int trainingPlanId) const {

    list<Matricula*> result;

    for (Matricula* matricula : matriculas) {

        if (matricula->hasTrainingPlan(trainingPlanId)) {
            result.push_back(matricula);
        }
    }

    return result;
}

Matricula* MatriculaContainer::remove(int studentId, int trainingPlanId) {

    for (auto it = matriculas.begin(); it != matriculas.end(); ++it) {

        if ((*it)->hasStudentAndTrainingPlan(studentId, trainingPlanId)) {

            Matricula* matricula = *it;

            matriculas.erase(it);

            return matricula;
        }
    }

    throw NotFoundException(
        "Student: " + to_string(studentId) +
        " Training Plan: " +
        to_string(trainingPlanId)
    );
}