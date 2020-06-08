//
// Created by Valera on 08.06.2020.
//
#ifndef RPM_LABA_6_START_H
#define RPM_LABA_6_START_H

#include <iostream>
#include "triangle.h"
#include "pentagon.h"
#include "compare.h"
#include "menu.h"
#include "factory.h"


using namespace std;

TFactory* tfactory = new TFactory;
PFactory* pfactory = new PFactory;
int create()
{
    Fig *t = nullptr; // пустой указатель
    Fig *p = nullptr;
    cout << "(1) Создать Треугольник первой фигурой" << endl;
    cout << "(2) Создать Пентагон первой фигурой" << endl;
    int c;
    cin >> c;
    switch (c)
    {
        case 1:
            t=(tfactory->createFig());
            cout << t->Area() << endl;
            break;
        case 2:
            t=(pfactory->createFig());
            cout << t->Area() << endl;
            break;
        default:
            break;
    }
    cout << "(1) Создать Треугольник второй фигурой" << endl;
    cout << "(2) Создать Пентагон второй фигурой" << endl;
    int d;
    cin >> d;
    switch (d)
    {
        case 1:
            p=(tfactory->createFig());
            cout << p->Area() << endl;
            break;
        case 2:
            p=(pfactory->createFig());
            cout << p->Area() << endl;
            break;
        default:
            break;
    }
    menu(t, p);
    return 0;
}

#endif //RPM_LABA_6_START_H

