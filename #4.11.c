//CH - 230 - A
//a4.p11.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int count_insensitive(char* str, char c) {
	int result = 0;
	int i;
	for (i = 0; str[i] != '\0'; i++) {
		if (toupper(str[i]) == toupper(c)) {
		//converts lowercase letters to uppercase
			result++; 
	    //counts everytime the particular character occurs
		}
	} 
       return result; 
}

int main() {
	
    char *string_1;
	string_1 = (char*)malloc(sizeof(char)*50);
    //dynamically allocating maximal length of 50
    //reads string
	if (string_1 == NULL) {
		exit(1);
	}
	scanf("%[^\n]s", string_1);
	int i;
    for (i = 0; string_1[i] != '\0'; i++);
    
	
	
	char *string_2;
	string_2 = (char*)malloc(sizeof(char) * i);
	// allocating memory to the correct size
	if (string_2 == NULL) {
		exit(1);
	}
	strcpy(string_2, string_1);
	
	free(string_1);
	// deallocates memory for the first string  
	 
	 
	//prints by using a function
	printf("The character 'b' occurs %d times.\n", 
        count_insensitive(string_2, 'b'));
    printf("The character 'H' occurs %d times.\n",
        count_insensitive(string_2, 'H'));
    printf("The character '8' occurs %d times.\n",
        count_insensitive(string_2, '8'));
    printf("The character 'u' occurs %d times.\n",
        count_insensitive(string_2, 'u'));
    printf("The character '$' occurs %d times.\n",
        count_insensitive(string_2, '$'));
    free(string_2); // deallocates memory for the second string
    return 0;

	

	

	

}
