#ifndef  _MAIN_H

#define _MAIN_H
#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100
#define MAX_EXPR_SIZE 100
int top;
// oper 는 숫자
// eos end of string의 약자
typedef enum {
	lparen, rparen, plus, minus, times, divide, mod, eos, operand
}precedence;

int stack[MAX_STACK_SIZE];

precedence getToken(char *symbol, int *n);
void stackIsFull();
void stackIsEmpty();
void push(int item);
int pop();
int eval();
#endif // !
