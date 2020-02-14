#include "main.h"

int isp[] = { 0,19,12,12,13,13,13,0 };
int icp[] = { 20,19,12,12,13,13,13,0 };

char infix[MAX_INFIX_SIZE] = "a+b*(c*d+g)+e*f";

void stackIsFull()
{
	fprintf(stderr, "Stack is Full");
	exit(1);
}
void stackIsEmpty()
{
	fprintf(stderr, "Stack Is Empty");
	exit(1);
}
void push(precedence item) {
	if (top == MAX_STACK_SIZE - 1)
		stackIsFull();
	stack[++top] = item;
}
precedence pop() {
	if (top == -1)
		stackIsEmpty();
	return stack[top--];
}

void fromInToPost() {
	int n = 0;
	char symbol;
	top = 0;
	stack[0] = eos;
	precedence token;
	int checkLparen = 0;
	for (token = getToken(&symbol, &n); token != eos; token = getToken(&symbol, &n)) {
	
		if (token == operand) {
			printf("%c", symbol);
		}
		else if (token == rparen) {
			while (stack[top] != lparen) {
				printToken(pop());
			}
			pop();
			checkLparen = 0;
		}

		else {

			while (isp[stack[top]] >= icp[token]) {
				printToken(pop());
			}
		
			push(token);
		}
	}
	while (stack[top] != eos) {
		printToken(pop());
	}

}
precedence getToken(char *symbol, int *n) {
	*symbol = infix[(*n)++];
	switch (*symbol) {
	case '(': return lparen;
	case ')':return rparen;
	case '+':return plus;
	case '-':return minus;
	case '*':return times;
	case '/':return divide;
	case '%':return mod;
	case '\0':return eos;
	default:return operand;
	}
}

void printToken(precedence token) {
	switch (token) {
	case plus:printf("+"); break;
	case minus:printf("-"); break;
	case times : printf("*"); break;
	case divide: printf("/"); break;
	case mod: printf("%");
	}
}