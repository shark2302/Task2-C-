#include <iostream>
#include "Components/Window.h"
#include <list>
#include "Components/Label.h"
#include "Components/Button.h"
#include "Components/ListView.h"
#include "Components/Panel.h"
#include "Utils.h"
#include "Components/Line.h"

using namespace std;

void printHello() {
    cout<<"Hello";
}

int main() {
    Window w(10, 10, "wadsg");
    WindowComponent *array[] = {new Label(10, 10, 10, 10, true, "asffa"),
                                new Button(10, 10, 10, 10, false, &printHello),
                                new ListView<int> (30,30,30,30, true, list<int>{1,2,3})
    };
    w.addComponent(new Label(10, 10, 10, 10, true, "asffa"));
    w.addComponent(new Button(10, 10, 10, 10, false, &printHello));
    w.addComponent(new ListView<int> (30,30,30,30, true, list<int>{1,2,3}));
    w.addComponent(new WindowComponent(10,10,10,30, true));
    Panel* panel = new Panel(30, 30, 30, 30, true);
    w.addComponent(panel);
    panel->addComponent(new Label(10, 10, 10, 10, true, "asffa"));
    panel->addComponent(new Button(10, 10, 10, 10, false, &printHello));
    panel->addComponent(new ListView<int> (30,30,30,30, true, list<int>{1,2,3}));
    panel->addComponent(new WindowComponent(10,10,10,30, true));
    Panel* panel1 = new Panel(30, 30, 30, 30, true);
    panel->addComponent(panel1);
    Line* line = new Line(30, 30, 40, 40, Color(RED), true);
    panel1->addComponent(line);
    cout<<w.getInfo();
    /*Label* label;
    cout<<dynamic_cast<Label*>(array[1]);*/
}