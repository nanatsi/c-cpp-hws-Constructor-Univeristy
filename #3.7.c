//CH - 230 - A
//a3.p7.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de


#include<stdio.h>

void print_form(int n, int m, char c) {
	
	int i, r; //two additional variables
	for(i=m; i<=n+m-1; i++) { //this for loop is to print n columns
                           	// starting with m till n+m-1
		for(r=1; r<=i; r++) { //kinda "increases" the 
		//amount of char in the next column by 1 
			printf("%c", c);
		}
		printf("\n"); //seperates columns
	}
        
}

int main() {
int n;
int m;
char c;  //declaration

scanf("%d", &n);
scanf("%d", &m);
scanf(" %c", &c); //reads from the keyboard

print_form(n, m, c); //uses function
return 0;
}


