#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#define NODEELEMENT int

/*
	File name : cdll.h
	Day 	  : Data Structures
	Purpose   : Creating a circular doubly linked list headers
*/

struct Node
{
	NODEELEMENT data;
	struct Node *next,*prev;
};

typedef struct Node NODE;

NODE* createNode(void);
void addNode(NODE **,NODE **,NODEELEMENT);
void displayForward(NODE *);
void displayReverse(NODE *);
