#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#define MAX_QUEUE_SIZE 100

int front, rear;

int queue[MAX_QUEUE_SIZE];

void addq(int item);
int deleteq();
void queueEmpty();
void queueFull();
#endif