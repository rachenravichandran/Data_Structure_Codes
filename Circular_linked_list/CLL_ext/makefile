all : CLLApp

CLLApp : cll_Main.c cll.o os.o
	@gcc -Wall cll_Main.c cll.o os.o -o CLLApp 
	@echo "Creating CLLApp. This file is available as an executable file."

cll.o : cll.c
	@gcc -c cll.c
	@echo "Creating Circular Linked List Data Structure File"

os.o : os.c
	@gcc -c os.c
	@echo "Creating OS function libraries" 
