all : LLApp

LLApp : linkMain.c linkedList.o os.o
	@gcc -Wall linkMain.c linkedList.o os.o -o LLApp 
	@echo "Creating LLApp. This file is available as an executable file."

linkedList.o : linkedList.c
	@gcc -c linkedList.c
	@echo "Creating Linked List Data Structure File"

os.o : os.c
	@gcc -c os.c
	@echo "Creating OS function libraries" 
