//
// Created by Valera on 08.06.2020.
//
#ifndef RPM_LABA_6_TRIANGLE_H
#define RPM_LABA_6_TRIANGLE_H

#include "fig.h"
#include <cmath>
#include <iostream>
using namespace std;

class Triangle: public Fig
{
public:
    float x1;
    float y1;
    float x2;
    float y2;
    float x3;
    float y3;
    Triangle()
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
    }
    float Area()
    {
        float a = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
        float b = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
        float c = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
        float s = (a+b+c)/2;
        return sqrt(s*(s-a)*(s-b)*(s-c));
    }
    void show () {
        cout << "x1 - " << x1 << endl;
        cout << "y1 - " << y1 << endl;
        cout << "x2 - " << x2 << endl;
        cout << "y2 - " << y2 << endl;
        cout << "x3 - " << x3 << endl;
        cout << "y3 - " << y3 << endl;
    }
    void move ()
    {
        int x_move, y_move;
        cout << "Введите смещение по x" << endl;
        cin >> x_move;
        cout << "Введите смещение по y" << endl;
        cin >> y_move;
        x1+=x_move;
        x2+=x_move;
        x3+=x_move;
        y1+=y_move;
        y2+=y_move;
        y3+=y_move;
    }
};

#endif //RPM_LABA_6_TRIANGLE_H
