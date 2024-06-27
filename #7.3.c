//CH - 230 - A
//a7.p4.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void uppercase(char stringi[]) {
	//makes each member of upper
	//uppercase of our string
	char upper[100];
	int i;
	for (i = 0; stringi[i] != '\0'; i++) {
		upper[i] = toupper(stringi[i]);
		printf("%c", upper[i]);
	}
	
}

void lowercase(char stringi[]) {
	//makes each member of lower
	//lowercase of our string
	char lower[100];
	int i;
	for (i = 0; stringi[i] != '\0'; i++) {
		lower[i] = tolower(stringi[i]);
		printf("%c", lower[i]);
	}
	
}
void low2upper(char stringi[]) {
	//checks each member of our string and converts 
	// lower to upper & upper to lower

	char low2up[100];
	int i;
	for (i = 0; stringi[i] != '\0'; i++) {
		if (islower(stringi[i])) {
			low2up[i] = toupper(stringi[i]);
		}
		else {
			low2up[i] = tolower(stringi[i]);
		}
		printf("%c", low2up[i]);
	}
	
}
//ends execution
void quit(char stringi[]) {
	exit(0);
}

int main() {
	//defines function pointer array
	void (*func_arr[4])(char*) = { uppercase, lowercase, low2upper, quit};
	//reads string
	char stringi[100];
	fgets(stringi, sizeof(stringi), stdin);
	
	char command;
	while (1) {
		scanf("%c", &command);
		//converts to integer due to ASCII and
		//executes comaptable function 
		func_arr[(int)command - 49](stringi);
		
		getchar();
	}
	return 0;
}
