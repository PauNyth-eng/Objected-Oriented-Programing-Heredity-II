#pragma once
#include "Shape.h"
class Square :
    public Shape
{
private:
    int side;
public:
    Square(int side);
    virtual double Circumference();
    virtual double Content();
};

