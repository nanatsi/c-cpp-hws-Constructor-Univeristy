//CH - 230 - A
//a3.p11.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include <stdio.h>
#include<string.h>

int main() {

    int m;
    int n; 
    int k;

    char one[333];
    char two[333];

    char series[333]; 
    char three[333];
    char c;

    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);
    scanf(" %c", &c); // reads char from the keyboard

    m=strlen(one) - 1; //we start counting length from  
	                   //0 position and that's why we substracted 
     n=strlen(two) - 1;
    
	printf("length1=%d\n", m); //prints length
    printf("length2=%d\n", n);

    for (k = 0; k < m; k++) {

        series[k] = one[k]; //copying one

    }

    for (k = 0; k < n; k++) {

        series[m + k] = two[k];  // combines those two arrays

    }

    printf("concatenation=%s\n", series);
    strcpy(three, two);
    
    printf("copy=%s", three);

   
    if (strcmp(one, two) < 0) { 

        printf("one is smaller than two\n"); 

    }
    else if (strcmp(one, two) > 0) {

        printf("one is larger than two\n");

    }
    else {

        printf("one is equal to two\n"); //compares two values and prints the correct text

    }
    

    for (k = 0; k < n; k++) {

        if (two[k] == c) {

            printf("position=%d\n", k); 

            return 0; 

        }

    }
   printf("The character is not in the string\n"); 



}
