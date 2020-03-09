#include "queue.h"


int main()
{
	int item1 = 10, item2 = 20, item3 = 30;
	int item;

	addq(item1);
	addq(item2);
	addq(item3);
	item = deleteq();
	printf("%d\n", item);
	item = deleteq();
	printf("%d\n", item);
	item = deleteq();
	printf("%d\n", item);

	item = deleteq();
	printf("%d\n", item);

	
	return 0;
}