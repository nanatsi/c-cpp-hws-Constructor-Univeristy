//CH - 230 - A
//a5.p8.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>



//this function reads matrix from the keyboard
void scanf_matrix(int** matrix, int rows, int cols) {
	int i, j;
    for ( i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// this function  is to print a matrix due to  input
void print_matrix(int** matrix, int rows, int cols) {
	int i, j;
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// this function prints the results of multiplycation
void multiply_matrices(int **matrix_a, int **matrix_b, int **matrix_axb, int n, int m, int p)
{
	int x, y, z;
	int primary;
	for (x = 0; x < n; x++){
		
		for (y = 0; y < p; y++){
			primary = 0;
			for (z = 0; z < m; z++){
//each time integer gets the value of the compatable address
			primary+=matrix_a[x][z] * matrix_b[z][y];
//and makes a table of multiplication results 
				matrix_axb[x][y] = primary;
		}
		
		}
	} 
//uses the above made function to print
	print_matrix(matrix_axb, n, p);
}

int main() {
    int n, m, p;
    
    scanf("%d %d %d", &n, &m, &p);
    int i;
    //dynamically allocates memory for matrices
   int** matrix_a = (int**)malloc(n * sizeof(int*));
    if(matrix_a==NULL) {
    	exit(1);
	}
      int** matrix_b = (int**)malloc(m * sizeof(int*));
     if(matrix_b==NULL) {
    	exit(1);
	}
	   int** matrix_axb = (int**)malloc(n * sizeof(int*));
	      if(matrix_axb==NULL) {
    	exit(1);
	}
    for (i = 0; i < n; i++) {
        matrix_a[i] = (int*)malloc(m* sizeof(int));
        matrix_axb[i] = (int*)malloc(p * sizeof(int));
    }
     for (i = 0; i < p; i++) {
        matrix_b[i] = (int*)malloc(p * sizeof(int));
    }
    
    //uses functions
    scanf_matrix(matrix_a, n, m);
    scanf_matrix(matrix_b, m, p);
    
    printf("Matrix A:\n");
    print_matrix(matrix_a, n, m);
    
    printf("Matrix B:\n");
    print_matrix(matrix_b, m, p);
    
    printf("The multiplication result AxB:\n");
	multiply_matrices(matrix_a, matrix_b, matrix_axb, n, m, p);
	
    
    // Frees the allocated memory
   	for (i = 0; i < n; i++){
   		
		free(matrix_a[i]);
		free(matrix_axb[i]);
		
	}
	 
	free(matrix_a);
	free(matrix_axb);
	
	 for (i = 0; i < m; i++){
	
	free(matrix_b[i]); 
	
	}
	
	free(matrix_b);
	

    
    return 0;
}
