#include <stdio.h>
#define MAX 9
#define STACKELEMENT int
/*
	File name :stack.h
	Day 	  :6
	Purpose   :stack header files 
*/

struct Stack
{
	STACKELEMENT array[MAX];
	int top;
};

typedef struct Stack STACK;
enum boolean{False,True};

void create(STACK *);
void push(STACK *, STACKELEMENT);
STACKELEMENT pop(STACK *);
STACKELEMENT display(STACK *);
int menu(void);
enum boolean isStackEmpty(STACK *s);
enum boolean isStackFull(STACK *s);

