#include "stack.h"

/*
	File name :stack.c
	Day 	  :6
	Purpose   :stack library 
*/

int menu(void)
{
	int choice;
	puts("\t\t\t\tStack Operations\n\t\t\t\t----- ----------\n\t1. Push\n\t2. Pop\n"
	     "\t3. Display\n\t4. Quit\nPlease enter your choice [1 - 4]:");
	scanf("%d",&choice);
	return choice;
}

void create(STACK *s)
{
	s->top = -1;
}

void push(STACK *s, STACKELEMENT data)
{
		s->top++;
		s->array[s->top] = data;
}

STACKELEMENT pop(STACK *s)
{
	return s->array[(s->top)--];
}

STACKELEMENT display(STACK *s)
{
	return s->array[s->top];
}

enum boolean isStackEmpty(STACK *s)
{
	return (s->top == -1) ? True : False ;
}

enum boolean isStackFull(STACK *s)
{
	return (s->top == MAX -1) ? True : False;
}
