#include "studentcontainer.h"

#include "DuplicatedDataException.h"
#include "NotFoundException.h"

StudentContainer::~StudentContainer() {

    for (Student* student : students) {
        delete student;
    }

    students.clear();
}

Student* StudentContainer::search(int id) const {

    for (Student* student : students) {

        if ((*student) == id) {
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

    Student* student = search(id);

    if (student != nullptr) {
        throw DuplicatedDataException("Student: " + to_string(id));
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
        throw NotFoundException("Student: " + to_string(id));
    }

    return student;
}

list<Student*> StudentContainer::getAll() const {
    return students;
}

Student* StudentContainer::remove(int id) {

    for (auto it = students.begin(); it != students.end(); ++it) {

        if ((**it) == id) {

            Student* student = *it;

            students.erase(it);

            return student;
        }
    }

    throw NotFoundException("Student: " + to_string(id));
}