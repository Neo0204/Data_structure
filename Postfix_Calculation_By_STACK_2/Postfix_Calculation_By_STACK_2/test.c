#include "main.h"

char expr[MAX_EXPRE_SIZE] = "123 44 - 72 *      ";
int top = -1;

void stackIsFull()
{
	fprintf(stderr, "Stack is Full");
	exit(1);
}
void stackIsEmpty()
{
	fprintf(stderr, "stack is Empty");
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

precedence getToken(char* symbol, int *n)
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
		case ' ':return space;
		default: return operand;
	}
}

int eval()
{
	int n=0;
	char symbol;
	int op1, op2;
	precedence token;

	int expon = 0;
	int num = 0;
	
	token = getToken(&symbol, &n);
	
	while (token != eos)
	{

		if (token == operand)
		{
			push(symbol - '0');
			expon++;
		}
		else if (token == space)
		{

			if (expon == 0)
				goto OPERATOR;
			for (int i = expon; i > 0; i--)
			{
				int opperand = pop();

				for (int j = 0; j < expon - i; j++)
				{
					opperand *= 10;
				}
				num += opperand;
			}
			push(num);
			num = 0;
			expon = 0;
		}

		else
		{
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
OPERATOR:
		token = getToken(&symbol, &n);
	}
	return pop();
}
