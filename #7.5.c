//CH - 230 - A
//a7.p5.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//ascending function
int ascending(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
//descending function 
int descending(const void* a, const void* b) {
    return *(int*)b - *(int*)a;
} 
int main() {
    int n, * array, i;
    char ch;
    //reads size
    scanf("%d", &n);
    //allocates memory for array and reads it
    array = (int*)malloc(sizeof(int) * n);
    if (array == NULL)
        exit(1);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    while (1) {
        scanf("%c", &ch);
        switch (ch) {
        //in case 'a' does ascending 
        case 'a':
            qsort(array, n, sizeof(int), ascending);
            for (i = 0; i < n; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
            break;
        //in case 'd' does descending
        case 'd':
            qsort(array, n, sizeof(int), descending);
            for (i = 0; i < n; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");
            break;
        //in case e deallocates memory
		// and stops execution
        case 'e':
            free(array);
            return 0;
        }
    }
    return 0;
}
