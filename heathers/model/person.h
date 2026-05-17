#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person {

private:
    int id;
    string name;
    string phoneNumber;
    string email;

    bool isNameValid(const string& name) const;
    bool isPhoneNumberValid(const string& phoneNumber) const;
    bool isEmailValid(const string& email) const;

public:
    Person(
        int id,
        const string& name,
        const string& phoneNumber,
        const string& email
    );

    Person(const Person& other);

    virtual ~Person() = default;

    int getId() const;

    string getName() const;
    string getPhoneNumber() const;
    string getEmail() const;

    void setName(const string& name);
    void setPhoneNumber(const string& phoneNumber);
    void setEmail(const string& email);

    bool operator==(const Person& other) const;
    bool operator==(int id) const;
};

#endif














#endif //FSOFT2026_1DE_3_PERSON_H