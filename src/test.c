#include "../src/linked_list.h"

void simpleTest()
{
	struct LinkedList *ll = LL_initialize(4);
	printf("len: %ld\n", LL_length(ll));

	LL_add_right(ll, 7);
	LL_add_left(ll, 88);
	
	printf("head: %d\n", ll->head->data);
	printf("old head: %d\n", LL_itemAt(ll, 1)->data);
	printf("tail: %d\n", ll->tail->data);
	printf("len: %ld\n", LL_length(ll));
}

void largeTest()
{
	LL_PTR ll = LL_initialize(0);
	long i = 0;
	printf("empty large list\n");
	printf("head: %d\ntail: %d\nlength %ld\n", ll->head->data, ll->tail->data, LL_length(ll));
	for(; i < 4096; i++)
		LL_add_right(ll, i);
	printf("add right\n");
	printf("head: %d\ntail: %d\nlength %ld\n", ll->head->data, ll->tail->data, LL_length(ll));
	for(; i > 0; i--)
		LL_add_left(ll, i);
	printf("add left\n");
	printf("head: %d\ntail: %d\nlength %ld\n", ll->head->data, ll->tail->data, LL_length(ll));
	LL_print(ll);
}


int main()
{
	simpleTest();
	largeTest();
	return 0;
}
