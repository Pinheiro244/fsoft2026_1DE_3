
#include "StudentContainer.h"

#include <stdexcept>

StudentContainer::~StudentContainer() {

    for (Student* student : students) {
        delete student;
    }

    students.clear();
}

Student* StudentContainer::search(int id) const {

    for (Student* student : students) {

        if ((student) == id) {
            return student;
        }
    }

    return nullptr;
}

void StudentContainer::add(
    int id,
    const string& name,
    const string& phoneNumber,
    const string& email
) {

    Student student = search(id);

    if (student != nullptr) {
        throw invalid_argument("Duplicated student id.");
    }

    student = new Student(
        id,
        name,
        phoneNumber,
        email
    );

    students.push_back(student);
}

Student* StudentContainer::get(int id) const {

    Student* student = search(id);

    if (student == nullptr) {
        throw invalid_argument("Student not found.");
    }

    return student;
}

list<Student> StudentContainer::getAll() const {
    return students;
}

void StudentContainer::remove(int id) {

    for (auto it = students.begin(); it != students.end(); ++it) {

        if ((**it) == id) {

            deleteit;

            students.erase(it);

            return;
        }
    }

    throw invalid_argument("Student not found.");
}