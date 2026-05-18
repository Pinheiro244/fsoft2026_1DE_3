#ifndef MATRICULA_H
#define MATRICULA_H

#include "student.h"
#include "trainingplan.h"

class Matricula {

private:
    int id;
    int day;
    int month;
    int year;

    Student *student;
    TrainingPlan *trainingPlan;

    bool isDateValid(int day, int month, int year) const;

public:
    Matricula(
        int id,
        Student *student,
        TrainingPlan *trainingPlan,
        int day,
        int month,
        int year
    );

    Matricula(const Matricula& other);

    ~Matricula() = default;

    int getId() const;

    int getDay() const;
    int getMonth() const;
    int getYear() const;

    Student* getStudent() const;
    TrainingPlan* getTrainingPlan() const;

    bool operator==(const Matricula& other) const;
    bool operator==(int id) const;

    bool hasStudent(int studentId) const;
    bool hasTrainingPlan(int trainingPlanId) const;
    bool hasStudentAndTrainingPlan(int studentId, int trainingPlanId) const;
};

#endif