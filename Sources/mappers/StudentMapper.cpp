#include "StudentMapper.h"

void StudentMapper::model2DTO(Student* student, StudentOUTDTO& dto) {

    dto.id = student->getId();
    dto.name = student->getName();
    dto.phoneNumber = student->getPhoneNumber();
    dto.email = student->getEmail();
}

void StudentMapper::listModel2listDTO(
    list<Student*> students,
    list<StudentOUTDTO>& dtos
) {

    for (Student* student : students) {

        StudentOUTDTO dto;

        model2DTO(student, dto);

        dtos.push_back(dto);
    }
}