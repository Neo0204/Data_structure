#ifndef _STACK_H
#define _STACK_H

#include <stdio.h>

#define MAX_STACK_SIZE 100

int top;
int stack[MAX_STACK_SIZE];


void isEmpty();
void isFull();
int pop();
void push(int newdata);


#endif