//CH - 230 - A
//a6.p5.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <stdio.h>

int main() {

    unsigned char ch;

    scanf("%c", &ch);

    // reads the character
    printf("The decimal representation is: %d\n", ch);
    // prints the decimal representation
    printf("The backwards binary representation is: ");

    while (ch > 0) {
        printf("%d", ch & 1);

        // compares to 1 and prints
        //  backward the same that it was

        ch >>= 1;

        // shifts ch to right every time
        //and when all becomes 0 stops 
  
    }

    printf("\n");
    return 0;
}

