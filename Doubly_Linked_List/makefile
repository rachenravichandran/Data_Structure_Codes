all :DLLApp

DLLApp :dll_main.c dll.o os.o
	@gcc -Wall dll_main.c dll.o os.o -o DLLApp 
	@echo "Creating DLLApp. This file is available as an executable file."

dll.o : dll.c
	@gcc -c dll.c
	@echo "Creating Doubly Linked List Data Structure File"

os.o : os.c
	@gcc -c os.c
	@echo "Creating OS function libraries" 
