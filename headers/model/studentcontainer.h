//
// Created by 35196 on 17/05/2026.
//

#ifndef STUDENTCONTAINER_H
#define STUDENTCONTAINER_H

#include <list>

#include "Student.h"

using namespace std;

class StudentContainer {

private:
    list<Student> students;

    Student search(int id) const;

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

    void remove(int id);
};

#endif

#endif //FSOFT2026_1DE_3_STUDENTCONTAINER_H