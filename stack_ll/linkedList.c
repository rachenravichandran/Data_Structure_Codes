#include "linkedList.h"

/*
	File name : linkedList.c
	Day 	  : Data Structures
	Purpose   : Creating a linked list with no 
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
	return q;
}

void addNode(NODE **current, NODEELEMENT data)
{
	if(*current == NULL)
	{
		*current = createNode();
		(*current)->data = data;
	}
	else
	{
		NODE *temp = *current;
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = createNode();
		temp->next->data = data;
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
		displayReverse(current->next);
		printf("%d\n",current->data);
	}
}

void insertElement(NODE **current, int position, NODEELEMENT data)
{
	if(*current == NULL)
	{
		puts("No element in the list");
	}
	else
	{
		int i = 0;
		NODE *temp,*q;
		q = createNode();
		q->data = data;
		if(position == 0)
		{
			q->next = *current;
			*current = q;
		}
		else
		{
			temp = *current;		
			while(temp != NULL)
			{
				if(i == position-1)
				{
					q->next = temp->next;
					temp->next = q;
					return;
				}
				i++;
				temp = temp->next;
			}
	 		puts("Position exceeds the Linked List size");
		}
	}	
}

void searchElement(NODE *current, NODEELEMENT data)
{
	if(current == NULL)
	{
		puts("No element in the list. Element not found.");
	}
	else
	{
		while(current != NULL)
		{
			if(data == current->data)
			{
				puts("Element is found");
				return;
			}
			current = current->next;
		}
 		puts("Element not found");
	}	
}

void deleteElement(NODE **current, NODEELEMENT data)
{
	if(*current == NULL)
	{
		puts("No element in the list");
	}
	else if((*current)->data == data)
	{
		NODE *freeVar;
		freeVar = *current;
		*current = (*current)->next;
		free(freeVar);
	}
	else
	{
		
		NODE *temp = *current;
		while(temp->next != NULL)
		{
			if(data == temp->next->data)
			{
				NODE *freeVar = temp->next;
				temp->next = temp->next->next;
				free(freeVar);
				return;
			}
			temp = temp->next;
		}
 		puts("Element not found");
	}
}	

void deletePosition(NODE **current, int position)
{
	if(*current == NULL)
	{
		puts("No element in the list");
	}
	else
	{
		int i = 0;
		NODE *temp,*freeVar;
		if(position == 0)
		{
			freeVar = *current;
			*current = (*current)->next;
			free(freeVar);
		}
		else
		{
			temp = *current;		
			while(temp != NULL)
			{
				if(i == position-1)
				{
					freeVar = temp->next;
					temp->next = temp->next->next;
					free(freeVar);
					return;
				}
				i++;
				temp = temp->next;
			}
	 		puts("Position exceeds the Linked List size");
		}
	}	
}

