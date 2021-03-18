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
   string res = "Panel{pos = (" + to_string(getX()) + ", " + to_string(getY()) +
           "), size = (" + to_string(getWidth()) + " x " + to_string(getHeight()) +
           "), componentsCount = " + to_string(components.size())
           +", "
            "active = " + to_string(isActive()) +  "} :\n";
    int i = 1;
    for(auto & component : components)
    {
        res += Utils::repeatStr(component->getHierarchyLevel(), "\t") + to_string(i) + ") " + component->getShortInfo() + "\n";
        i++;
    }

    res.pop_back();
    return res;
}

string Panel::getInfo() const {
    string res = "Panel :\n\tPos: (" + to_string(getX()) + ", " + to_string(getY()) + ")\n\tSize: "
           + to_string(getWidth()) + "x" + to_string(getHeight()) + "\n\tActive: " + to_string(isActive())
           + "\n\tComponents:\n";
    int i = 1;
    for(auto & component : components)
    {
        res += "\t" + to_string(i) + ") " + component->getShortInfo() + "\n";
        i++;
    }
    return res;
}

Panel::~Panel() {
    for(auto comp : components) {
        delete comp;
    }
}