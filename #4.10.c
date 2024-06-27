//CH - 230 - A
//a4.p10.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include<stdio.h>
#include<math.h>

//the following function computes all the required things

void proddivpowinv(float a, float b, 
    float* prod, float* div,
	float* pwr, float* invb) {
	*prod = a * b;
	printf("\n");
	*div = a / b;
	printf("\n");
	*pwr = pow(a, b);
	printf("\n");
	*invb = 1 / b;
	printf("\n");
	


}

int main() {
	
	float a;
	float b;

	scanf("%f", &a);
	scanf("%f", &b);
	//reads variables

	float prod;
	float div;
	float pwr; 
	float invb;
	proddivpowinv(a, b, &prod, &div, &pwr, &invb);
	printf("%f\n%f\n%f\n%f\n", prod, div, pwr, invb);
	//prints the results

	return 0;
	

}
