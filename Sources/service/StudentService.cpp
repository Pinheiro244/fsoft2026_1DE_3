#include "StudentService.h"
#include "StudentMapper.h"
#include "DataConsistencyException.h"
#include "MatriculaContainer.h"

using namespace std;

StudentService::StudentService(ISchoolRepository* repo) {
    this->repo = repo;
}

void StudentService::add(const StudentINDTO& obj) {

    School* model = this->repo->getModel();

    StudentContainer& container = model->getStudentContainer();

    int id = container.getAll().size() + 1;

    container.add(
        id,
        obj.name,
        obj.phoneNumber,
        obj.email
    );
}

void StudentService::getAll(list<StudentOUTDTO>& dtos) {

    School* model = this->repo->getModel();

    StudentContainer& container = model->getStudentContainer();

    list<Student*> students = container.getAll();

    StudentMapper::listModel2listDTO(students, dtos);
}

void StudentService::get(int id, StudentOUTDTO& dto) {

    School* model = this->repo->getModel();

    StudentContainer& container = model->getStudentContainer();

    Student* student = container.get(id);

    StudentMapper::model2DTO(student, dto);
}

void StudentService::remove(int id, StudentOUTDTO& dto) {

    School *model = this->repo->getModel();

    StudentContainer& studentContainer = model->getStudentContainer();
    MatriculaContainer& matriculaContainer = model->getMatriculaContainer();

    Student *student = studentContainer.get(id);

    list<Matricula*> matriculas = matriculaContainer.getByStudent(id);

    if (matriculas.empty()) {

        student = studentContainer.remove(id);

        StudentMapper::model2DTO(student, dto);

        delete student;

    } else {

        string msg = "Student: " + to_string(id);

        throw DataConsistencyException(msg);
    }
}

void StudentService::update(int id, const StudentINDTO& obj) {

    School* model = this->repo->getModel();

    StudentContainer& container = model->getStudentContainer();

    Student* student = container.get(id);

    student->setName(obj.name);
    student->setPhoneNumber(obj.phoneNumber);
    student->setEmail(obj.email);
}