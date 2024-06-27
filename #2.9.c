//CH - 230 - A
// a2.p9.c 
//Nana Tsignadze
//ntsignadze@Constructor - university.de

#include<stdio.h>

int main() {
	char ch; //declaring the variable
	scanf("%c", &ch); //reads the variable from the keyboard

	if ((ch >= 'a' && ch <= 'z')|| (ch>='A' && ch<='Z')) {
		
		 printf("%c is a letter\n", ch);
	}
	
	else if ( ch>='0' && ch<='9') {
		
		printf("%c is a digit\n", ch);
	
	}
	
	else {
	
		printf("%c is some other symbol\n", ch);
	
    }  //wrote all the required conditions with it's actions
	return 0;
}
