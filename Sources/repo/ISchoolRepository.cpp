#include "SchoolMemoryRepository.h"

SchoolMemoryRepository::SchoolMemoryRepository() {
    this->school = new School();
}

SchoolMemoryRepository::~SchoolMemoryRepository() {
    delete this->school;
}

School* SchoolMemoryRepository::getModel() {
    return this->school;
}