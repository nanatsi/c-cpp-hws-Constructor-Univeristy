//CH - 230 - A
//a3.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>

double sum25(double v[], int n) {

	if (n < 6) {
		return -111; //made sure that positions are valid
	}

		return v[2] + v[5]; //computes the sum

}

int main() {
	int n;
	int k;
	double v[20]; //declaration

	scanf("%d", &n);

	for (k = 0; k < n; k++) {
		scanf("%lf", &v[k]); //scans till the 
		                     // amount of n is reached
	}

	if (n < 6) {
		printf("One or both positions are invalid\n"); //prints that the
		                                             //n<6 is invalid
	}
	else {
		printf("sum=%lf\n", sum25(v, n)); //using a function
	}
	return 0;
}

