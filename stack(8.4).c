#include <stdio.h>
#include "stack.h"

//pushing function
void push(int k, struct stack* n) {
    //checking if quantity is=12 then it can't be added

    if (n->sum == 12) {
        printf("Pushing Stack Overflow\n");
    }

    else {
        //the new element now becomes the last in the array
        n->arr[n->sum++] = k;
    }
}
//popping function
int pop(struct stack* n) {
    if (n->sum == 0) {
        //in case quantity is 0, we have underflow
        printf("Popping Stack Underflow\n");
        return 0;
    }
    else {
        //pops the top element from the stack
        return n->arr[--n->sum];
    }
}

//checks if it's empty
int isEmpty(struct stack* n) {
    return n->sum == 0;
}
//empties
void empty(struct stack* n) {

    if (!isEmpty(n)) {
        do {
            // uses additional integer to empty the stack
            int i = n->arr[n->sum - 1];
            // Remove the element from the back each time
            n->arr[--n->sum] = 0;
            printf("%d", i);
            // Carries on till the stack is not empty
        } while (!isEmpty(n));
    }

    printf("\n");
}