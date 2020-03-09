#include "queue.h"
front = -1;
rear = -1;


void addq(int item)
{
	if (rear == MAX_QUEUE_SIZE - 1)
		queueFull();
	queue[++rear] = item;
}
int deleteq()
{
	if (front == rear)
		queueEmpty();
	return queue[++front];
}
void queueEmpty()
{
	fprintf(stderr, "QUEUE IS EMPTY\n");
	exit(1);
}
void queueFull()
{

	fprintf(stderr, "QUEUE IS FULL\n");
	exit(1);
}