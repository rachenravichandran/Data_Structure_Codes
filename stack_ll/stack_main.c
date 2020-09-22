#include <stdio.h>
#include "stack_ssl.h"
#include "os.h"

/*
	File name : stack_main.c
	Day 	  : Data Structures
	Purpose   : Creating a stack menu using linked list function
*/

int main()
{
	NODE *top = NULL;
	NODEELEMENT data;
	char choice;
	int ch;

	while(1)
	{
		clearScreen();
		puts("\t\t\t\tStack Operations (Using Linked List)\n");
		puts("\t1. Push an element to the Stack");
		puts("\t2. Pop an element from the Stack");
		puts("\t3. Display the stack element at the top");
		puts("\t4. Quit");
		puts("Please enter your choice");
		clearKBuffer();
		scanf("%d",&ch);

		switch (ch)
		{
			case 1:
				puts("Enter the element to be pushed:");
				scanf("%d",&data);
				push(&top,data);
				break;
			case 2:
				if(top == NULL)
				{
					puts("Stack Underflow");
				}
				else
				{
					printf("The popped data is %d\n",pop(&top));
				}
				break;
			case 3:
				if(top == NULL)
				{
					puts("Stack Underflow");
				}
				else
				{
					printf("Content of the top element is %d\n",displayTop(top));
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

