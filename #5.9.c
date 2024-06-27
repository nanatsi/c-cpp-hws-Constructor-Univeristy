//CH - 230 - A
//a5.p9.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
#include<stdlib.h>

//reads 3d array
void scanf_3D(int*** arr_3D, int n, int m, int p) {
    int x, y, z;
    for (x = 0; x < n; x++) {
        for (y = 0; y < m; y++) {
            for (z = 0; z < p; z++) {
                scanf("%d", &arr_3D[x][y][z]);
            }
        }
     }
}
//this function prints 2d sections of 3d array
void sections(int*** arr_3D, int n, int m, int p)
{   
    int x, y, z;

	for (z = 0; z < p; z++){
		printf("Section %d:\n", z + 1);
         for (x = 0; x < n; x++){
		    for (y = 0; y < m; y++){
			
			printf("%d ", arr_3D[x][y][z]);

            }
			printf("\n");
		}
	}
}

int main() {

    int*** arr_3D;
    int n, m, p;
    int x, y;

   //reads dimensions of an array
    scanf("%d %d %d", &n, &m, &p);
    
    //allocates memory for (n)
    arr_3D = (int***)malloc(n * sizeof(int**));
    //allocates memory for the middle dimension 
    for (x = 0; x < n; x++) {
        arr_3D[x] = (int**)malloc(m * sizeof(int*));

    }
    //finally allocates memory for (p)
    for (x = 0; x < n; x++) {
        for (y = 0; y < m; y++) {
            arr_3D[x][y] = (int*)malloc(p * sizeof(int));
        }

    }
    //in case allocation fails
    if (arr_3D == NULL) {
        exit(1);
     
    }

    //uses functions to do the required things
    
    scanf_3D(arr_3D, n, m, p);
    sections(arr_3D, n, m, p);

    //deallocates memory
    for (x = 0; x < n; x++) {
        for (y = 0; y < m; y++) {

            free(arr_3D[x][y]);

        }
        
        free(arr_3D[x]);
    }

    free(arr_3D);

    return 0;
        
            
}
