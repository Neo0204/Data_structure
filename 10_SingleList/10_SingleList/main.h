
#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
	char data[3];
	struct node* link;
}node;

node *first;
void insertNode(node * prev, node* in);
void deleteNode(node * object);
void reversePrint();
node* concatenate(node* pa, node* pb);

#endif // !_MAIN_H
