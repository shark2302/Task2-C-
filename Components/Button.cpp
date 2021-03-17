//
// Created by e.kravchenko on 14.03.2021.
//

#include "Button.h"
#include "../Utils.h"
Button::Button(int x, int y, int w, int h, bool a, string t, void (*action)()) : WindowComponent(x, y, w, h, a) {
    text = t;
    _action = action;
}

void Button::setText(string newText) {
    text = newText;
}

void Button::callAction() {
    if(isActive())
        _action();
}

void Button::setAction(void (*action)()) {
    _action = action;
}

string Button::getShortInfo() const {
    return "Button{pos = (" + to_string(getX()) + ", " + to_string(getY()) +
           "), size = (" + to_string(getWidth()) + " x " + to_string(getHeight()) +
           "), text = " + text
           +", "
            "active = " + to_string(isActive()) +  "}";
}

string Button::getInfo() const {
    return "Button :\n\tPos: (" + to_string(getX()) + ", " + to_string(getY()) + ")\n\tSize: "
           + to_string(getWidth()) + "x" + to_string(getHeight()) + "\n\tActive: " + to_string(isActive())
           + "\n\tButtonText: " + text;
}