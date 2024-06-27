//CH - 230 - A
//a5.p2.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de 

#include "Shapes.h"
#include<iostream>

int main(int argc, char** argv) {
	//declaring objects
	Circle c("first circle", 3, 4, 7);
	RegularPolygon r("TRIANGLE", 1, 1, 3);
	Rectangle M("Myrectangle", 1, 2, 3, 4);
	Square S("MySquare", 1, 2, 3);
	//prints name
	std::cout << "Here is THE Circle: ";
	c.printName();
	//then results of computations
	std::cout << "the perimeter is:  " << c.perimeter() << std::endl;
	std::cout << "the area is: " << c.area() << std::endl << std::endl;

	std::cout << "Here is THE Rectangle: ";
	//does absolutely the same
	M.printName();
	std::cout << "the perimeter is: " << M.perimeter() << std::endl;
	std::cout << "the area is: " << M.area() << std::endl << std::endl;

	std::cout << "Here is THE Square: ";
	S.printName();
	std::cout << "the perimeter is: " << S.perimeter() << std::endl;
	std::cout << "the area is: " << S.area() << std::endl << std::endl;

	return 0;

}