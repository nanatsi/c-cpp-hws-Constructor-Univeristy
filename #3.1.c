//CH - 230 - A
//a3.p3.c
// Nana Tsignadze
//ntsignadze@constructor - university.de


#include<stdio.h>

int main() {

	float x; //declaring variables
	int n;
	int i = 1;

	scanf("%f", &x);
	scanf("%d", &n); //reads them from the keyboard
	

	while (n<=0) {       
     printf("Input is invalid, reenter value\n");  //scanf untill value is invalid		
		scanf("%d", &n);
	}
    
	while (i<=n){
	printf("%f\n", x);  //required action 
	i++;
	}

	return 0;
      

}
