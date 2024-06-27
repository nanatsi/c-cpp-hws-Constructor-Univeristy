//CH - 230 - A
// a2.p8.c 
//Nana Tsignadze
//ntsignadze@Constructor - university.de

#include<stdio.h>

int main() {

	int a; //declaring the variable
	scanf("%d", &a); //reads the variable from the keyboard


	if (a % 14 != 0) {
	
     printf("The number is NOT divisible by 2 and 7\n"); 
	}
	
	
    else { 
	
	printf("The number is divisible by 2 and 7\n");
	
	
	}
	return 0; 
	
	//I wrote %14 instead of writing it seperatly by '&&' because
	// 2,7 are both simple numbers and it's literally the same
}
