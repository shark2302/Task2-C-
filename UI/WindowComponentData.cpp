//
// Created by e.kravchenko on 15.03.2021.
//
#include "../Utils.h"
#include "WindowComponentData.h"

WindowComponentData::WindowComponentData(int posX, int posY, int w, int h, bool a) {
    x = posX;
    y = posY;
    width = w;
    height = h;
    active = a;
}

WindowComponentData WindowComponentData::readData() {
    int x = Utils::getIntValueFromConsole("Enter x pos :", "Incorrect data");
    int y = Utils::getIntValueFromConsole("Enter y pos :", "Incorrect data");
    int width = Utils::getIntValueFromConsole("Enter width :", "Incorrect data");
    int height = Utils::getIntValueFromConsole("Enter height :", "Incorrect data");
    bool a = Utils::getIntValueFromConsoleInBounds("Enter active (0 - false, 1 - true) :", "Incorrect bool value", 0, 1);
    return {x, y, width, height, a};
}

int WindowComponentData::getX() const {
    return x;
}

int WindowComponentData::getY() const {
    return y;
}

int WindowComponentData::getWidth() const {
    return width;
}

int WindowComponentData::getHeight() const {
    return height;
}

bool WindowComponentData::isActive() const {
    return active;
}
