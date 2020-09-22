all : StackApp clean

StackApp : stack_main.c stack.o os.o
	@gcc -Wall -g stack_main.c stack.o os.o -o StackApp 
	@echo "Creating StackApp. This file is available as an executable file."

stack.o : stack.c
	@gcc -c -g stack.c
	@echo "Creating Stack Data Structure File"

os.o : os.c
	@gcc -c -g os.c
	@echo "Creating OS function libraries" 

clean : os.o stack.o
	@rm *.o
	@echo "Cleaning all object files"
