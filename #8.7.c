/*CH - 230 - A
a8_p7.c
Luka Natriashvili
lnatriashv@jacobs - university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    FILE* fptr1, * fptr2, * fptrout;
    //opens file for reading purposes
    fptr1 = fopen("text1.txt", "r");
    //checks for its existance
    if (fptr1 == NULL) {
        printf("The file couldn't open\n");
        exit(1);
    }
    //opens file for reading purposes
    fptr2 = fopen("text2.txt", "r");
    //checks for its existance
    if (fptr2 == NULL) {
        printf("The file couldn't open\n");
        exit(1);
    }
    //opens file for writing purposes
    fptrout = fopen("merge12.txt", "w");
    //checks for its existance
    if (fptrout == NULL) {
        printf("The file couldn't open\n");
        exit(1);
    }

    char line[987];
    //merges first and second files, prints end line between them
    while (fgets(line, sizeof(line), fptr1)) {
        fprintf(fptrout, "%s", line);
    }

    fclose(fptr1);
    fprintf(fptrout, "\n");

    while (fgets(line, sizeof(line), fptr2)) {
        fprintf(fptrout, "%s", line);
    }

    fclose(fptr2);
    //closes final file 
    fclose(fptrout);
    return 0;
}