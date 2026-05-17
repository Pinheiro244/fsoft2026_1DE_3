#ifndef APPLICATIONEXCEPTION_H
#define APPLICATIONEXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class ApplicationException : public exception {

private:
    string message;

public:
    explicit ApplicationException(const string& message);

    const char* what() const noexcept override;
};

#endif
#endif //FSOFT2026_1DE_3_APPLICATIONEXCEPTION_H