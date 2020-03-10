#include "main.h"

void printList() {
	node* current = first->right;
	printf("Insert Order :");

	while (current !=first) {

		printf("%c ",current->data.k);
		current = current->right;
	}
	printf("\n");
	
}
node* newNode(element item) {
	node* newNode = (node*) malloc(sizeof(node));
	newNode->right = NULL;
	newNode->data = item;
	newNode->left = NULL;
	return newNode;
}
void insertNode(node *prev, node *newNode)
{
	node* ptr;
	newNode->right = prev->right;
	newNode->left = prev;
	prev->right->left = newNode;
	prev->right = newNode;
}
void deleteNode(node *object) {
	if (object == first)
	{
		fprintf(stderr, "cannot delete head node \n");
		exit(1);
	}
	else {
		object->right->left = object->left;
		object->left->right = object->right;
	}

	free(object);
}