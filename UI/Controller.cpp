//
// Created by e.kravchenko on 15.03.2021.
//
#include "../Utils.h"
#include "Controller.h"


void Controller::runApp() {
    Window* window = createWindow();
    cout << window->getInfo();
    cout<<"Window created!"<<endl;
    runWindowController(window);
}

Window * Controller::createWindow() {
    cout<<"Enter window name :";
    string name;
    cin>>name;
    int width = Utils::getIntValueFromConsole("Enter window width :", "Incorrect width");
    int height = Utils::getIntValueFromConsole("Enter window height :", "Incorrect height");
    return new Window(width, height, name);
}

void Controller::runWindowController(Window* window) {
    while(true) {
        cout<<"\n\n";
        cout<<"Select action to do:"<<endl;
        cout<<"1. Show Window Info" <<endl;
        cout<<"2. Add component" <<endl;
        cout<<"3. Open window component" <<endl;
        cout<<"4. Stop app"<<endl;
        int select = Utils::getIntValueFromConsoleInBounds("Enter number 1-4 :", "Incorrect number", 1, 4);
        if(select == 1)
            cout<<window->getInfo()<<endl;
        if(select == 2)
            window->addComponent(createComponent());
        if(select == 3) {
            list<WindowComponent*> comps = window->getComponents();
            if(comps.empty())
                continue;
            cout<<window->getInfo()<<endl<<endl;
            int compIndex = Utils::getIntValueFromConsoleInBounds("Enter number of object to control :", "It's not a number or out of bounds index", 1, comps.size());
            auto iterator = comps.begin();
            advance(iterator, compIndex - 1);
            openControl(*iterator);
        }
        if(select == 4)
            break;
    }
}

WindowComponent * Controller::createComponent() {
    while(true) {
        cout<<"\n\n";
        cout<<"Select component to create:"<<endl;
        cout<<"1. Label" <<endl;
        cout<<"2. Button" <<endl;
        cout<<"3. ListView"<<endl;
        cout<<"4. Line"<<endl;
        cout<<"5. Panel"<<endl<<endl;
        int select = Utils::getIntValueFromConsoleInBounds("Enter number 1-5 :", "Incorrect number", 1, 5);
        WindowComponentData data = WindowComponentData::readData();
        if(select == 1)
            return createLabel(data);
        if(select == 2)
            return createButton(data);
    }
}

Label * Controller::createLabel(WindowComponentData data) {
    cout<<"Enter text for label :"<<endl;
    string text;
    cin>>text;
    cout<<"Label created";
    return new Label(data.getX(), data.getY(), data.getWidth(), data.getHeight(), data.isActive(), text);
}

Button * Controller::createButton(WindowComponentData data) {

    cout<<"Enter text for button :"<<endl;
    string text;
    cin>>text;

    void (*action)() = nullptr;
    cout << "\n\nSelect function:" << endl;
    cout << "1. Print hello" << endl;
    cout << "2. Print bye" << endl;
    int select = Utils::getIntValueFromConsoleInBounds("Enter number 1-2 :", "Incorrect data", 1, 2);

    if(select == 1)
        action = &printHelloFunc;
    else if(select == 2)
        action = &printByeFunc;

    cout<<"Button created";
    return new Button(data.getX(), data.getY(), data.getWidth(), data.getHeight(), data.isActive(), text, action);
}

void Controller::openControl(WindowComponent *windowComponent) {
    cout<<"\n\n";
    int maxSelect = 5;
    cout<<windowComponent->getInfo()<<endl;

    Label * label = dynamic_cast<Label *>(windowComponent);
    Button * button = dynamic_cast<Button *>(windowComponent);

    bool isLabel = label != nullptr;
    bool isButton = button != nullptr;

    if(isLabel)
        maxSelect = 6;
    if(isButton)
        maxSelect = 8;

    while(true) {
        cout << "\nSelect action to do:" << endl;
        cout << "1. Quit control" << endl;
        cout << "2. Show Component Info" << endl;
        cout << "3. Change position" << endl;
        cout << "4. Change size" << endl;
        cout << "5. Change active" << endl;
        if (isLabel)
            cout << "6. Change text" << endl;
        if(isButton) {
            cout << "6. Call action" << endl;
            cout << "7. Change button text" << endl;
            cout << "8. Change action" << endl;
        }

        int select = Utils::getIntValueFromConsoleInBounds("Enter number 1-" + to_string(maxSelect) + " :",
                                                           "Incorrect number", 1, maxSelect);
        if (select == 1)
            break;
        else if (select == 2)
            cout << windowComponent->getInfo();
        else if (select == 3) {
            int x = Utils::getIntValueFromConsole("Enter new x", "Incorrect value");
            int y = Utils::getIntValueFromConsole("Enter new y", "Incorrect value");
            windowComponent->changePos(x, y);
        } else if (select == 4) {
            int w = Utils::getIntValueFromConsole("Enter new width", "Incorrect value");
            int h = Utils::getIntValueFromConsole("Enter new height", "Incorrect value");
            windowComponent->changeSize(w, h);
        } else if (select == 5) {
            windowComponent->changeActive();
        } else if (select > 5) {

            if (isLabel) {
                string newText;
                cout << "Enter new label text :";
                cin >> newText;
                label->setText(newText);
            }

            if(isButton) {
                buttonControl(button, select);
            }
        }
    }
}

void Controller::buttonControl(Button *button, int select) {

    if(select == 6) {
        button->callAction();
    }
    if(select == 7) {
        string newText;
        cout << "Enter new button text" << endl;
        cin >> newText;
        button->setText(newText);
    }
    else if(select == 8) {
        void (*action)() = nullptr;
        cout << "\n\nSelect function:" << endl;
        cout << "1. Print hello" << endl;
        cout << "2. Print bye" << endl;
        int select = Utils::getIntValueFromConsoleInBounds("Enter number 1-2 :", "Incorrect data", 1, 2);

        if(select == 1)
            action = &printHelloFunc;
        else if(select == 2)
            action = &printByeFunc;
        button->setAction(action);
    }
}

void Controller::printHelloFunc() {
    cout<<"hello"<<endl;
}

void Controller::printByeFunc() {
    cout<<"bye"<<endl;
}
