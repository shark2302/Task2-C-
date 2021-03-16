#include <ios>
#include "WindowComponent.h"
#include <list>

//
// Created by e.kravchenko on 11.03.2021.
//
using namespace std;
#ifndef TASK2_C__WINDOW_H
#define TASK2_C__WINDOW_H


class Window {
private:
    int width,
        height;
    string name;
    list <WindowComponent*> components;
public:
    Window(int, int, string);
    string getInfo();
    void addComponent(WindowComponent* component);
    list<WindowComponent*> getComponents();
};


#endif //TASK2_C__WINDOW_H
