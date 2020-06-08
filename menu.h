//
// Created by Valera on 08.06.2020.
//
#ifndef RPM_LABA_6_MENU_H
#define RPM_LABA_6_MENU_H

#include <iostream>

using namespace std;

void menu (Fig* t, Fig* p)
{
    bool quit = false;
    while (!quit)
    {
        cout << endl;
        cout << "(1) Сравнить фигуры" << endl;
        cout << "(2) Удалить первую фигуру" << endl;
        cout << "(3) Удалить вторую фигуру" << endl;
        cout << "(4) Передвинуть первую фигуру" << endl;
        cout << "(5) Передвинуть вторую фигуру" << endl;
        cout << "(6) Показать координаты первой фигуры" << endl;
        cout << "(7) Показать координаты второй фигуры" << endl;
        cout << "(8) Выход" << endl;
        int menu;
        cin >> menu;
        switch (menu) {
            case 1:
                compare(t, p);
                break;
            case 2:
                delete t;
                cout << "Фигура удалениа!" << endl;
                break;
            case 3:
                delete p;
                cout << "Фигура удалена!" << endl;
                break;
            case 4:
                t->move();
                break;
            case 5:
                p->move();
                break;
            case 6:
                t->show();
                break;
            case 7:
                p->show();
                break;
            case 8:
                quit = true;
                cout << "А на этом все, получается!" << endl;
                break;
            default:
                break;
        }
    }
}
#endif //RPM_LABA_6_MENU_H