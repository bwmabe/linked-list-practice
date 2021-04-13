#include "../src/linked_list.h"

int main()
{
	struct LinkedList *ll = LL_initialize(4);
	printf("len: %ld\n", LL_length(ll));
	LL_add_right(ll, 7);
	LL_add_left(ll, 88);
	printf("head: %d\n", ll->head->data);
	printf("old head: %d\n", LL_itemAt(ll, 1)->data);
	printf("tail: %d\n", ll->tail->data);
	printf("len: %ld\n", LL_length(ll));
	return 0;
}
