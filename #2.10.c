//CH - 230 - A
// a2.p10.c 
//Nana Tsignadze
//ntsignadze@Constructor - university.de

#include<stdio.h>

int main() {

	int n;  //declaring the variable
	scanf("%d", &n); //read the variable from the keyboard
	
    while ( n<=0) {
    	
    	scanf("%d", &n); //made sure that user's input is valid
	}
	int a = 1;
	int b = 2; //two additional integers to print the results in order
	printf("%d day =%d hours\n", a, a*24);
	

	    
		while (b <= n) {
			
			

			printf("%d days = %d hours\n", b, b*24);
			b++;
		}
	return 0;
}
