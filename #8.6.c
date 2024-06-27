//CH - 230 - A
//a8.p6.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	//creates file pointers
	FILE* fp_1, * fp_2, *fp_3;
	
	//reads file names
	char file_1[256], file_2[256];
	fgets(file_1, sizeof(file_1), stdin);
	fgets(file_2, sizeof(file_2), stdin);
	//removes '\n'
	file_1[strlen(file_1) - 1] = '\0';
	file_2[strlen(file_2) - 1] = '\0';
	//opens file_1 iput by consumer
	fp_1 = fopen(file_1, "r");
	//checks in case it doesn't exist
	if (fp_1 == NULL) {
		printf("some error occured\n");
		exit(1);
	}
	//does the same
	fp_2 = fopen(file_2, "r");
	
	if (fp_2 == NULL) {
		printf("some error occured\n");
		exit(1);
	}
	
	double a, b;
	//reads the doubles from the file
	fscanf(fp_1, "%lf", &a);
	fscanf(fp_2, "%lf", &b);

	fclose(fp_1);
	fclose(fp_2);
	//computes required things
	double sum = a + b;
	double product = a * b;
	double division = a / b;
	double difference = a-b;

	
	fp_3=fopen("results.txt", "w");
	
	if(fp_3 == NULL) {
		
		printf("some error occured:");
		exit(1);
		
	}
	//writes it into the file "results.txt"
	fprintf(fp_3, "%lf\n", sum);
	fprintf(fp_3, "%lf\n", difference);
	fprintf(fp_3, "%lf\n", product);
	fprintf(fp_3, "%lf\n", division);
	
	//closes file
	fclose(fp_3);

	return 0;
}

