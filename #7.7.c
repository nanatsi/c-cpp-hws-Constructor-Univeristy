#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main() {

    struct stack datas;
    datas.sum = 0;
    char chari;
    int m;
    int k;

    while (1) {

        scanf("%c", &chari);
        getchar();

        switch (chari) {
        
        //in case 's' pushes
        case 's':
        	 scanf("%d", &k);
        	 getchar();
            //checks to avoid timelimit exceed
            if (datas.sum == 12) {
                printf("Pushing Stack Overflow\n");
            }
            else {
                push(k, &datas);
            }
            break;
            
        //in case 'p' pops
        case 'p':
            m = pop(&datas);
            if (m != 0) {
            //checks to avoid timelimit exceed
                printf("Popping %d\n", m);
            }
            break;
            
        //in case 'e' empties
        case 'e':
            if (!isEmpty(&datas)) {
                empty(&datas);
            }
            break;

          
        //in case 'q' quits
        case 'q':
            printf("Quit\n");
            return 0;
        }
    }
    return 0;
}
