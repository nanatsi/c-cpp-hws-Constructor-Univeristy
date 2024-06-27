//CH - 230 - A
//a5.p4.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de  
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

void divby5(float arr[], int size) {
	//the function divides all the numbers by 5
	int m; 
	printf("After:\n");
	for (m = 0; m < size; m++) {
		printf("%f ", arr[m] / 5);
	}
}

int main() {
	int size;
	int k;
	int l;
	//reads the size of an array
	scanf("%d", &size);
	//dynamically allocates memory for array
	float* arr = (float*)malloc(sizeof(float) * size);
	if (arr == NULL) {
		exit(1);
	}
	//reads an array
	for (k=0; k<size; k++) {
		scanf("%f", &arr[k]); 
		
	}
	//prints the primary array
	printf("Before:\n");
	for (l = 0; l < size; l++) {
		printf("%f ", arr[l]);
	}
	//uses a function
	printf("\n");
	divby5(arr, size); 
	free(arr);
	//deallocates 
	return 0;
}
