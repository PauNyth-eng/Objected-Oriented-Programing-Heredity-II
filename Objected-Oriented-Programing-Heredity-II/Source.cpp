#include <iostream>
#include "Rectangle.h"
#include "Square.h"



int main()
{
	auto rectangle = new Rectangle(10, 20);
	auto square = new Square(20);


	std::cout << "Circumference of rectangle: " << rectangle->Circumference() << std::endl;
	std::cout << "Content of rectangle: " << rectangle->Content() << std::endl;
	std::cout << "Circumference of square: " << square->Circumference() << std::endl;
	std::cout << "Content of square: " << square->Content() << std::endl;



	exit(EXIT_SUCCESS);
}