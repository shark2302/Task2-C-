//
// Created by e.kravchenko on 14.03.2021.
//

#ifndef TASK2_C__BUTTON_H
#define TASK2_C__BUTTON_H


#include "WindowComponent.h"
using namespace std;

class Button : public WindowComponent {
private:
    void (*_action)();
public:
    Button(int x, int y, int w, int h, bool a, void (*action)());
    void callAction();
    void setAction(void (*action)());
    virtual string getShortInfo() const;
};


#endif //TASK2_C__BUTTON_H
