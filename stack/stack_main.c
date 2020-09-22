#include <stdio.h>
#include "os.h"
#include "stack.h"

/*
	File name :stack_main.c
	Day 	  :6
	Purpose   :stack main file 
*/

int main()
{	
	int choice;
	STACK s;
	create(&s);
	STACKELEMENT data;
	while(1)
	{
		clearScreen();
		choice = menu();	
		switch (choice)
		{
			case 1:
				if(isStackFull(&s))
				{
					puts("Stack Overflow");
				}
				else
				{
					puts("Enter the data to be stacked");
					scanf("%i",&data);
					push(&s,data);
				}
				break;
			case 2:
				if(isStackEmpty(&s))
				{
					puts("Stack Underflow");
				}
				else
				{
					printf("%d is popped\n",pop(&s));
				}
				break;
			case 3:
				if(isStackEmpty(&s))
				{
					puts("Stack Empty");
				}
				else
				{
					printf("Current Stack element is %d\n",display(&s));
				}
				break;
			case 4:
				puts("Quitting the program");
				exit (0);
			default:
				puts("Invalid choice");
				break;
		}
		puts("Press ENTER to continue...");
		clearKBuffer();
		getchar();	
	}			
	return 0;
}

