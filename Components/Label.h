//
// Created by e.kravchenko on 14.03.2021.
//

#ifndef TASK2_C__LABEL_H
#define TASK2_C__LABEL_H


#include "WindowComponent.h"

class Label : public WindowComponent {
private:
    string _text;
public:
    Label(int x, int y, int w, int h, bool a, string text);
    string getText();
    void setText(string text);
    virtual string getShortInfo() const;
};


#endif //TASK2_C__LABEL_H
