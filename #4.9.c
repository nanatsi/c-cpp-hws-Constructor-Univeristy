//CH - 230 - A
//a4.p9.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include<stdio.h>
#include<stdlib.h>
int prodminmax(int arr[], int n) {
	int i;
	int max; //finds max
	max = arr[0];
	for (i = 0; i < n; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	
	int m;
	int min;
	min = arr[0]; //finds min
	for (m = 0; m < n; m++) {
		if (min > arr[m]) {
			min = arr[m];
		}
	}
	
	return min * max; //computes product
}

int main() { 

	
	int n;
	int k;
	scanf("%d", &n);
	//reads length
	
	int *arr = (int*)malloc(sizeof(int)*n); 
	//provides space

	if (arr == NULL) {
		exit(1);
	}

	for (k=0; k<n; k++) {
		scanf("%d", &arr[k]);
		//reads integers
	}

	printf("%d", prodminmax(arr, n));
	free(arr); //dellocates space
}
