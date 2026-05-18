#include "MatriculaView.h"

#include <iostream>
#include "utils.h"

using namespace std;

MatriculaINDTO MatriculaView::getMatricula() {

    int studentId = Utils::getNumber("Enter the Student Id");
    int trainingPlanId = Utils::getNumber("Enter the Training Plan Id");

    int day = Utils::getNumber("Enter the Day");
    int month = Utils::getNumber("Enter the Month");
    int year = Utils::getNumber("Enter the Year");

    DateDTO date(day, month, year);

    MatriculaINDTO matricula(
        studentId,
        trainingPlanId,
        date
    );

    return matricula;
}

void MatriculaView::printMatricula(MatriculaOUTDTO *matricula) {

    cout << endl;
    cout << "Matricula Id: " << matricula->id << endl;

    cout << "Student Id: " << matricula->studentId << endl;
    cout << "Student Name: " << matricula->studentName << endl;

    cout << "Training Plan Id: " << matricula->trainingPlanId << endl;
    cout << "Training Plan Name: " << matricula->trainingPlanName << endl;
    cout << "Training Plan Objective: " << matricula->trainingPlanObjective << endl;
    cout << "Training Plan Duration Weeks: " << matricula->trainingPlanDurationWeeks << endl;

    cout << "Date: "
         << matricula->date.day << "/"
         << matricula->date.month << "/"
         << matricula->date.year << endl;
}

void MatriculaView::printMatriculas(list<MatriculaOUTDTO> matriculas) {

    for (MatriculaOUTDTO matricula : matriculas) {
        printMatricula(&matricula);
        cout << "------------------------" << endl;
    }
}

void MatriculaView::printMatricula(MatriculaStudentPlansOUTDTO *matricula) {

    cout << endl;
    cout << "Student Id: " << matricula->studentId << endl;
    cout << "Student Name: " << matricula->studentName << endl;
    cout << "Training Plans:" << endl;

    for (string trainingPlan : matricula->trainingPlans) {
        cout << "- " << trainingPlan << endl;
    }
}

void MatriculaView::printMatricula(MatriculaTrainingPlanStudentsOUTDTO *matricula) {

    cout << endl;
    cout << "Training Plan Id: " << matricula->trainingPlanId << endl;
    cout << "Training Plan Name: " << matricula->trainingPlanName << endl;
    cout << "Students:" << endl;

    for (string student : matricula->students) {
        cout << "- " << student << endl;
    }
}