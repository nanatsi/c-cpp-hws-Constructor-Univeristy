//CH - 230 - A
//a3.p7.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>

float product(float a, float b) {
	return a * b;
}
void productbyref(float a, float b, float* p) { //product function by reference
	*p = a * b;
	
}
void modifybyref(float* a, float* b) { //incresing variables via using pointers
	
	*a = *a + 3;
	*b = *b + 11;
	

}


int main() {
	float a;
	float b;
	float productptr; //declaration

	scanf("%f", &a);
	scanf("%f", &b); //reads from the keyboard

	printf("Product is equal to %f\n", product(a, b)); 
	productbyref(a, b, &productptr); 
	printf("Product is equal to %f\n", productptr); //shows that those two are equal
	modifybyref(&a, &b);
	printf("a changed to % f\nb changed to %f\n", a, b ); //prints increased values
	
	return 0;


}
