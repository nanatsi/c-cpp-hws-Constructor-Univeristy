
//CH-230-A
//a1 p1.[c or cpp or h]
//Firstname Lastname
//myemail@constructor-university.de

#include<stdio.h>

int main() {
	double result; //declaring the variable
	result = (double)(1 + 3) / 5;
	printf("the value of 4/5 is %lf", result);
	return 0;

}
// I wrote the "(double)" in front of the result definition because
//  previously program calculated the answer in integers and 
// that's because the given operation divides integers on integers so the answer was the answer's integer part: 0.000000

//To fix that, I wrote "(double)" in front of it