#include "Person.h"

#include "InvalidDataException.h"

Person::Person(
    int id,
    const string& name,
    const string& phoneNumber,
    const string& email
) : id(id) {

    setName(name);
    setPhoneNumber(phoneNumber);
    setEmail(email);
}

Person::Person(const Person& other)
    : id(other.id),
      name(other.name),
      phoneNumber(other.phoneNumber),
      email(other.email) {
}

bool Person::isNameValid(const string& name) const {
    return name.length() >= 3;
}

bool Person::isPhoneNumberValid(const string& phoneNumber) const {
    return phoneNumber.length() == 9;
}

bool Person::isEmailValid(const string& email) const {
    return email.find('@') != string::npos;
}

int Person::getId() const {
    return id;
}

string Person::getName() const {
    return name;
}

string Person::getPhoneNumber() const {
    return phoneNumber;
}

string Person::getEmail() const {
    return email;
}

void Person::setName(const string& name) {

    if (!isNameValid(name)) {
        throw InvalidDataException("Invalid name.");
    }

    this->name = name;
}

void Person::setPhoneNumber(const string& phoneNumber) {

    if (!isPhoneNumberValid(phoneNumber)) {
        throw InvalidDataException("Invalid phone number.");
    }

    this->phoneNumber = phoneNumber;
}

void Person::setEmail(const string& email) {

    if (!isEmailValid(email)) {
        throw InvalidDataException("Invalid email.");
    }

    this->email = email;
}

bool Person::operator==(const Person& other) const {
    return this->id == other.id;
}

bool Person::operator==(int id) const {
    return this->id == id;
}
