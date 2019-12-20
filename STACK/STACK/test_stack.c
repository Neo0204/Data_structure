#include "stack.h"

int main()
{
	int numarr[] = { 1,2,3,4,5 };
	int num;
	printf("This program implements the stack\n");
	
	for (int i = 0; i < sizeof(numarr) / sizeof(numarr[0]); i++)
	{
		push(numarr[i]);
	}
	
	num = pop();
	printf("pop result : %d\n",num);
	num = pop();
	printf("pop result : %d\n", num);
	num = pop();
	printf("pop result : %d\n", num);
	num = pop();
	printf("pop result : %d\n", num);
	num = pop();
	printf("pop result : %d\n", num);
	num = pop();
	printf("pop result : %d\n", num);
	num = pop();
	printf("pop result : %d", num);


	return 0;
}