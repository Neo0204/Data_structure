#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char k;
}element;

typedef struct node{
	struct node *right;
	struct node	*left;
	element data;

}node;

void insertNode(node *prev, node *newNode);
void deleteNode(node *object);
void printList();
node* newNode(element item);

node* first;

#endif // !_MAIN_H
