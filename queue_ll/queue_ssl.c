#include "queue_ssl.h"

/*
	File name : queue_ssl.c
	Day 	  : Data Structures
	Purpose   : Creating a queue using linked list function
*/

void enqueue(NODE **front, NODE **rear, NODEELEMENT data)
{
	if(*front==NULL)
	{
 		*front=createNode();
		(*front)->data=data;
		*rear = *front;
	}
	else
	{
		NODE *temp;
		temp=createNode();
		temp->data = data;
		(*rear)->next = temp;
		*rear = temp;
	}
}

NODEELEMENT dequeue(NODE **front, NODE **rear)
{
	NODE *temp;
	NODEELEMENT i;
	temp=*front;
	*front=temp->next;
	i=temp->data;
	free(temp);
	if(*front == NULL)
	{
		*rear = NULL;
	}
	return i;
}

NODEELEMENT displayFront(NODE *front)
{
	return front->data;
}

NODEELEMENT displayRear(NODE *rear)
{
	return rear->data;
}
