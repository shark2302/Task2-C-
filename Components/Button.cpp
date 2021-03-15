//
// Created by e.kravchenko on 14.03.2021.
//

#include "Button.h"
#include "../Utils.h"
Button::Button(int x, int y, int w, int h, bool a, void (*action)()) : WindowComponent(x, y, w, h, a) {
    _action = action;
}

void Button::callAction() {
    if(isActive())
        _action();
}

void Button::setAction(void (*action)()) {
    _action = action;
}
string Button::getShortInfo() const {
    string activeIfno = isActive() ? "active" : "inactive";
    return Utils::repeatStr(getHierarchyLevel(), "\t") + "Button(" + activeIfno + ")";
}