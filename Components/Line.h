//
// Created by e.kravchenko on 15.03.2021.
//

#ifndef TASK2_C__LINE_H
#define TASK2_C__LINE_H


#include "WindowComponent.h"

enum Color
{
    RED,
    YELLOW,
    WHITE,
    BLACK,
    BLUE
};

class Line : public WindowComponent {
private:
    int startX;
    int startY;
    int endX;
    int endY;
    Color color;
public:
    Line(int x1, int y1, int x2, int y2, Color color, bool active);
    void setColor(Color color);
    void setStartPoint(int x, int y);
    void setEndPoint(int x, int y);
    virtual string getShortInfo() const;
    virtual string getInfo() const;
};


#endif //TASK2_C__LINE_H
