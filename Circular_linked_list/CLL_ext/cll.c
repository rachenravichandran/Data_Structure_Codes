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

void sortElement(NODE *current)
{
	if(current == NULL)
	{
		puts("List is empty. Sorting not possible");
	}
	else
	{
		NODE *temp = current;
		int i=0,count=0;
		do
		{
			count = 0;
			while(current->next!=NULL)
			{
				if(current->data > current->next->data)
				{
					NODEELEMENT temp = current->data;
					current->data = current->next->data;
					current->next->data = temp;
				}
				current = current->next;
				count++;
			}
			current = temp;
			i++;
		}while(i<count);
		puts("Elements are sorted");
	}
}
			
