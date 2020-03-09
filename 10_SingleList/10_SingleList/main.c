#include "main.h"
int main() {

	node nodeA, nodeB;
	node nodeC, nodeD;
	node nodeX, nodeY, nodeZ;

	node *curr;
	first = &nodeA;
	nodeA.data[0] = 'A';
	nodeB.data[0] = 'B';
	nodeC.data[0] = 'C';
	nodeD.data[0] = 'D';

	nodeX.data[0] = 'X';
	nodeY.data[0] = 'Y';
	nodeZ.data[0] = 'Z';
	nodeX.link = &nodeY;
	nodeY.link = &nodeZ;
	nodeZ.link = NULL;

	nodeA.link = &nodeB;
	nodeB.link = NULL;

	insertNode(NULL, &nodeC);
	insertNode(&nodeB, &nodeD);
	
	deleteNode(&nodeA,&nodeB);
	deleteNode(NULL, &nodeC);


	curr = first;
	
	while (curr != NULL) {
		printf("%c\n", curr->data[0]);
		curr = curr->link;
	}

	concatenate(&nodeA, &nodeX);
	reversePrint();



	return 0;
}