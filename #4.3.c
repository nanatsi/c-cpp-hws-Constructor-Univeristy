//CH - 230 - A
//a4.p4.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
#include<math.h>

float geometric_mean (float arr[], int num) {
    int	product=1.0;
    int i;     
    for(i=0; i<num; i++) {
	
	product=product*arr[i]; 
		}
		float gm=pow(product, 1.0/num); 
		//geometric mean function
		return gm; 
}
   
float the_highest(float array[], int num) {
         
	float max=array[0];  
	int i;
	for(i=0; i<num; i++){
		if (array[i]>max) { 
		//compares everytime and finds the highest
			max=array[i];
		} }
	  return max; 
}    

float the_smallest(float arr[], int num) {
	
	float min=arr[0];
	int i;
	for(i=0; i<num; i++) {
	 //compares everytime and finds the smallest
		if (arr[i]<min) {
			min=arr[i];
		}
	}
	return min;
}

float sum(float arr[], int n) {
	float summ=0;
	int i;
	for (i=0; i<n; i++) { 
	//sums each member
	summ=summ+arr[i]; }
	return summ;
}

int main() {
	int n;
	float y[15];
	for ( n=0; n<15; n++) { 
	//reads an 15-member array
		scanf("%f", &y[n]);
		if (y[n]<0) {
			break;
		}
	}
	
	char c;
	getchar();
	c=getchar();
	
	switch (c) {
		case 'm': 
		    printf("%f\n", geometric_mean(y, n));
			 //discusses cases
			// and uses functions
		    break;
		
		case 'h':
			printf("%f\n", the_highest(y, n));
			break;
			
	    case 'l' :
	    	printf("%f\n", the_smallest(y, n));
	    	break;
	    
		case 's':
	        printf("%f\n", sum(y, n));
	        break;
		
	}
	
	return 0;
			
}
