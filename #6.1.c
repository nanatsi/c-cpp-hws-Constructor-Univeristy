#include<stdio.h>
//CH - 230 - A
//a6.p1.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#define swap(type, i,k) do { \
type shift = i; \
i = k; \
k=shift;\
} while(0)

int main() {
	//declaratioon
	int i, k;
	double j, n;
	//reads from the keyboard
	scanf("%d", &i);
	scanf("%d", &k);
	scanf("%lf", &j);
	scanf("%lf", &n);
	//swaping values 
	swap(int, i, k);
	swap(double, j, n);
	//prints after swapping
	printf("After swapping:\n");

	printf("%d\n", i);
	printf("%d\n", k);
	printf("%.6lf\n", j);
	printf("%.6lf\n", n);

	return 0;



}
