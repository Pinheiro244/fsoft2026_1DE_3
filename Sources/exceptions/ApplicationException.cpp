#include "ApplicationException.h"

ApplicationException::ApplicationException(
    const string& message
) : message(message) {
}

const char* ApplicationException::what() const noexcept {
    return message.c_str();
}
