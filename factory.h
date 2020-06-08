//
// Created by Valera on 08.06.2020.
//
#ifndef RPM_LABA_6_FACTORY_H
#define RPM_LABA_6_FACTORY_H

#include "fig.h"
#include "triangle.h"
#include "pentagon.h"

class Factory
{
public:
    virtual Fig* createFig() = 0;
    virtual ~Factory() = default;
};
class TFactory: public Factory
{
public:
    Fig* createFig() {
        return new Triangle;
    }
};

class PFactory: public Factory
{
public:
    Fig* createFig() {
        return new Pentagon;
    }
};


#endif //RPM_LABA_6_FACTORY_H
