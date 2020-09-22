#include <stdio.h>
#include "os.h"
#include "queue.h"

/*
	File name : queueFile.c
	Day 	  : 7
	Purpose   : A sample file using Queue Data Structure
*/

int main()
{
	QUEUE q;
	int ch;
	QUEUEELEMENT pushData;
	queueCreate(&q);
	while(1)
	{
		clearScreen();
		ch = queueMenu();
		switch (ch)
		{
			case 1:
				if(isQueueFull(&q))
				{
					puts("Queue is Full. Enqueue operation not permitted");
				}
				else
				{
					puts("Enter the element to be queued");
					scanf("%d",&pushData);
					enqueue(&q,pushData);
				}
				break;
			case 2:
				if(isQueueEmpty(&q))
				{
					puts("Queue is empty. Dequeue operation not permitted");
				}
				else
				{
					printf("The popped data is %d\n",dequeue(&q));
				}
				break;
			case 3:
				if(isQueueEmpty(&q))
				{
					puts("Queue is empty. No elements to display");
				}
				else
				{
					printf("The front element is %d\n", front(&q));
				}
				break;
			case 4:
				printf("The number of element in the queue is %d\n",queueSize(&q));
				break;
			case 5:
				printf("Quitting\n");
				exit (0);
			default:
				printf("Invalid Option\n");
				break;
		}
		if(isQueueEmpty(&q))
		{
			queueCreate(&q);
		}
		puts("Press ENTER to continue...");
		clearKBuffer();
		getchar();
	}
	return 0;
}

