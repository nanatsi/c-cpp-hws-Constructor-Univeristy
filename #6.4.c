//CH - 230 - A
//a6.p4.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>

int main() {
    //initializing
    int i, n;
    scanf("%d", &i);
    //allocates memory
    int* x = (int*)malloc(sizeof(int) * i);
    
    if(x==NULL) {
    	exit(1);
	}
	
    int* y = (int*)malloc(sizeof(int) * i);
    
	if(y==NULL) {
    	exit(1);
	}
	
    //reads arrays
    for (n = 0; n < i; n++) {
        scanf("%d", &x[n]);
    }
    for (n = 0; n < i; n++) {
        scanf("%d", &y[n]);
    }

    int scal_product = 0;
    int* interm_values = (int*)malloc(sizeof(int) * i);
    
    if(interm_values==NULL) {
    	exit(1);
	}

  /* define intermediate 
	#define INTERMEDIATE */ 
	
#ifdef  INTERMEDIATE
    //ifdefined print both scal product and intermediate product values
    printf("The intermediate product values are:\n");
    for (n = 0; n < i; n++) {
        interm_values[n] = x[n] * y[n];
        scal_product += interm_values[n];
        printf("%d\n", interm_values[n]);
    }
    
    printf("The scalar product is: %d", scal_product);

    //if not defined print scal prod
#else
    for (n = 0; n < i; n++) {
        scal_product += x[n] * y[n];
    }
    printf("The scalar product is: %d\n", scal_product);
#endif

 
    //deallocates memory
    free(x);
    free(y);
    free(interm_values);
    return 0;
}


