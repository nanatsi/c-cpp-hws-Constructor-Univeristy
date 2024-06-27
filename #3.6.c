//CH - 230 - A
//a3.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>

float to_pounds(int kg, int g) {

	return(kg * 2.2 +0.0022*g); //creating a function
}


int main() { 
	int kg; //declaring variables
	int g;
	scanf("%d", &kg);
	scanf("%d", &g);
	printf("Result of conversion: %f\n", to_pounds(kg, g)); //prints the result
	return 0;
}
