//CH - 230 - A
//a4.p1.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
#include<math.h>

int main() {

	float a, b, c;
	 //declaring variables
	scanf("%f", &a);
	scanf("%f", &b); //reads from the keyboard
	scanf("%f",  &c);

	for (; a <= b; a = a + c) {
		printf("%f %f %f", a, a * a * M_PI , a * 2 * M_PI); //prints timetable
		printf("\n");
	}

	return 0;

}
