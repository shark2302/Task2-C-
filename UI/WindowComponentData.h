//
// Created by e.kravchenko on 15.03.2021.
//

#ifndef TASK2_C__WINDOWCOMPONENTDATA_H
#define TASK2_C__WINDOWCOMPONENTDATA_H


class WindowComponentData {
private:
    int x,
        y,
        width,
        height;
    bool active;
public:
    WindowComponentData(int posX, int posY, int width, int height, bool active);

    int getX() const;

    int getY() const;

    int getWidth() const;

    int getHeight() const;

    bool isActive() const;

    static WindowComponentData readData();
};


#endif //TASK2_C__WINDOWCOMPONENTDATA_H
