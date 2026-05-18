#ifndef STUDENTCONTAINER_H
#define STUDENTCONTAINER_H

#include <list>
#include <string>
#include "student.h"

using namespace std;

class StudentContainer {

private:
    list<Student*> students;

    Student* search(int id) const;

public:
    StudentContainer() = default;

    ~StudentContainer();

    void add(
        int id,
        const string& name,
        const string& phoneNumber,
        const string& email
    );

    Student* get(int id) const;

    list<Student*> getAll() const;

    Student* remove(int id);
};

#endif