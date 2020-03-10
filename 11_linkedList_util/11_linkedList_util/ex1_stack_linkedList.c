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


// 스택 생성 함수
stack* newStack() {
	stack *newStack = (stack*)malloc(sizeof(stack));
	newStack->top = NULL;
	return newStack;
}
// 스택 메모리 해제 함수
void freeStack() {
	stackNode *ptr;

	while (s->top!=NULL) {
		// n 노드
		ptr = s->top; 
		// n+1번째 노드
		s->top = ptr->link;

		// nth node 삭제
		free(ptr);
	}
	
	free(s);
}
// 빈 스택인지 확인
int emptyStack() {

	return (s->top == NULL); // 스택이 공백이면 참 아니면 거짓
}
element topStack()		/* top 원소 반환 */
{
	if (emptyStack()) {		/* 공백 스택 */
		fprintf(stderr, "Error: Stack Empty\n");
		exit(1);
	}
	return s->top->data;
}

void push(element item)
{
	stackNode* ptr = (stackNode*)malloc(sizeof(stackNode));
	ptr->data = item;
	ptr->link = s->top; // s의 top 주소의 값을 ptr의 link에 할당
	s->top = ptr; 
}
element pop() {
	stackNode *ptr = s->top;   // ptr은 삭제될 노드임
	element item = topStack();  // 삭제될 원소를 element에 저장
	s->top = ptr->link; // top node를 삭제
	free(ptr); // 해제;
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