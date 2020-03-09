#ifndef QUEUE_OF_MALLOC_H
#define QUEUE_OF_MALLOC_H

#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 100
#define MALLOC(p,s) \
		if (!( (p) = malloc(s))){\
		fprintf(stderr,"Insufficient memory");\
		exit(1);}

int front, rear;
int* queue;

int deleteq();
void addq(int item);
void QueueIsEmpty();
void QueueIsFull();

#endif // !1
