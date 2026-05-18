#ifndef STUDENTOUTDTO_H
#define STUDENTOUTDTO_H

#include <string>

using namespace std;

class StudentOUTDTO {

public:
    int id;
    string name;
    string phoneNumber;
    string email;

    StudentOUTDTO() = default;

    StudentOUTDTO(
        int id,
        const string& name,
        const string& phoneNumber,
        const string& email
    ) : id(id),
        name(name),
        phoneNumber(phoneNumber),
        email(email) {
    }
};

#endif
