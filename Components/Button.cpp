//
// Created by e.kravchenko on 14.03.2021.
//

#include "Button.h"
#include "../Utils.h"
Button::Button(int x, int y, int w, int h, bool a, string text, void (*action)()) : WindowComponent(x, y, w, h, a) {
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
    return Utils::repeatStr(getHierarchyLevel(), "\t") +
           "Button{pos = (" + to_string(getX()) + ", " + to_string(getY()) +
           "), size = (" + to_string(getWidth()) + " x " + to_string(getHeight()) +
           "), text = " + text
           +", "
            "active = " + to_string(isActive()) +  "}";
}