#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#define NODEELEMENT int

/*
	File name : linkedList.h
	Day 	  : Data Structures
	Purpose   : Creating a linked list headers
*/

struct Node
{
	NODEELEMENT data;
	struct Node *next;
};

typedef struct Node NODE;

NODE* createNode(void);
void addNode(NODE **,NODEELEMENT);
void displayForward(NODE *);
void displayReverse(NODE *);
void insertElement(NODE **, int, NODEELEMENT);
void searchElement(NODE *, NODEELEMENT);
void deleteElement(NODE **, NODEELEMENT);
void deletePosition(NODE **,int);

