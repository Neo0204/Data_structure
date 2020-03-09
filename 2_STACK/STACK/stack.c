#include "stack.h"

top = -1;

void isEmpty()
{
	fprintf(stderr, "STACK IS EMPTY\n");
	exit();
}

void isFull()
{
	fprintf(stderr, "STACK IS FULL\n");
}

int pop()
{
	if (top == -1)
		isEmpty();

	return stack[top--];
}
void push(int new_data)
{
	if (top == MAX_STACK_SIZE - 1)
		isFull();
	stack[++top] = new_data;
	
}
