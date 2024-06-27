
//CH - 230 - A
// a1 p3.[c or cpp or h]
//Nana Tsignadze
//ntsignadze@Constructor - university.de
#include <stdio.h>

int main() {
	float result; //The result of the division 
	int a = 5;
	float b = 13.5;
	result = a / b;
	printf("The result is %f\n", result);
	return 0;
}
//I wrote float instead of int because
//  13.5 isn't an integer and
//  that's why it was incorrect
//also the answer wasn't
//  integer and since %d stands
//  for integer variable and
//  %f for float variable, I changed it