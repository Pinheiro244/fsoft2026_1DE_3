#include "StudentView.h"

#include <iostream>
#include "Utils.h"

using namespace std;

StudentINDTO StudentView::getStudent() {

    string name = Utils::getString("Enter the Student Name");
    string phoneNumber = Utils::getString("Enter the Student Phone Number");
    string email = Utils::getString("Enter the Student Email");

    StudentINDTO student(
        name,
        phoneNumber,
        email
    );

    return student;
}

void StudentView::printStudent(StudentOUTDTO *student) {

    cout << endl;
    cout << "Student Id: " << student->id << endl;
    cout << "Name: " << student->name << endl;
    cout << "Phone Number: " << student->phoneNumber << endl;
    cout << "Email: " << student->email << endl;
}

void StudentView::printStudents(list<StudentOUTDTO> students) {

    for (StudentOUTDTO student : students) {
        printStudent(&student);
        cout << "------------------------" << endl;
    }
}