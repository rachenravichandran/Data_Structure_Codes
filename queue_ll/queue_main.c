#include <stdio.h>
#include "queue_ssl.h"
#include "os.h"

/*
	File name : queue_main.c
	Day 	  : Data Structures
	Purpose   : Creating a queue menu using linked list function
*/

int main()
{
	NODE *front = NULL, *rear = NULL;
	NODEELEMENT data;
	char choice;
	int ch;

	while(1)
	{
		clearScreen();
		puts("\t\t\t\tQueue Operations (Using Linked List)\n");
		puts("\t1. Push an element to the rear of the Queue");
		puts("\t2. Pop an element from the front of the Queue");
		puts("\t3. Display the queue element at the front");
		puts("\t4. Display the queue element at the rear");
		puts("\t5. Quit");
		puts("Please enter your choice");
		clearKBuffer();
		scanf("%d",&ch);

		switch (ch)
		{
			case 1:
				puts("Enter the element to be queued:");
				scanf("%d",&data);
				enqueue(&front,&rear,data);
				break;
			case 2:
				if(front == NULL)
				{
					puts("Queue Empty");
				}
				else
				{
					printf("The dequeued data is %d\n",dequeue(&front,&rear));
				}
				break;
			case 3:
				if(front == NULL)
				{
					puts("Queue Empty");
				}
				else
				{
					printf("Content of the Front element is %d\n",displayFront(front));
				}
				break;
			case 4:
				if(rear == NULL)
				{
					puts("Queue Empty");
				}
				else
				{
					printf("Content of the Rear element is %d\n",displayRear(rear));
				}
				break;
			case 5:
				puts("Quitting");
				exit (0);
				break;
			default:
				puts("Invalid Option");			
		}
		puts("Do you want to continue(y/n)?");
		clearKBuffer();
		scanf("%c",&choice);
		if(choice == 'N' || choice == 'n')
		{
			break;
		}
	}
	
	return 0;
}

