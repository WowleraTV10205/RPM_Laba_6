//
// Created by Valera on 08.06.2020.
//
#ifndef RPM_LABA_6_COMPARE_H
#define RPM_LABA_6_COMPARE_H

#include <iostream>
#include "fig.h"

void compare(Fig *a, Fig *b)
{
    if (a->Area() > b->Area())
    {
        cout << "Первая фигура больше" << endl;
        return;
    }
    if (b->Area() > a->Area())
    {
        cout << "Вторая фигура больше" << endl;
        return;
    }
    else
    {
        cout << "Фигуры равны" << endl;
        return;
    }
};

#endif //RPM_LABA_6_COMPARE_H
