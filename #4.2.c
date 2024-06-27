//CH - 230 - A
//a4.p2.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>


int main() {
	char x[50]; //declaring string



	fgets( x, sizeof(x), stdin); //reads array from the keyboard
	 
	
	for (int i = 0; x[i] != '\n'; i++) { 

		if (i % 2 == 1) { //in case of odds it prints with space
			
			printf(" %c\n", x[i]);
		}
		
		
		else {  //in case of even positions prints without space
			
			printf("%c\n", x[i]);
			
		}
		
	}
	return 0;
	

}
