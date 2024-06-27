//CH - 230 - A
//a11.p1.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include <iostream>
#include "Box.h"
int main() {
	int n;
	//reads from the keyboard
	std::cout << "enter the number of boxes: ";
	std::cin >> n; 

	Box* numBox;
	//allocates memory
	numBox = new Box[2 * n];

	double height, width, depth;
	//inputs parameters for the boxes
	for (int i = 0; i < n; i++) {
		std::cin >> height;
		numBox[i].setHeight(height);
		std::cin >> width;
		numBox[i].setWidth(width);
		std::cin >> depth;
		numBox[i].setDepth(depth);
		numBox[i + n] = numBox[i];
	} 
	//calculats and prints volumes
	for (int i = 0; i < 2 * n; i++) {
		numBox[i].printVolume();
	} 

	// releases memory
	delete[] numBox; 

	return 0;
}