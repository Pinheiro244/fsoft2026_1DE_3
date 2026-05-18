#include "DuplicatedDataException.h"

DuplicatedDataException::DuplicatedDataException(const string& message)
    : ApplicationException("Duplicated data. " + message) {
}
