#include "main.h"

top = -1;

char expr[MAX_EXPR_SIZE] = "82/3-42*+";

precedence getToken(char *symbol, int *n)
{
	*symbol = expr[(*n)++];
	switch (*symbol) {
		case '(':return lparen;
		case ')': return rparen;
		case '+': return plus;
		case '-':return minus;
		case '*':return times;
		case '/':return divide;
		case '%':return mod;
		case '\0':return eos;
		default: return operand;
	}
}
void stackIsFull()
{
	fprintf(stderr, "Stack Is Full");
	exit(1);
}
void stackIsEmpty()
{

	fprintf(stderr, "Stack Is Empty");
	exit(1);
}
void push(int item)
{
	if (top == MAX_STACK_SIZE - 1)
		stackIsFull();
	stack[++top] = item;
}
int pop()
{
	if (top == -1)
		stackIsEmpty();
	return stack[top--];
}

int eval()
{
	int n = 0;
	char symbol;
	int op1, op2;
	precedence token;
	token = getToken(&symbol, &n);

	while (token != eos) {
		if (token == operand) {
			push(symbol- '0');
		}
		else {
			op2 = pop();
			op1 = pop();
			switch (token)
			{
			case plus: 
				push(op1 + op2);
				break;
			case minus:
				push(op1 - op2);
				break;
			case times:
				push(op1 * op2);
				break;
			case divide:
				push(op1 / op2);
				break;
			case mod:
				push(op1 % op2);
				break;
			}
		}
		token = getToken(&symbol,&n);
	}
	return pop();
}
