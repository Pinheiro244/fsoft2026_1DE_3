#include "NotFoundException.h"

NotFoundException::NotFoundException(const string& message)
    : ApplicationException("Data not found. " + message) {
}