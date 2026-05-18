#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

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