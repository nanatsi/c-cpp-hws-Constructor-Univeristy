//CH - 230 - A
//a3.p5.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>

void print_triangle(char c, int n) {
	int i;
	int k;
	for (i = n; i > 0; i--) {
	//this loop is for the amount of columns
		for (k = i; k > 0; k--) {
	//char numbers in each columns
		printf("%c", c);
		
		} 
		printf("\n");
	}

}

int main() {
	char c;
	int n;
	scanf("%d", &n); 
	//reads integer
	scanf(" %c", &c);
	//reads char
	print_triangle(c, n);
	//uses function
	return 0;
}

