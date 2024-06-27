//CH - 230 - A
//a5.p10.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>

int count_down(int n) {
	if (n<=0) {
		return 0;
	}
	//prints n and every update of n
	printf("%d\n", n);
	count_down(n-1);
	return 0;
	
	}

int main() {
	
	int n;
	//reads an integer
	scanf("%d", &n);
	//uses a function
	count_down(n);
 

	return 0;

	
   
}
