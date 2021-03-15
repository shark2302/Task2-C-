//
// Created by e.kravchenko on 14.03.2021.
//

#ifndef TASK2_C__UTILS_H
#define TASK2_C__UTILS_H
#endif //TASK2_C__UTILS_H

#include <string>
#include "Components/Line.h"

using namespace std;

class Utils {
public:

    static string repeatStr(int n, string data){
        string res;
        for (int i = 0; i < n; ++i) {
            res += data;
        }
        return res;
    };

    static string getColorString(Color color)
    {
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
    };
};
