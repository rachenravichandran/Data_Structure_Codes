all :CDLLApp

CDLLApp :cdll_main.c cdll.o os.o
	@gcc -Wall cdll_main.c cdll.o os.o -o CDLLApp 
	@echo "Creating CDLLApp. This file is available as an executable file."

cdll.o : cdll.c
	@gcc -c cdll.c
	@echo "Creating a Circular Doubly Linked List Data Structure File"

os.o : os.c
	@gcc -c os.c
	@echo "Creating OS function libraries" 
