#include "linked_list.h"

struct LinkedList* LL_initialize(int data)
{
	struct LinkedList* ll = (struct LinkedList*) malloc(sizeof(struct LinkedList));
	struct ListItem* head = (struct ListItem*) malloc(sizeof(struct ListItem));
	ll->head = head;
	ll->tail = head;
	head->data = data;
	ll->length = 1;
	return ll;
}

void LL_add_right(struct LinkedList* ll, int data)
{
	struct ListItem* new = (struct ListItem*) malloc(sizeof(struct ListItem));
	new->data = data;
	new->prev = ll->tail;
	new->next = NULL;
	ll->tail = new;
	ll->length++;
}

void LL_add_left(struct LinkedList* ll, int data)
{
	struct ListItem* new = (struct ListItem*) malloc(sizeof(struct ListItem));
	new->data = data;
	new->next = ll->head;
	new->prev = NULL;
	ll->head = new;
	ll->length++;
}

struct ListItem* LL_itemAt(struct LinkedList* ll, long index)
{
	struct ListItem* current = (struct ListItem*) malloc(sizeof(struct ListItem));

	current = ll->head;

	if(index >= ll->length)
		return NULL;
	if(index < 0)
		return NULL;
	if(index == 0)
		return ll->head;

	long i;
	for(i = 0; i < index; i++)
		current = ll->head->next;

	return current;
}
