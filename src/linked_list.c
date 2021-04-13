#include "linked_list.h"

LL_PTR LL_initialize(int data)
{
	LL_PTR ll = (LL_PTR) malloc(sizeof(struct LinkedList));
	struct ListItem* head = (LL_IPTR) malloc(sizeof(struct ListItem));
	ll->head = head;
	ll->tail = head;
	head->data = data;
	return ll;
}

void LL_add_right(LL_PTR ll, int data)
{
	struct ListItem* new = (LL_IPTR) malloc(sizeof(struct ListItem));
	new->data = data;
	new->prev = ll->tail;
	ll->tail->next = new;
	new->next = NULL;
	ll->tail = new;
}

void LL_add_left(LL_PTR ll, int data)
{
	struct ListItem* new = (LL_IPTR) malloc(sizeof(struct ListItem));
	new->data = data;
	new->next = ll->head;
	ll->head->prev = new;
	new->prev = NULL;
	ll->head = new;
}

LL_IPTR LL_itemAt(const LL_PTR ll, long index)
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

long LL_length(const LL_PTR ll)
{
	if(ll->head->next == NULL)
		return 1;
	LL_IPTR current = ll->head;
	long length = 1;
	while(current != NULL)
	{
		length++;
		current = current->next;
	}
	return length;
}

void LL_print(const LL_PTR ll)
{
	LL_IPTR current = ll->head;
	while(current->next != NULL)
	{
		printf("%d\n", current->data);
		current = current->next;
	}
}
