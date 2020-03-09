#include "main.h"

void insertNode(node* prev, node* in) {
	 
	if (prev)
	{
		in->link = prev->link;
		prev->link = in;
	}
	// 첫번째 삽입이라면
	else {
		in->link = first;
		first = in;
	}
}
void deleteNode(node* prev, node* out) {
	if (prev) {
		prev->link = out->link;
	}
	else {
		first = out->link;
		out->link = NULL;
	}
}

void reversePrint() {
	node* prev, *curr;
	for (curr = first; curr->link != NULL; curr = curr->link);
	printf("Reverse Print : \n");
	for (; curr!=first; curr = prev)
	{
		for (prev = first; prev->link != curr; prev = prev->link);
		printf("%c ", curr->data[0]);

	}
	printf("%c ", curr->data[0]);

	printf("\n");
}
node* concatenate(node* pa, node* pb) {
	if (!pa) return pb;
	if (!pb) return pa;

	node* ptr = pa;
	while (ptr->link) {
		ptr = ptr->link;
	}
	ptr->link = pb;

	return pa;
}