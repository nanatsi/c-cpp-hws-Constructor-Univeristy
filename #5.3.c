//CH - 230 - A
//a5.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int count_lower(char* str) {
	int size; 
	int count = 0;
	//checks and counts the lower alphabets
	for (size = 0; str[size] != '\0'; size++) {
		if (islower(str[size]) != 0) {
			count++;
			
		}
	}
	return count;
}

int main() {
	char str[50];
	//compares strings
	while (strcmp(str, "\n") != 0){
		//scans till '\n'
	fgets(str, sizeof(str), stdin);
	printf("%d", count_lower(str)); //uses a function
	printf("\n");
    }
	
	return 0;
}
