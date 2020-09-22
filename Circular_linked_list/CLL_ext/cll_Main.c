#include <stdio.h>
#include "cll.h"
#include "os.h"

/*
	File name : linkMain.c
	Day 	  : Data Structures
	Purpose   : Creating a linked list main function
*/


int main()
{
	NODE *head = NULL;
	NODEELEMENT data;
	char choice;
	int position,ch;

	while(1)
	{
		clearScreen();
		puts("\t\t\t\tLinked List Operations\n");
		puts("\t1. Add/append an element to the list");
		puts("\t2. Display the elements");
		puts("\t3. Display the elements in reverse order");
		puts("\t4. Insert an element in a given position");
		puts("\t5. Search for a particular element");
		puts("\t6. Delete an element");
		puts("\t7. Delete an element from a particular position");
		puts("\t8. Sort the elements of the list");
		puts("\t9. Quit");
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
				puts("Enter the position to which the element is to be inserted");
				scanf("%d",&position);
				puts("Enter the element to be inserted");
				scanf("%d",&data);
				insertElement(&head,position,data);
				break;
			case 5:			
				puts("Enter the element to be searched");
				scanf("%d",&data);
				searchElement(head,data);
				break;
			case 6:
				puts("Enter the element to be deleted");
				scanf("%d",&data);
				deleteElement(&head,data);
				break;
			case 7:
				puts("Enter the position at which the element is to be deleted");
				scanf("%d",&position);
				deletePosition(&head,position);
				break;
			case 8:
				sortElement(head);
				break;
			case 9:
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

