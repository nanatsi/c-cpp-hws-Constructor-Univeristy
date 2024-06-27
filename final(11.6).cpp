//CH - 230 - A
//a11.p6.c++
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<iostream>
#include "Vector.h"

int main() {
	//defining arrays of vectors
	double components2[3] = {1, 2, 3};
	double components4[3] = {1, 3, 5};
	//declaring vector object V1 & V2
	Vector V1;
	Vector V2(3, components2);
	//declaration of a Vector V3 which copies the contents of V2 to it
	Vector V3(V2);
	//declaring vector object V4
	Vector V4(3, components4);

	//normal computation and printing
	std::cout << "V2 normal is: " << V2.norm() << std::endl << std::endl;
	//computes scalar product and shows on the screen
	std::cout << "V2 & V4 scalar product is: ";
	std::cout << V2.scal(V4) << std::endl << std::endl;
	//sum computation and printing it
	std::cout << "V2 & V4 sum is: ";
	(V2.add(V4)).print();
	std::cout << std::endl;
	//computes difference and prints on the screen
	std::cout << "Difference of V2 & V4 is: ";
	(V2.difference(V4)).print();

	return 0;
}
