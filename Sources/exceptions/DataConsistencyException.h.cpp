#include "DataConsistencyException.h"

DataConsistencyException::DataConsistencyException(
    const string& message
) : ApplicationException(message) {
}