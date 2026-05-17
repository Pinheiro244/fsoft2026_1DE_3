#include "NotFoundException.h"

NotFoundException::NotFoundException(
    const string& message
) : ApplicationException(message) {
}