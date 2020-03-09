#ifndef STACK_OF_MALLOC_H
#define STACK_OF_MALLOC_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_STACK_SIZE 100
#define MALLOC(p,s) \
		if (!( (p) = malloc(s))){\
		fprintf(stderr,"Insufficient memory");\
		exit(1);}
typedef struct {
	int k;
}element;

element *stack;
int top;

void push(element item);
element pop();
void stackEmpty();
void stackFull();


#endif // !1
