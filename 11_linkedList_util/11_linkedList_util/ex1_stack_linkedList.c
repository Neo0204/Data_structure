#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int k;
}element;
typedef struct stackNode{
	element data;
	struct stackNode *link;
}stackNode;
typedef struct stack {
	stackNode* top;
}stack;

stack *s;


// ���� ���� �Լ�
stack* newStack() {
	stack *newStack = (stack*)malloc(sizeof(stack));
	newStack->top = NULL;
	return newStack;
}
// ���� �޸� ���� �Լ�
void freeStack() {
	stackNode *ptr;

	while (s->top!=NULL) {
		// n ���
		ptr = s->top; 
		// n+1��° ���
		s->top = ptr->link;

		// nth node ����
		free(ptr);
	}
	
	free(s);
}
// �� �������� Ȯ��
int emptyStack() {

	return (s->top == NULL); // ������ �����̸� �� �ƴϸ� ����
}
element topStack()		/* top ���� ��ȯ */
{
	if (emptyStack()) {		/* ���� ���� */
		fprintf(stderr, "Error: Stack Empty\n");
		exit(1);
	}
	return s->top->data;
}

void push(element item)
{
	stackNode* ptr = (stackNode*)malloc(sizeof(stackNode));
	ptr->data = item;
	ptr->link = s->top; // s�� top �ּ��� ���� ptr�� link�� �Ҵ�
	s->top = ptr; 
}
element pop() {
	stackNode *ptr = s->top;   // ptr�� ������ �����
	element item = topStack();  // ������ ���Ҹ� element�� ����
	s->top = ptr->link; // top node�� ����
	free(ptr); // ����;
	return item;
}
int main() {

	s = newStack();
	element item[3];
	item[0].k = 10;
	item[1].k = 20;
	item[2].k = 30;

	push(item[0]);
	push(item[1]);
	push(item[2]);

	item[1] = pop();
	printf("%d  \n", item[1].k);

	item[1] = pop();
	printf("%d  \n", item[1].k);

	item[1] = pop();
	printf("%d  \n", item[1].k);

	item[1] = pop();
	printf("%d  \n", item[1].k);

	return 0;
}