//
// Created by e.kravchenko on 15.03.2021.
//

#ifndef TASK2_C__CONTROLLER_H
#define TASK2_C__CONTROLLER_H


#include "../Components/Window.h"
#include "../Components/Label.h"
#include "WindowComponentData.h"
#include "../Components/Button.h"

class Controller {
public:
    static void runApp();
private:
    static Window* createWindow();
    static void runWindowController(Window* window);
    static WindowComponent* createComponent();
    static Label* createLabel(WindowComponentData data);
    static Button* createButton(WindowComponentData data);
    static void openControl(WindowComponent* windowComponent);
    static void buttonControl(Button* button, int select);
    static void printHelloFunc();
    static void printByeFunc();
};


#endif //TASK2_C__CONTROLLER_H
