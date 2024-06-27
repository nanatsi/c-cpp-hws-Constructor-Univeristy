//CH - 230 - A
//a4.p8.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de
#include<stdio.h>
void dim_1(int array[30][30], int num) {
	//prints the whole table
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
void und_2nd_diagonal(int array[30][30], int n) {
	int row;
	int column;
	for (row = 0; row < n; row++) {
		//prints reversed
		for (column = n-row; column < n; column++) {
			printf("%d ", array[row][column]);


		}
	}
	printf("\n");


}
int main() {
	int dim_2[30][30];
	int n; //declaration
	int row;
	int column;
	scanf("%d", &n);
	for (row = 0; row < n; row++) {
		for (column = 0; column < n; column++) {
			scanf("%d", &dim_2[row][column]);
		} //reads from the keyboard
	}

	printf("The entered matrix is:\n"); //prints
	dim_1(dim_2, n);
	printf("Under the secondary diagonal:\n");
	und_2nd_diagonal(dim_2, n);
	return 0;

}
