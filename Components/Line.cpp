//
// Created by e.kravchenko on 15.03.2021.
//

#include "Line.h"
#include "../Utils.h"
Line::Line(int x1, int y1, int x2, int y2, Color c, bool active) {
    startX = x1;
    startY = y1;
    endX = x2;
    endY = y2;
    color = c;
    setActive(active);
}

void Line::setStartPoint(int x, int y) {
    startX = x;
    startY = y;
}

void Line::setEndPoint(int x, int y) {
    endX = x;
    endY = y;
}

void Line::setColor(Color col) {
    color = col;
}

string Line::getShortInfo() const {
    return Utils::repeatStr(getHierarchyLevel(), "\t") +
                 "Line{startPoint = (" + to_string(startX) + ", " + to_string(startY) +
                  "), endPoint = (" + to_string(endX) + ", " + to_string(endY) +
                  "), color = " + Utils::getColorString(color)
                  +", "
                   "active = " + to_string(isActive()) +  "}";
}
