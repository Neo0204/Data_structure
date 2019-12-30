#include "queueofmalloc.h"

int main()
{

	printf("This program implements queue of malloc\n");

	MALLOC(queue,sizeof(int)*MAX_QUEUE_SIZE);
	int num1 = 10, num2 = 20, num3 = 30;
	addq(num1);
	addq(num2);
	addq(num3);

	int num;
	num = deleteq(); 
	printf("%d\n", num);
	num = deleteq();
	printf("%d\n", num);
	num = deleteq();
	printf("%d\n", num);
	num = deleteq();
	printf("%d\n", num);

	free(queue);
	return 0;
}