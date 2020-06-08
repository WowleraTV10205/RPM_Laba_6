//
// Created by Valera on 08.06.2020.
//
#ifndef RPM_LABA_6_PENTAGON_H
#define RPM_LABA_6_PENTAGON_H

#include "fig.h"
#include <cmath>
#include <iostream>


using namespace std;

class Pentagon: public Fig
{
public:
    float x1;
    float y1;
    float x2;
    float y2;
    float x3;
    float y3;
    float x4;
    float y4;
    float x5;
    float y5;
    Pentagon()
    {
        cout << "Введите x1" << endl;
        cin >> x1;
        cout << "Введите y1" << endl;
        cin >> y1;
        cout << "Введите x2" << endl;
        cin >> x2;
        cout << "Введите y2" << endl;
        cin >> y2;
        cout << "Введите x3" << endl;
        cin >> x3;
        cout << "Введите y3" << endl;
        cin >> y3;
        cout << "Введите x4" << endl;
        cin >> x4;
        cout << "Введите y4" << endl;
        cin >> y4;
        cout << "Введите x5" << endl;
        cin >> x5;
        cout << "Введите y5" << endl;
        cin >> y5;
    }
    float Area()
    {
        float s = abs((x1-x2)*(y1+y2)+(x2-x3)*(y2+y3)+(x3-x4)*(y3+y4)+(x4-x5)*(y4+y5)+(x5-x1)*(y5+y1))/2;
        return s;
    }
    void show () {
        cout << "x1 - " << x1 << endl;
        cout << "y1 - " << y1 << endl;
        cout << "x2 - " << x2 << endl;
        cout << "y2 - " << y2 << endl;
        cout << "x3 - " << x3 << endl;
        cout << "y3 - " << y3 << endl;
        cout << "x4 - " << x4 << endl;
        cout << "y4 - " << y4 << endl;
        cout << "x5 - " << x5 << endl;
        cout << "y5 - " << y5 << endl;
    }
    void move()
    {
        float x_move, y_move;
        cout << "Введите смещение по x" << endl;
        cin >> x_move;
        cout << "Введите смещение по y" << endl;
        cin >> y_move;
        x1+=x_move;
        x2+=x_move;
        x3+=x_move;
        x4+=x_move;
        x5+=x_move;
        y1+=y_move;
        y2+=y_move;
        y3+=y_move;
        y4+=y_move;
        y5+=y_move;
    }
};
#endif //RPM_LABA_6_PENTAGON_H
