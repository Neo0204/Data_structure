#pragma once

#ifndef CIRCLE_QUEUE_H
#define CIRCLE_QUEUE_H

#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5

int front, rear;
int queue[MAX_QUEUE_SIZE];

void queueIsFull();
void queueIsEmpty();
int deleteq();
void addq(int item);

#endif // !CIRCLE_QUEUE_H
