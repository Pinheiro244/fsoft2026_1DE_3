#include "Utils.h"

#include <iostream>
#include <limits>

using namespace std;

int Utils::getNumber(const string& message) {

    int number;

    cout << message << ": ";
    cin >> number;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return number;
}

string Utils::getString(const string& message) {

    string str;

    cout << message << ": ";
    getline(cin, str);

    return str;
}