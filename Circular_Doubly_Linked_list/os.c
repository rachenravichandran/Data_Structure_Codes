#include "os.h"

/*
	File name :os.c
	Day 	  :7
	Purpose   :function definition for os 
*/

void clearScreen(void)
{
 system("clear");
}
void clearKBuffer(void)
{
 __fpurge(stdin);
}
