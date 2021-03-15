//
// Created by e.kravchenko on 11.03.2021.
//
#include <string>
#include <utility>
#include <list>
#include "Window.h"
using namespace std;

Window::Window(int w, int h, string n){
    width = w;
    height = h;
    name = std::move(n);
    components = list<WindowComponent*>();
}

string Window::getInfo() {
    string res = "Name : " + name + "\nSize : " + to_string(height) + "x" + to_string(width) + "\nComponents: \n";
    for(auto iter = components.begin(); iter != components.end(); iter++)
    {
        res += (*iter)->getShortInfo() + "\n";
    }
    return res;
}

void Window::addComponent(WindowComponent *component) {
    components.push_back(component);
    component->setHierarchyLevel(1);
}
