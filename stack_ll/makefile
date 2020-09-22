all : STACKLLApp clean

STACKLLApp : stack_main.c stack_ssl.o linkedList.o os.o
	@gcc -Wall stack_main.c *.o -o STACKLLApp 
	@echo "Creating STACKLLApp. This file is available as an executable file."

stack_ssl.o : stack_ssl.c linkedList.o
	@gcc -c stack_ssl.c linkedList.o
	@echo "Creating Stack Data Structure File"

linkedList.o : linkedList.c
	@gcc -c linkedList.c
	@echo "Creating Linked List Data Structure File"

os.o : os.c
	@gcc -c os.c
	@echo "Creating OS function libraries" 

clean :
	@rm *.o
	@echo "Removing all unwanted object files"
