//CH - 230 - A
//a5.p7.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main() {
	//declaring two strings
	char string_1[100];
	char string_2[100];
	//reads from the keyboar
	fgets(string_1, sizeof(string_1), stdin);
	fgets(string_2, sizeof(string_2), stdin);

	int n;
	n = strlen(string_1) + strlen(string_2) + 1;
	//allocates memory for concatetion
	char* string_3 = (char*)malloc(sizeof(char) * n);
	
	//newline is at the end so instead it makes \n
	//  the last element of an array 
	if (strlen(string_1) > 0 && string_1[strlen(string_1) - 1] == '\n') {
		string_1[strlen(string_1) - 1] = '\0';
	}
		if (strlen(string_2) > 0 && string_2[strlen(string_2) - 1] == '\n') {
		string_2[strlen(string_2) - 1] = '\0';
	}
	//copies and cocantenates string_1 and string_2
	strcpy(string_3, string_1);
	strcat(string_3, string_2);


	//prints the results
	printf("Result of concatenation: %s\n", string_3);
	//deallocates memory
	free(string_3);
	
	
	return 0;
	
	
	



}
