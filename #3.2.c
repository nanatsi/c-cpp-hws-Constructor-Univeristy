//CH - 230 - A
// a3.p2.c
//Nana Tsignadze
//ntsignadze@Constructor - university.de
#include<stdio.h>

int main() {
	char ch; //declaring variables
	int n;

	scanf("%c", &ch);  //reads from the keyboard

	scanf("%d", &n); 

	int y; //additional variable
	
	for (y = 0; y <= n; y++) {  
		printf("%c\n", (char)((int)ch - y)); //turned 'ch' into integer then 
		                                     //the difference into char
	}
	return 0;
	
}
