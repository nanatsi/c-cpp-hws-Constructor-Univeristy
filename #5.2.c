//CH - 230 - A
//a5.p2.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de  
   
   
#include<stdio.h>


//creating a function 
void divby5(float arr[], int size) {
	int m;
	printf("After:\n");
	//divides every element of array by 5
	for (m=0; m<size; m++) {
	printf("%.3f ", arr[m] / 5);
	
}
	
}

int main() {
	int size=0;
	//creating an array
	float arr[]= {5.500, 6.500, 7.750, 8.000, 9.600, 10.360};
	
	
	printf("Before:\n");
	//prints every single element of array
	for (size=0; size<6; size++) {
	printf("%.3f ", arr[size]);
	
}   
    //uses a function
    printf("\n");
    divby5(arr, size);
    printf("\n");
    return 0;

}
