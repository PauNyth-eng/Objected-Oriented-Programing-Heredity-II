#include "Rectangle.h"



Rectangle::Rectangle(int sideA, int sideB)
{
	this->sideA = sideA;
	this->sideB = sideB;
}

double Rectangle::Circumference()
{
	return (2 * (this->sideA + this->sideB));
}

double Rectangle::Content()
{
	return (this->sideA * this->sideB);
}