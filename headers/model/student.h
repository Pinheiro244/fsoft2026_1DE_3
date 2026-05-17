#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {

public:
    Student(
        int id,
        const string& name,
        const string& phoneNumber,
        const string& email
    );

    Student(const Student& other);

    ~Student() override = default;
};

#endif






#include "Student.h"

Student::Student(
    int id,
    const string& name,
    const string& phoneNumber,
    const string& email
) : Person(id, name, phoneNumber, email) {
}

Student::Student(const Student& other)
    : Person(other) {
}

#endif
#endif