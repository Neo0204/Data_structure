#include "circlequeue.h"



int main()
{
	for (int i = 0; i < 5; i++)
	{
		addq(i);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", deleteq());

	}
	return 0;
}