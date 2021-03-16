//
// Created by e.kravchenko on 16.03.2021.
//

#include "Utils.h"

string Utils::repeatStr(int n, string data) {
    string res;
    for (int i = 0; i < n; ++i) {
        res += data;
    }
    return res;
}

string Utils::getColorString(Color color) {
    if (color == RED)
        return "red";
    else if (color == YELLOW)
        return "yellow";
    else if (color == WHITE)
        return "white";
    else if(color == BLACK)
        return "black";
    else if(color == BLUE)
        return "blue";
    else
        return "unknown color";
}

int Utils::getIntValueFromConsole(const string& instruction, const string& error) {
    while(true) {
        cout<<instruction;
        int value;
        cin >> value;
        if (cin.fail()) {
            cout<<error<<endl;
            cin.clear();
            cin.ignore(32767, '\n');
        } else {
            cin.ignore(32767,'\n');
            return value;
        }
    }
}

int Utils::getIntValueFromConsoleInBounds(const string& instruction, const string& error, int from, int to) {
    int select = getIntValueFromConsole(instruction, error);
    while (select < from || select > to) {
        cout << error << endl;
        select = getIntValueFromConsole(instruction, error);
    }
    return select;
}

