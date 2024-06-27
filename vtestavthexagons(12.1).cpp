//CH - 230 - A
//a12.p1.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include<iostream>
#include"Shapes.h"
using namespace std;
int main() {
	//creates objects
	Hexagon b("1st", 2, 3, 9, "blue");
	Hexagon g("2nd", 4, 5, 15, "green");
	//2nd"s copy
	Hexagon c(g);
	//prints results of computations
	cout << "this is a perimeter of Hexagon 1st: " << b.perimeter() << endl;
	cout << "this is an area of Hexagon 1st: " << b.area() << endl << endl;
	
	cout << "this is a perimeter of Hexagon 2nd: " << g.perimeter() << endl;
	cout << "this is an area of Hexagon 2nd: " << g.area() << endl << endl;

	cout << "this is a perimeter of Hexagon 3rd: " << c.perimeter() << endl;
	cout << "this is an area of Hexagon 3rd: " << c.area() << endl << endl;

	return 0;


}