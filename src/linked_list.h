#include <stdlib.h>
#include <stdio.h>

typedef struct LinkedList *LL_PTR;
typedef struct ListItem *LL_IPTR;

struct ListItem
{
	LL_IPTR prev;
	LL_IPTR next;
	int data;
};

struct LinkedList 
{
	LL_IPTR head;
	LL_IPTR tail;
};


LL_PTR LL_initialize(int data);
void LL_add_right(LL_PTR ll, int data);
void LL_add_left(LL_PTR ll, int data);
LL_IPTR LL_itemAt(const LL_PTR ll, long index);
long LL_length(const LL_PTR ll);
void LL_print(const LL_PTR ll);
