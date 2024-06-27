//CH - 230 - A
//a4.p11.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include<stdio.h>
#include<string.h>
void replaceAll(char* str, char c, char e) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i]) == c) {
    //the function converts one char into another
            str[i] = e;
 
        }
    }
    printf("%s", str);
}
 
int main() {
    char string[80];
    while (strcmp(string, "stop\n") != 0) {
        
           fgets (string, sizeof(string), stdin);
           char replaces, is_replaced;
           
           // reads the characters
           scanf("%c %c", &replaces, &is_replaced); 
           //prints old string
           printf("\nOld string: %s", string);
           printf("Character to be replaced: %c\n", is_replaced);
           //prints replaced and repalcing chars
           printf("Replacing character: %c\n", replaces);
           printf("New string: ");
           //calls the function mentioned above
           replaceAll(string, is_replaced, replaces);
           printf("\n");
           getchar();
 
    }
    return 0;
}
