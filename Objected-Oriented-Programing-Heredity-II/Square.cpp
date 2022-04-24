#include "Square.h"


Square::Square(int side)
{
	this->side = side;
}


double Square::Circumference()
{
	return (this->side * 4);
}

double Square::Content()
{
	return (this->side * this->side);
}