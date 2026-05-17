#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {

private:
    double weight;
    double height;
    string objective;

    bool isWeightValid(double weight) const;
    bool isHeightValid(double height) const;
    bool isObjectiveValid(const string& objective) const;

public:
    Student(
        int id,
        const string& name,
        const string& phoneNumber,
        const string& email,
        double weight,
        double height,
        const string& objective
    );

    Student(const Student& other);

    ~Student() override = default;

    double getWeight() const;
    double getHeight() const;
    string getObjective() const;

    void setWeight(double weight);
    void setHeight(double height);
    void setObjective(const string& objective);
};

#endif