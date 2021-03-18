//
// Created by e.kravchenko on 11.03.2021.
//
#include <string>
#include <utility>
#include <list>
#include "Window.h"
#include "../Utils.h"
using namespace std;

Window::Window(int w, int h, string n){
    width = w;
    height = h;
    name = std::move(n);
    components = list<WindowComponent*>();
}

string Window::getInfo() {
    string res = "Window {name = " + name + ", size = (" + to_string(width) + " x " + to_string(height) +
                 "), componentsCount = " + to_string(components.size()) + "} :\n";
    int i = 1;
    for(auto & component : components)
    {
        res += Utils::repeatStr(component->getHierarchyLevel(), "\t") + to_string(i) + ") " + component->getShortInfo() + "\n";
        i++;
    }
    return res;
}

void Window::addComponent(WindowComponent *component) {
    components.push_back(component);
    component->setHierarchyLevel(1);
}

list<WindowComponent *> Window::getComponents() {
    return components;
}

Window::~Window() {
    for(auto comp : components) {
        delete comp;
    }
}