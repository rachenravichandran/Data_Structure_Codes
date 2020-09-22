#include <stdio.h>
#include "cll.h"
#include "os.h"

/*
	File name : cll_Main.c
	Day 	  : Data Structures
	Purpose   : Creating a circular linked list main function
*/


int main()
{
	NODE *head = NULL;
	NODEELEMENT data;
	char choice;
	int ch;

	while(1)
	{
		clearScreen();
		puts("\t\t\t\tCircular Linked List Operations\n");
		puts("\t1. Add/append an element to the list");
		puts("\t2. Display the elements");
		puts("\t3. Display the elements in reverse order");
		puts("\t4. Quit");
		puts("Please enter your choice");
		clearKBuffer();
		scanf("%d",&ch);

		switch (ch)
		{
			case 1:
				puts("Enter the element to be added:");
				scanf("%d",&data);
				addNode(&head,data);
				break;
			case 2:
				if(head == NULL)
				{
					puts("No element to display");
				}
				else
				{
					puts("Contents of the linked list");
					displayForward(head);
				}
				break;
			case 3:
				if(head == NULL)
				{
					puts("No element to display");
				}
				else
				{
					puts("Contents of the linked list in reverse order:");
					displayReverse(head);
				}
				break;
			case 4:
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

