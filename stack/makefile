all : StackApp

StackApp : stack_main.c stack.o os.o
	@gcc -Wall stack_main.c stack.o os.o -o StackApp 
	@echo "Creating StackApp. This file is available as an executable file."

stack.o : stack.c
	@gcc -c stack.c
	@echo "Creating Stack Data Structure File"

os.o : os.c
	@gcc -c os.c
	@echo "Creating OS function libraries" 
