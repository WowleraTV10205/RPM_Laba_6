//
// Created by Valera on 08.06.2020.
//
#ifndef RPM_LABA_6_FIG_H
#define RPM_LABA_6_FIG_H

using namespace std;

class Fig {

public:
    Fig()
    {

    }
    ~Fig()
    {

    }
    virtual float Area() = 0;
    virtual void show() = 0;
    virtual void move() = 0;
};
#endif //RPM_LABA_6_FIG_H