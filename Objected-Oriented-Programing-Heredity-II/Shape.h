#pragma once
class Shape
{
private:

public:
	Shape();
protected:
	virtual double Circumference() = 0;
	virtual double Content() = 0;
};

