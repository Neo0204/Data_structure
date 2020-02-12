#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100
#define MAX_EXPRE_SIZE 100

typedef enum {
	lparen,rparen,plus,minus,times,divide,mod,eos,space,operand
}precedence;


int stack[MAX_STACK_SIZE];

void stackIsFull();
void stackIsEmpty();
void push(int item);
int pop();


precedence getToken(char* symbol, int *n);
int eval();


#endif