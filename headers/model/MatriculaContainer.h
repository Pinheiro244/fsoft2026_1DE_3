#ifndef MATRICULACONTAINER_H
#define MATRICULACONTAINER_H

#include <list>
#include "Matricula.h"

using namespace std;

class MatriculaContainer {

private:
    list<Matricula*> matriculas;

    Matricula* search(int id) const;

    Matricula* search(int studentId, int trainingPlanId) const;

public:
    MatriculaContainer() = default;

    ~MatriculaContainer();

    void add(
        int id,
        Student *student,
        TrainingPlan *trainingPlan,
        int day,
        int month,
        int year
    );

    Matricula* get(int id) const;

    Matricula* get(int studentId, int trainingPlanId) const;

    list<Matricula*> getAll() const;

    list<Matricula*> getByStudent(int studentId) const;

    list<Matricula*> getByTrainingPlan(int trainingPlanId) const;

    Matricula* remove(int studentId, int trainingPlanId);
};

#endif