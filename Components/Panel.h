//
// Created by e.kravchenko on 14.03.2021.
//

#ifndef TASK2_C__PANEL_H
#define TASK2_C__PANEL_H

#include <list>
#include "WindowComponent.h"

class Panel : public WindowComponent {
private:
    list<WindowComponent*> components;
public:
    Panel(int x, int y, int w, int h, bool a);
    list<WindowComponent*> getComponents();
    void addComponent(WindowComponent* component);
    virtual string getShortInfo() const;
    virtual string getInfo() const;
};


#endif //TASK2_C__PANEL_H
