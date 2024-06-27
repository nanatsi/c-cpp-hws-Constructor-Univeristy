//CH - 230 - A
//a8.p4.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
#include "stack.h"

int main() {

	int dec, bin;
	scanf("%d", &dec);

	struct stack stack_1;
	struct stack* stackp = &stack_1;
	stackp->sum = 0;

	bin = dec;
	while (bin > 0) {
		{	//pushes remainder after division into the stack
			push(bin % 2, &stack_1);
			//updates number after division
			bin /= 2;
		}
	}

	printf("The binary representation of %d is ", dec);
	//empties stack
	empty(&stack_1);

	return 0;

}