//
// Created by e.kravchenko on 14.03.2021.
//

#ifndef TASK2_C__LISTVIEW_H
#define TASK2_C__LISTVIEW_H
#include <list>
#include <iostream>
#include <type_traits>
#include "WindowComponent.h"
#include "../Utils.h"

using namespace std;

template<typename T>
class ListView : public WindowComponent{
private:
    list<T> _items;
public:

     ListView(int x, int y, int w, int h, bool a, list<T> items);

     list<T> getItems();

     void addElement(T elem);

     string getShortInfo() const override;

     string getInfo() const override;
};

template<typename T>
ListView<T>::ListView(int x, int y, int w, int h, bool a, list<T> items) : WindowComponent(x, y, w, h, a) {
    _items = items;
}

template<typename T>
list<T> ListView<T>::getItems() {
    return _items;
}

template<typename T>
string ListView<T>::getShortInfo() const {
    return Utils::repeatStr(getHierarchyLevel(), "\t") +
           "ListView{pos = (" + to_string(getX()) + ", " + to_string(getY()) +
           "), size = (" + to_string(getWidth()) + " x " + to_string(getHeight()) +
           "), elementsCount = " + to_string(_items.size())
           +", "
            "active = " + to_string(isActive()) +  "}";
}



template<typename T>
void ListView<T>::addElement(T elem) {
    _items.push_back(elem);
}

template<typename T>
string ListView<T>::getInfo() const {
    return "ListView :\n\tPos: (" + to_string(getX()) + ", " + to_string(getY()) + ")\n\tSize: "
           + to_string(getWidth()) + "x" + to_string(getHeight()) + "\n\tActive: " + to_string(isActive())
           + "\n\tElemsCount: " + to_string(_items.size());
}

#endif //TASK2_C__LISTVIEW_H
