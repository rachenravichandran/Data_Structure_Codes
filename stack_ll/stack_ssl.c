#include "stack_ssl.h"

/*
	File name : stack_ssl.c
	Day 	  : Data Structures
	Purpose   : Creating a stack using linked list function
*/

void push(NODE **top,NODEELEMENT data)
{
	if(*top==NULL)
	{
 		*top=createNode();
		(*top)->data=data;
	}
	else
	{
		NODE *temp;
		temp=createNode();
		temp->data = data;
		temp->next = *top;
		*top = temp;
	}
}

NODEELEMENT pop(NODE **top)
{
	NODE *temp;
	NODEELEMENT i;
	temp=*top;
	*top=temp->next;
	i=temp->data;
	free(temp);
	return i;
}

NODEELEMENT displayTop(NODE *top)
{
	return top->data;
}
