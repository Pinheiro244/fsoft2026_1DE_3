#include "InvalidDataException.h"

InvalidDataException::InvalidDataException(
    const string& message
) : ApplicationException(message) {
}