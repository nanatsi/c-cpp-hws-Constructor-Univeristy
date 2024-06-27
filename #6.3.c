//CH - 230 - A
//a6.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <stdio.h>
//writing macros of min/max/midrange
#define MAX(a, b, c) ((a > b) ? ((a > c) ? (a) : (c)) : ((b > c) ? (b) : (c)))
#define MIN(a, b, c) ((a < b) ? ((a < c) ? (a) : (c)) : ((b < c) ? (b) : (c)))
#define MIDRANGE(a, b, c) ((MAX(a, b, c) + MIN(a, b, c)) / 2.0)

int main() {
    int a, b, c;
    //reads from the keyboard
    scanf("%d %d %d", &a, &b, &c);
	//prints the result
    printf("The mid-range is: %f\n", MIDRANGE(a, b, c));

    return 0;
}


