#include "ApplicationException.h"

ApplicationException::ApplicationException(const string& message) {
    this->message = message;
}

const char* ApplicationException::what() const noexcept {
    return this->message.c_str();
}