#include "cdll.h"

/*
	File name : cdll.c
	Day 	  : Data Structures
	Purpose   : Creating a circular doubly  linked list 
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
	return q;
}

void addNode(NODE **head,NODE **tail,NODEELEMENT data)
{
	if(*head== NULL)
	{
		*head = createNode();
		(*head)->data = data;
		(*head)->next = *head;
		(*head)->prev = *head;
		*tail=*head;
	}
	else
	{
		(*tail)->next = createNode();
		(*tail)->next->prev = *tail;
		*tail=(*tail)->next;
		(*tail)->data = data;
		(*tail)->next = *head;
		(*head)->prev = *tail;
	}
}

void displayForward(NODE *current)
{
	NODE *temp = current;
	do
	{
		printf("%d\n",current->data);
		current = current->next;
	}while(current != temp);
}

void displayReverse(NODE *current)
{
	NODE *temp = current;
	do
	{
		printf("%d\n",current->data);
		current = current->prev;
	}while(current != temp);
}

