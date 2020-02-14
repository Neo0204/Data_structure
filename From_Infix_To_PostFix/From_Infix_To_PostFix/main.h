
#ifndef _MAIN_H

#define _MAIH_H

#include <stdio.h>
#include <stdlib.h>

#define MAX_INFIX_SIZE 100
#define MAX_STACK_SIZE 100


int top;


typedef enum {
	lparen, rparen, plus, minus, times, divide, mod, eos, operand
}precedence;


precedence stack[MAX_STACK_SIZE];
precedence getToken(char *symbol, int *n);

void fromInToPost();
void printToken(precedence token);

precedence pop();
void push(precedence item);
void stackIsFull();
void stackIsEmpty();


#endif // !_MAIN_H
