//CH - 230 - A
//a6.p6.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <stdio.h>
int main() {
    unsigned char ch;

    int i;

    scanf("%c", &ch);

    // reads char
    printf("The decimal representation is: %d\n", ch);
    // prints the decimal representation
    printf("The binary representation is: ");

    for (i = 0; i < 8; i++) {

        printf("%d", (ch & (1 << 7)) >> 7);

        // example: 00000001 << 7 equals 10000000
        //y******* & 10000000 = y0000000
        //y0000000 >> 7 shifts everything to y
        //and prints it

        ch <<= 1;

        // shifts to left each time

    }
    printf("\n");
    return 0;
}