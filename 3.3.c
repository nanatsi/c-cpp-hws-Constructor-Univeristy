//CH - 230 - A
//a3.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>

float convert(int cm) //creating a function
{

	return ((float)cm / 100000);
}

int main() {
	int cm; //declaring a variable
	scanf("%d", &cm); //reads it from the keyboard
   
	printf("Result of conversion: %f\n", convert(cm)); //prints the return
	
	return 0;
}
