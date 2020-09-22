#include <stdio.h>
#define MAX 4 
#define QUEUEELEMENT int

/*
	File name : queue.h
	Day 	  : 7
	Purpose   : Header file for queue
*/

struct Queue
{
	QUEUEELEMENT array[MAX];
	int front,rear;
};

typedef struct Queue QUEUE;
enum boolean{False,True};

void queueCreate(QUEUE *);
void enqueue(QUEUE *,QUEUEELEMENT);
QUEUEELEMENT dequeue(QUEUE *);
enum boolean isQueueEmpty(QUEUE *);
enum boolean isQueueFull(QUEUE *);
QUEUEELEMENT front(QUEUE *);
int queueSize(QUEUE *);
int queueMenu(void);
