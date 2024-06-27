#include <stdio.h>

int main() {

	double a, b;
	scanf("%lf", &a);
	scanf("%lf", &b);
	char x, y;
	scanf(" %c", &x);
	scanf(" %c", &y);
	int c, d;
	scanf("%d", &c);
	scanf("%d", &d);

	printf("sum of the doubles= %lf\n", a + b);
	printf("differance of doubles=%lf\n", a - b);
	printf("the square=%lf\n", a * a);

	
	printf("sum of integers=%d\n", c + d);
	printf("product of integers=%d\n", c * d);

	
	printf("sum of chars=%d\n", x + y);
	printf("product of chars=%d\n", x * y);
	printf("sum of chars=%c\n", x + y);
	printf("product of chars=%c\n", x * y);


	return 0;
}