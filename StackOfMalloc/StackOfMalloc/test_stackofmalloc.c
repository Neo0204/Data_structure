#include "stackofmalloc.h"
int main()
{
	printf("This program implements stack of malloc\n");

	MALLOC(stack, sizeof(element)*MAX_STACK_SIZE);

	element item1, item2, item3, item;
	
	item1.k = 10;
	item2.k = 20;
	item3.k = 30;

	

	push(item1);
	push(item2);
	push(item3);

	item=pop();
	printf("%d\n", item.k);
	item = pop();
	printf("%d\n", item.k);
	item = pop();
	printf("%d\n", item.k);
	item = pop();
	printf("%d\n", item.k);


	free(stack);
	return 0;
}