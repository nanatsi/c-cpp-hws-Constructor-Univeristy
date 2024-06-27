//CH - 230 - A
//a4.p6.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

# include <stdio.h>
# include <stdlib.h>

 void the_highest_2 (int arr[], int n) {
 	//declaration
 	int max_1st, max_2nd; 
 	int i;
 	if (arr[0]>arr[1]) {
 		//examining for the first two members
 		max_1st=arr[0];
 		max_2nd=arr[1];
	 }
 	else {
 		max_1st=arr[1];
 		max_2nd=arr[0];
	 }
	 for(i=2; i<n; i++) {
	 	if (arr[i]>max_1st) {
	 		//updating max_1st and by max_1st determine max_2nd
	 		max_2nd=max_1st;
	 		max_1st=arr[i]; 
		 }
		 else if(arr[i]>max_2nd&& arr[i]<max_1st) {
		 	max_2nd=arr[i];
		 	//if the each time renewed max_2nd
			 // belongs from old max_2nd
			 // and already defined max_1st,
			 // the max_2nd will be updated
		 }
	 }
	 printf("the highest is =%d\n", max_1st);
	 printf("the 2nd highest is =%d\n", max_2nd); } 

int main() {
	int n;
	scanf("%d", &n); //reads the
	                // amount of members
	
	//allocates memory
	int *array=(int*)malloc(sizeof(int)*n);
	if (array == NULL) {
		exit (1);
	}
	
	
	int k;
	for(k=0; k<n; k++) {
		scanf("%d", &array[k]);
	}
	the_highest_2(array, n); //uses function
	free(array); //deallocates
	return 0;
}
