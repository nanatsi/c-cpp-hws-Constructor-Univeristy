//CH - 230 - A
//a8.p8.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	//creates a file pointer
	FILE* fp_1;
	//reads the file name
	char word_count[256];
	fgets(word_count, sizeof(word_count), stdin);
	//removes the last "nothing" element from the string
	word_count[strlen(word_count) - 1] = '\0';
	//opens file
	fp_1 = fopen(word_count, "r");
	if (fp_1 == NULL) {
        printf("Error occurred!\n");
        exit(1);
    }
	char chari;
	int word = 0;
	int word_flag = 0;
	//if word separation mark is occured and the word is being processed 
	//then increase wordcount
		while ((chari = getc(fp_1)) != EOF) {
			if (((chari == ' ') || (chari == ',') || (chari == '?')
				|| (chari == '!') || (chari  == '.') || (chari == '\t')
				|| (chari == '\r') || (chari == '\n')) && word_flag) {
				word++;
				word_flag = 0;
			}

			if (!((chari == ' ') || (chari == ',') || (chari == '?')
				|| (chari == '!') || (chari == '.') || (chari == '\t')
				|| (chari == '\r') || (chari == '\n'))) {
					
				word_flag = 1;
			}
		}
		//closes file and prints final result
		fclose(fp_1);
		printf("The file contains %d words.\n", word);

		return 0;
}
