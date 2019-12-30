#include "queueofmalloc.h"


front = -1, rear = 0;

int deleteq()
{
	if (front == rear - 1)
		QueueIsEmpty();
	return queue[++front];
}
void addq(int item)
{
	if (rear == MAX_QUEUE_SIZE)
		QueueIsFull();
	queue[rear++] = item;
}
void QueueIsEmpty()
{
	fprintf(stderr, "QUEUE IS EMPTY\n");
	exit(1);
}

void QueueIsFull()
{
	fprintf(stderr, "QUEUE IS FULL\n");
	exit(1);
}