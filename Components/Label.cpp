//
// Created by e.kravchenko on 14.03.2021.
//

#include "Label.h"

#include <utility>
#include "../Utils.h"
Label::Label(int x, int y, int w, int h, bool a, string text) : WindowComponent(x, y, w, h, a) {
    _text = std::move(text);
}

string Label::getText() {
    return _text;
}

void Label::setText(string text) {
    _text = std::move(text);
}

string Label::getShortInfo() const {
        return "Label{pos = (" + to_string(getX()) + ", " + to_string(getY()) +
               "), size = (" + to_string(getWidth()) + " x " + to_string(getHeight()) +
               "), text = " + _text
               +", "
                "active = " + to_string(isActive()) +  "}";
}

string Label::getInfo() const {
    return "Label :\n\tPos: (" + to_string(getX()) + ", " + to_string(getY()) + ")\n\tSize: "
           + to_string(getWidth()) + "x" + to_string(getHeight()) + "\n\tActive: " + to_string(isActive())
           + "\n\tText: " + _text;
}