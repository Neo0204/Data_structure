#include "circlequeue.h"
front = -1;
rear = -1;
void queueIsFull()
{
	fprintf(stderr, "QUEUE IS FULL");
	exit(1);
}
void queueIsEmpty()
{
	fprintf(stderr, "QUEUE IS EMPTY");
	exit(1);
}
int deleteq()
{

	
	if (front == rear)
		queueIsEmpty();						/* print error and exit */
	front = (front + 1) % MAX_QUEUE_SIZE;

	return queue[front];
}
void addq(int item)
{	
	rear = (rear + 1) % MAX_QUEUE_SIZE;
	if (front == rear)
		queueIsFull();
	queue[rear] = item;
}
