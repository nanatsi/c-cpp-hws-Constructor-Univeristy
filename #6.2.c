//CH - 230 - A
//a6.p2.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
//wrote the macro
#define least_signf(chari)(chari & 1)

int main() {
	unsigned char chari;
	//reads from the keyboard
	scanf("%c", &chari);
	//converts it to decimal
	printf("The decimal representation is: %d\n", (int)chari);
	//prints the least signficant
	
	printf("The least significant bit is: %d\n", least_signf(chari));
	

	return 0;



}
