//CH - 230 - A
//a8.p5.c
// Nana Tsignadze
//ntsignadze@jacobs - university.de

#include<stdio.h>
#include<stdlib.h>

int main() {
	//CREATING FILE POINTERS
	FILE* fp_1, * fp_2;
	//reads text from the file
	fp_1 = fopen("chars.txt", "r");

	if (fp_1 == NULL) {
		printf("Some error occurred!\n");
		exit(1);
	}
	//gets first two characters from the file
	char chari_1 = getc(fp_1);
	char chari_2 = getc(fp_1);
	//computes the sum
	int sum = (int)chari_1 + (int)chari_2;
	//closes file
	fclose(fp_1);
	//opens the codesum.txt file
	fp_2 = fopen("codesum.txt", "w");

	if (fp_2 == NULL) {
		printf("Some error occurred!\n");
		exit(1);
	}
	//writes sum into the file
	fprintf(fp_2, "%d", sum);
	fclose(fp_2);
	return 0;

}