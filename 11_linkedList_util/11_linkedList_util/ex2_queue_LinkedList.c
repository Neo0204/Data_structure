#include <stdio.h>

typedef struct {
	int k;
}element;
typedef struct queueNode {
	element data;
	struct queueNode* link;
}queueNode;
typedef struct queue {
	queueNode* front, *rear;
}queue;

queue* q;
queue* newQueue();
void enQueue(element item);
int emptyQueue();
element deQueue();
element deQueue();
void freeQueue();

int main() {
	element item[3];
	item[0].k = 10;
	item[1].k = 20;
	item[2].k = 30;

	q = newQueue();
	
	enQueue(item[0]);

	enQueue(item[1]);

	enQueue(item[2]);

	element data;
	
	data = deQueue();
	printf("%d	\n", data.k);
	data = deQueue();
	printf("%d	\n", data.k);
	data = deQueue();
	printf("%d	\n", data.k);
	data = deQueue();
	printf("%d	\n", data.k);

	freeQueue();
	return 0;
}

queue* newQueue() {
	queue* newQueue = (queue*)malloc(sizeof(queue));
	newQueue->front = NULL;
	newQueue->rear = NULL;
	return newQueue;
}

int emptyQueue(){
	return (q->front == NULL);
}
void enQueue(element item) {
	queueNode* newNode = (queueNode*)malloc(sizeof(queueNode));
	newNode->data = item;
	newNode->link = NULL;
	if (emptyQueue()) {
		q->front = newNode;
		q->rear = newNode;

	}
	else {
		q->rear->link = newNode;
		q->rear = newNode;
	}
}

element deQueue() {
	queueNode* ptr = q->front;
	if (q->front)
	{
		element data = ptr->data;
		q->front = ptr->link;
		free(ptr);
		return data;

	}
	else {
		fprintf(stderr, "Queue Empty \n");
		exit(1);
	}
}
void freeQueue() {
	queueNode* ptr;
	while (q->front != NULL) {
		ptr = q->front;
		q->front = ptr->link;
		free(ptr);
	}
	free(q);
}