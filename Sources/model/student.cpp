#include "student.h"

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