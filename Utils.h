//
// Created by e.kravchenko on 14.03.2021.
//

#ifndef TASK2_C__UTILS_H
#define TASK2_C__UTILS_H
#endif //TASK2_C__UTILS_H

#include <string>
#include <iostream>
#include "Components/Line.h"

using namespace std;

class Utils {
public:

    static string repeatStr(int n, string data);

    static string getColorString(Color color);

    static int getIntValueFromConsole(const string& instruction, const string& error);

    static int getIntValueFromConsoleInBounds(const string& instruction, const string& error, int from, int to);
};
