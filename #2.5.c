//CH - 230 - A
// a2.p5.c 
//Nana Tsignadze
//ntsignadze@Constructor - university.de 

#include<stdio.h>

int main() {

	int x; // declaring the variable
	scanf("%d", &x); //reads the variable from the keyboard

	int *ptr=&x;
	printf(" Address of the variable: %p\n", ptr); 
	
	//printing the adress 
	//that our pointer stored
	
	
	printf(" Value of the variable: %d\n", *ptr); 
	//printing the value
    
	*ptr = *ptr + 5;

	printf(" Address of the variable: %p\n", ptr);
	printf(" Value of the variable: %d\n", *ptr);
	
	//prints the modified values
	

	return 0;
	
}
