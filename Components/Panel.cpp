//
// Created by e.kravchenko on 14.03.2021.
//
#include "Panel.h"
#include "../Utils.h"
Panel::Panel(int x, int y, int w, int h, bool a) : WindowComponent(x, y, w, h, a) {
    components = list<WindowComponent*>();
}

void Panel::addComponent(WindowComponent *component) {
    components.push_back(component);
    component->setHierarchyLevel(getHierarchyLevel() + 1);
}

list<WindowComponent *> Panel::getComponents() {
    return components;
}

string Panel::getShortInfo() const {
    string activeIfno = isActive() ? "active" : "inactive";
    string res = Utils::repeatStr(getHierarchyLevel(), "\t") + "Panel(" + activeIfno+ ")\n";
    for(auto iter = components.begin(); iter != components.end(); iter++)
    {
        res += (*iter)->getShortInfo() + "\n";
    }
    return res;
}