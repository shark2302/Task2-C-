//
// Created by e.kravchenko on 11.03.2021.
//
using namespace std;
#ifndef TASK2_C__WINDOWCOMPONENT_H
#define TASK2_C__WINDOWCOMPONENT_H
#include <string>

class WindowComponent {
private:
    int posX;
    int posY;
    int width;
    int height;
    bool active;
    int hierarchyLevel;
protected:

public:
    WindowComponent(int, int, int, int, bool);
    WindowComponent();
    string getInfo() const;
    virtual string getShortInfo() const;
    bool isActive() const;
    void setActive(bool act);
    void setHierarchyLevel(int level);
    int getHierarchyLevel() const;
    int getX() const;
    int getY() const;
    int getWidth() const;
    int getHeight() const;

    int getPosX() const;

    int getPosY() const;
};


#endif //TASK2_C__WINDOWCOMPONENT_H
