//CH - 230 - A
//a5.p5.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
#include<stdlib.h>
void scalar_product(double v[], double w[], int size) {
	int i;
	double scal=0;
	for (i = 0; i < size; i++) {
		scal = scal+ v[i] * w[i];
	//computes scal product by multiplying each time

	}
	printf("Scalar product=%lf\n", scal);
}
void small_large_1_2(double v[], double w[], int size) {
	int k;
	double small_1, large_1;
	double small_2, large_2;
	small_2 = w[0];
	large_2 = w[0];
	small_1 = v[0];
	large_1 = v[0];
	int position_sm_1 = 0, position_sm_2 = 0;
	int	position_lrg_1 = 0, position_lrg_2 = 0;
	//compares every time and thus chooses the smallest/largest
	//also updates positions nums
	for (k = 0; k < size; k++) {
		if (v[k] < small_1) {
			small_1 = v[k];
			position_sm_1 = k;
		}
		if (large_1 < v[k]) {
			large_1 = v[k];
			position_lrg_1 = k;
		}
		if (small_2 > w[k]) {
			small_2 = w[k];
			position_sm_2 = k;
		}
		if (large_2 < w[k]) {
			large_2 = w[k];
			position_lrg_2 = k;
		}

	}
	//prints the results
	printf("The smallest = %lf\n", small_1);
	printf("Position of smallest = %d\n", position_sm_1);
	printf("The largest = %lf\n", large_1);
	printf("Position of largest = %d\n", position_lrg_1);
	printf("The smallest = %lf\n", small_2);
	printf("Position of smallest = %d\n", position_sm_2);
	printf("The largest = %lf\n", large_2);
	printf("Position of largest = %d\n", position_lrg_2);

}
int main() {
	//declares variables
	int size;
	int k, m;
	//reads from the keyboard
	scanf("%d", &size);
	double* v;
	double* w;
	//dynamically allocates memory
	v = (double*)malloc(sizeof(double) * size);
	if (v == NULL) {
		exit(1);
	}
	w = (double*)malloc(sizeof(double) * size);
	if (w == NULL) {
		exit(1);
	}
	//reads an array due to size
	for (k = 0; k < size; k++) {
		scanf("%lf", &v[k]);
	}
	for (m = 0; m < size; m++) {
		scanf("%lf", &w[m]);
	}
	//uses the functions
	scalar_product(v, w, size);
	small_large_1_2(v, w, size);
	//deallocates memory
	free(w);
	free(v);
	return 0;
}
