#include "stackofmalloc.h"
top = -1;
void push(element item)
{
	if (top == MAX_STACK_SIZE-1)
		stackFull();
	stack[++top] = item;
}
element pop()
{
	if (top == -1)
		stackEmpty();
	return stack[top--];
}
void stackEmpty()
{
	fprintf(stderr, "STACK IS EMPTY\n");
	exit(1);
}
void stackFull()
{
	fprintf(stderr, "STACK IS FULL\n");
	exit(1);

}