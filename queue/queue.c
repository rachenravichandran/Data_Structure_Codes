#include "queue.h"

/*
	File name : queue.c
	Day 	  : 7
	Purpose   : Implementation of Queue Data Structure
*/

int queueMenu(void)
{
	int choice;
	printf( "\t\t\t\tQUEUE OPERATIONS\n"
		"\t1. Enqueue\n"
		"\t2. Dequeue\n"
		"\t3. Display the Front element\n"
		"\t4. Display number of elements in Queue\n"
		"\t5. Quit\n"
		"Please enter your choice\n");
	scanf("%d",&choice);
	return choice;
}

void queueCreate(QUEUE *q)
{
	q->front=MAX-1;
	q->rear=MAX-1;
}
	
void enqueue(QUEUE *q,QUEUEELEMENT data)
{
	q->array[q->rear] = data;
	q->rear--;
}

QUEUEELEMENT dequeue(QUEUE * q)
{
	return q->array[(q->front)--];
}

enum boolean isQueueEmpty(QUEUE *q)
{
	return (q->front == q->rear)? True : False;
}

enum boolean isQueueFull(QUEUE *q)
{
	return (q->rear == -1)? True : False;
}

QUEUEELEMENT front(QUEUE *q)
{
	return q->array[q->front];
}

int queueSize(QUEUE *q)
{
	return (q->front) - (q->rear);
}
