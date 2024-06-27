//CH - 230 - A
//a4.p7.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>

//prints the whole table
void dim_1(int array[30][30], int num) { 
	int row;
	int column;
	for (row = 0; row < num; row++) {
		for (column = 0; column < num; column++) {
			
			printf("%d ", array[row][column]);
		}
		printf("\n");
		
	}
	
 }
 //prints under the diagonal
void und_diagonal(int array[30][30], int n) { 
	int row;
	int column; 
	for (row = 0; row < n; row++) { 
	//under the diagonal is from the corner till n
		for (column = 0; column < row; column++) {
	//from the corner up to the end of the column
			printf("%d ", array[row][column]);
			
		
		}
	}
	printf("\n");

	
}
int main() {
	int dim_2[30][30];
	int n;
	int row;
	int column;
	scanf("%d", &n);
	for (row = 0; row < n; row++) {
		for ( column = 0; column < n; column++) {
		//with the help of loop reads from the keyboars
			scanf("%d", &dim_2[row][column]);
		}
	}
	
	printf("The entered matrix is:\n");
	dim_1(dim_2, n);
	printf("Under the main diagonal:\n");
	und_diagonal(dim_2, n); //uses functions
	return 0;

}
