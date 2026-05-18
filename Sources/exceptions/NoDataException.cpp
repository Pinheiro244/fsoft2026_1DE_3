#include "NoDataException.h"

NoDataException::NoDataException(const string& message)
    : ApplicationException("No data found. " + message) {
}