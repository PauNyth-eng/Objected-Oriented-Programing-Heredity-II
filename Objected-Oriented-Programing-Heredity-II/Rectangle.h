#pragma once

#include "Shape.h"
class Rectangle : public Shape
{
private:
	int sideA;
	int sideB;
public:
	Rectangle(int sideA, int sideB);
	virtual double Content();
	virtual double Circumference();
};

