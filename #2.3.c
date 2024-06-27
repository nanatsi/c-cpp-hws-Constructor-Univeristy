

#include<stdio.h>


int main() {

	int weeks; //declaring variables
	int days; 
	int hours;

	scanf("%d", &weeks); //letting a user to input those variables
	scanf("%d", &days);
	scanf("%d", &hours);

	printf("the total number of hours:%d", weeks * 168 + days * 24 + hours); 
	
	//prints the total amount
	// of hours due to the calculation.

	return 0;


}
