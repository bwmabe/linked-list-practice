#include "linked_list.h"

struct LinkedList* LL_initialize(int data)
{
	struct LinkedList* ll = (struct LinkedList*) malloc(sizeof(struct LinkedList));
	struct ListItem* head = (struct ListItem*) malloc(sizeof(struct ListItem));
	ll->head = head;
	ll->tail = head;
	head->data = data;
	return ll;
}

void LL_add_right(struct LinkedList* ll, int data)
{
	struct ListItem* new = (struct ListItem*) malloc(sizeof(struct ListItem));
	new->data = data;
	new->prev = ll->tail;
	new->next = NULL;
	ll->tail = new;
}

void LL_add_left(struct LinkedList* ll, int data)
{
	struct ListItem* new = (struct ListItem*) malloc(sizeof(struct ListItem));
	new->data = data;
	new->next = ll->head;
	new->prev = NULL;
	ll->head = new;
}

struct ListItem* LL_itemAt(struct LinkedList* ll, long index)
{
	if(index < 0)
		return NULL;
	if(index == 0)
		return ll->head;

	struct ListItem* current = ll->head;

	long i;
	for(i = 0; current->next != NULL; i++)
	{
		if(i == index)
			return current;
		current = current->next;
	}
	return current;
}

long LL_length(struct LinkedList* ll)
{
	if(ll->head->next == NULL)
		return 1;
	struct ListItem* current = ll->head;
	long length = 1;
	while(current != NULL)
	{
		length++;
		current = current->next;
	}
	return length;
}
