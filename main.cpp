#include <iostream>
#include "Components/Window.h"
#include <list>
#include "Components/Label.h"
#include "Components/Button.h"
#include "Components/ListView.h"
#include "Components/Panel.h"
#include "Components/Line.h"
#include "UI/Controller.h"

using namespace std;

int main() {
    /*Window w(10, 10, "wadsg");
    w.addComponent(new Label(10, 10, 10, 10, true, "asffa"));
    w.addComponent(new Button(10, 10, 10, 10, false, "hello button", &printHello));
    w.addComponent(new ListView<int> (30,30,30,30, true, list<int>{1,2,3}));
    w.addComponent(new WindowComponent(10,10,10,30, true));
    Panel* panel = new Panel(30, 30, 30, 30, true);
    w.addComponent(panel);
    panel->addComponent(new Label(10, 10, 10, 10, true, "asffa"));
    panel->addComponent(new Button(10, 10, 10, 10, false,"hello button", &printHello));
    panel->addComponent(new ListView<int> (30,30,30,30, true, list<int>{1,2,3}));
    panel->addComponent(new WindowComponent(10,10,10,30, true));
    Panel* panel1 = new Panel(30, 30, 30, 30, true);
    panel->addComponent(panel1);
    Line* line = new Line(30, 30, 40, 40, Color(RED), true);
    panel1->addComponent(line);
    w.addComponent(new Line(40, 50, 60, 70, Color(WHITE), false));
    cout<<w.getInfo();*/

    Controller::runApp();
}