#include "View.h"

#include <iostream>
#include "Utils.h"

using namespace std;

int View::menuSchool() {

    cout << endl;
    cout << "===== BOXING SCHOOL =====" << endl;
    cout << "1 - Students" << endl;
    cout << "2 - Training Plans" << endl;
    cout << "3 - Matriculas" << endl;
    cout << "0 - Exit" << endl;

    return Utils::getNumber("Option");
}

int View::menuStudents() {

    cout << endl;
    cout << "===== STUDENTS =====" << endl;
    cout << "1 - Add student" << endl;
    cout << "2 - Consult student" << endl;
    cout << "3 - Remove student" << endl;
    cout << "4 - Update student" << endl;
    cout << "5 - List students" << endl;
    cout << "0 - Back" << endl;

    return Utils::getNumber("Option");
}

int View::menuTrainingPlans() {

    cout << endl;
    cout << "===== TRAINING PLANS =====" << endl;
    cout << "1 - Add training plan" << endl;
    cout << "2 - Consult training plan" << endl;
    cout << "3 - Remove training plan" << endl;
    cout << "4 - Update training plan" << endl;
    cout << "5 - List training plans" << endl;
    cout << "0 - Back" << endl;

    return Utils::getNumber("Option");
}

int View::menuMatriculas() {

    cout << endl;
    cout << "===== MATRICULAS =====" << endl;
    cout << "1 - Register matricula" << endl;
    cout << "2 - Consult matriculas of student" << endl;
    cout << "3 - Remove matricula" << endl;
    cout << "4 - List matriculas" << endl;
    cout << "5 - Consult students of training plan" << endl;
    cout << "0 - Back" << endl;

    return Utils::getNumber("Option");
}

void View::printMessage(string *message) {

    cout << *message << endl;
}