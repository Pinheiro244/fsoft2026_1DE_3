#ifndef VIEW_H
#define VIEW_H

#include <string>

using namespace std;

class View {

public:
    int menuSchool();

    int menuStudents();

    int menuTrainingPlans();

    int menuMatriculas();

    void printMessage(string *message);
};

#endif
