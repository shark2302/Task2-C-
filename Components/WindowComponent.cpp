//
// Created by e.kravchenko on 11.03.2021.
//

#include "WindowComponent.h"
#include "../Utils.h"

using namespace std;

WindowComponent::WindowComponent() {

}

WindowComponent::WindowComponent(int x, int y, int w, int h, bool a) {
    posX = x;
    posY = y;
    width = w;
    height = h;
    active = a;
}

string WindowComponent::getInfo() const {
    return "Component :\n\tPos: (" + to_string(posX) + ", " + to_string(posY) + ")\n\tSize: "
    + to_string(width) + "x" + to_string(height) + "\n\tActive: " + to_string(active);
}

string WindowComponent::getShortInfo() const {
    string activeIfno = active ? "active" : "inactive";
    return Utils::repeatStr(hierarchyLevel, "\t") + "WindowComponent(" + activeIfno + ")";
}

void WindowComponent::changePos(int x, int y) {
    posX = x;
    posY = y;
}

void WindowComponent::changeSize(int w, int h) {
    width = w;
    height = h;
}

void WindowComponent::changeActive() {
    active = !active;
}

bool WindowComponent::isActive() const{
    return active;
}

void WindowComponent::setActive(bool act) {
    active = act;
}

int WindowComponent::getHierarchyLevel() const {
    return hierarchyLevel;
}

void WindowComponent::setHierarchyLevel(int level) {
    hierarchyLevel = level;
}

int WindowComponent::getX() const {
    return posX;
}

int WindowComponent::getY() const {
    return posY;
}

int WindowComponent::getWidth() const {
    return width;
}

int WindowComponent::getHeight() const {
    return height;
}




