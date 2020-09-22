#include "dll.h"

/*
	File name : dll.c
	Day 	  : Data Structures
	Purpose   : Creating a doubly linked list 
*/

NODE* createNode(void)
{
	NODE *q;
	q = (NODE *)malloc(sizeof(NODE));
	if(q == NULL)
	{
		puts("Error in memory allocation");
		exit (1);
	}
	q->next = NULL;
	q->prev = NULL;
	return q;
}

void addNode(NODE **head,NODE **tail,NODEELEMENT data)
{
	if(*head== NULL)
	{
		*head = createNode();
		(*head)->data = data;
		*tail=*head;
	}
	else
	{
		(*tail)->next = createNode();
		(*tail)->next->prev = *tail;
		*tail=(*tail)->next;
		(*tail)->data = data;
	}
}

void displayForward(NODE *current)
{
	if(current != NULL)
	{
		printf("%d\n",current->data);
		displayForward(current->next);
	}
}

void displayReverse(NODE *current)
{
	if(current != NULL)
	{
		printf("%d\n",current->data);
		displayReverse(current->prev);
	}
}

