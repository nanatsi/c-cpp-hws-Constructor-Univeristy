
//CH - 230 - A
//a7.p7.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#ifndef STACK_H
#define STACK_H

struct stack {
    unsigned int sum;
    int arr[12];
};

//declaring functions
void push(int k, struct stack* n);
int pop(struct stack* n);
void empty(struct stack* n);
int isEmpty(struct stack* n);

#endif
