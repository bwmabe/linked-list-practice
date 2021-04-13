#include <stdlib.h>
#include <stdio.h>

struct ListItem
{
	struct ListItem* prev;
	struct ListItem* next;
	int data;
};

struct LinkedList 
{
	long length;
	struct ListItem* head;
	struct ListItem* tail;
};


struct LinkedList* LL_initialize(int data);
void LL_add_right(struct LinkedList* ll, int data);
void LL_add_left(struct LinkedList* ll, int data);
struct ListItem* LL_itemAt(struct LinkedList* ll, long index);

