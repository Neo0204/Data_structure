#include "main.h"

int main() {

	element item[4];
	item[0].k = 'A';
	item[1].k = 'B';
	item[2].k = 'C';
	item[3].k = 'D';


	node *nodeA = newNode(item[0]);
	node *nodeB = newNode(item[1]);
	node *nodeC = newNode(item[2]);
	node *header = (node*)malloc(sizeof(node));
	node *nodeD = newNode(item[3]);

	first = header;
	
	header->left = nodeC;
	header->right = nodeA;
	nodeA->left = header;
	nodeA->right = nodeB;
	nodeB->left = nodeA;
	nodeB->right = nodeC;
	nodeC->left = nodeB;
	nodeC->right = header;


	printList();
	
	insertNode(nodeA, nodeD);
	
	printList();

	deleteNode(nodeD);

	printList();

	return 0;
}