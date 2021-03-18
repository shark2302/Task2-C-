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

WindowComponentData WindowComponentData::readData(bool isLine) {
    int x = Utils::getIntValueFromConsole(!isLine ? "Enter x pos :" : "Enter x of startPoint :", "Incorrect data");
    int y = Utils::getIntValueFromConsole(!isLine ? "Enter y pos :" : "Enter y of startPoint :", "Incorrect data");
    int width = Utils::getIntValueFromConsoleInBounds(!isLine ? "Enter width :" : "Enter x of endPoint :", "Incorrect data", 1, 100000);
    int height = Utils::getIntValueFromConsoleInBounds(!isLine ? "Enter height :" : "Enter y of endPoint :", "Incorrect data", 1, 100000);
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
