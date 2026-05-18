#include "DataConsistencyException.h"

DataConsistencyException::DataConsistencyException(const string& message)
    : ApplicationException("Data consistency error. " + message) {
}