#include "cll.h"

/*
	File name : cll.c
	Day 	  : Data Structures
	Purpose   : Creating a circular linked list 
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

void addNode(NODE **current, NODEELEMENT data)
{
	if(*current == NULL)
	{
		*current = createNode();
		(*current)->data = data;
		(*current)->next=*current;
	}
	else
	{
		NODE *temp = *current;
		while(temp->next != *current)
		{
			temp = temp->next;
		}
		temp->next = createNode();
		temp->next->data = data;
		temp->next->next =*current;
		
	}
}

void displayForward(NODE *current)
{
 	NODE *temp=current;
	do{
		printf("%d\n",current->data);
		current=current->next;
	}while(current != temp);
}

void displayReverse(NODE *current)
{
	NODE *temp = current;
	int i=0,count=0;
	count = 0;
	while(current->next!=temp)
	{
		current = current->next;
		count++;
	}
	printf("%d\n",current->data);
	while(count > 0)
	{
		current = temp;
		i=0;
		while(i<count-1)
		{
			current = current->next;
			i++;
		}
		printf("%d\n",current->data);
		count--;
	}
}

