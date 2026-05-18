#ifndef UTILS_H
#define UTILS_H

#include <string>

using namespace std;

class Utils {

public:
    static int getNumber(const string& message);

    static string getString(const string& message);
};

#endif
