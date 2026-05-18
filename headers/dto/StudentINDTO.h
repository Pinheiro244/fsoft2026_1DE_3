#ifndef STUDENTINDTO_H
#define STUDENTINDTO_H

#include <string>

using namespace std;

class StudentINDTO {

public:
    string name;
    string phoneNumber;
    string email;

    StudentINDTO() = default;

    StudentINDTO(
        const string& name,
        const string& phoneNumber,
        const string& email
    ) : name(name),
        phoneNumber(phoneNumber),
        email(email) {
    }
};

#endif
