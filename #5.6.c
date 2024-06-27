//CH - 230 - A
//a5.p6.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
#include<stdlib.h>


int main() {
	int n, k;
	float *array;
	float *minus;
	//reads an integer
	scanf("%d", &k);
	
	//allocates memory
	array=(float*)malloc(sizeof(float)*k);
	if(array == NULL) {
		exit(1);
	}
	//reads an array
	for(n=0; n<k; n++) {
		scanf("%f", &array[n]);
	}
	//int count=0;
	for(n=0; n<k; n++) {
		
	//pointer switched to negative value
		if(array[n]<0) {
		   minus=&array[n];	
		}
	}
//finds differance between position n(where the 
//negative value is entered) and 0
	printf("Before the first negative value: %ld elements", minus-array);
	
	free(array);
	
	return 0;
	

}
