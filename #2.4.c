//CH-230-A
//a2.4.c
//Nana Tsignadze
//ntsignadze@constructor-university.de


#include<stdio.h>

int main() {

	float a; //declaring the variables
	float b;
	float h;

	scanf("%f", &a); //letting a user input those variables
	scanf("%f", &b);
	scanf("%f", &h);

	printf("square area=%f\n", a*a);
	printf("rectangle area=%f\n", a * b);
	printf("triangle area=%f\n", a * h / 2);
	printf("trapezoid area=%f\n", ((a + b) / 2) * h); 
	
	 //prints all the required areas by using it's formulas

	return 0;
}
