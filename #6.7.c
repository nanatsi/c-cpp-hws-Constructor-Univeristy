//CH - 230 - A
//a6.p7.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>

char set3bits(unsigned char set, int a, int b, int c) {
	
	//shifts '1'"s binary representation by
	//the integer we entered and then
	//combines that bit with set
	set |= (1 << a);
	set |= (1 << b);
	set |= (1 << c);

	return set;
	
}

int main() {

	unsigned char set;
	int a, b, c, i;
	//reads char
	scanf("%c%d%d%d", &set, &a, &b, &c);
	//prints the decimal representation
	printf("The decimal representation is: %d\n", set);

	unsigned char set3 = set;

	printf("The binary representation is: ");

	for (i = 0; i < 8; i++) {
		
		
		printf("%d", (set & (1 << 7)) >> 7);
		
		// example: 00000001 << 7 equals 10000000
        //y******* & 10000000 = y0000000
        //y0000000 >> 7 shifts everything to y
        //and prints it
		
		set <<= 1;
	}
	
	printf("\nAfter setting the bits: ");

	set3 = set3bits(set3, a, b, c);
	
	//uses our function
	for (i = 0; i < 8; i++) {
		
		printf("%d", (set3 & (1 << 7)) >> 7);

		set3 <<= 1;
	}

	printf("\n");

	return 0;
}
