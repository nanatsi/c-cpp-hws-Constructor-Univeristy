
/*CH - 230 - A
a1 p1.[c or cpp or h]
Nana Tsignadze
ntsignadze@constructor-university.de*/



#include<stdio.h>

int main() {
	char c = 'F';
	printf("%c is %d\n", (char)((int) c + 3), (int) c + 3);
	return 0;

	//I transformed char into integer first and
	//  plussed 3 for computer to understand it in ASCII
}