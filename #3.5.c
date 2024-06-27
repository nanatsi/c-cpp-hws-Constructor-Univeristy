
//CH - 230 - A
//a3.p5.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>

int main () {
	
	char c; //declaring a variable
	int n, i;
	double sum;
	scanf("%c", &c); //reads from the keyboard
	scanf("%d", &n);
	double temp[100];

	
	for(i=0; i<n; i++) {
	scanf("%lf", &temp[i]);
	}
	
	switch (c) {
		
		case 's':  // if the entered character is 's', prints the sum of the temperatures
		sum = 0;
	    for(i=0; i<n; i++) {
	    sum=sum+temp[i];
	    }
	    printf("%lf\n", sum); 
	    break;
	    
	    
	    case 'p':   // if the entered character is 'p', prints the list of the temperatures
	    for(i=0; i<n; i++) 
	    printf("%lf\n", temp[i]);
	    break; 
	    
	    
	    
	    case'c':
	    for(i=0; i<n; i++) 
	    printf("%lf\n", (double)temp[i]*9/5+32);
	    break;
	    
	    
	    default: 
	    /*
        if the entered character is 't', prints the
        list of the temperatures in Farenheit
        */
	    sum = 0;
		for(i=0; i<n; i++) {
	    sum = sum + temp[i];
	    }
	    printf("%lf\n", sum/n); 
	    break;
	    
	}
	
	return 0;
	
	
	
}
