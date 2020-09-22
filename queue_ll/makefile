all : QUEUELLApp clean

QUEUELLApp : queue_main.c queue_ssl.o linkedList.o os.o
	@gcc -Wall queue_main.c *.o -o QUEUELLApp 
	@echo "Creating QUEUELLApp. This file is available as an executable file."

queue_ssl.o : queue_ssl.c linkedList.o
	@gcc -c queue_ssl.c linkedList.o
	@echo "Creating Queue Data Structure File"

linkedList.o : linkedList.c
	@gcc -c linkedList.c
	@echo "Creating Linked List Data Structure File"

os.o : os.c
	@gcc -c os.c
	@echo "Creating OS function libraries" 

clean :
	@rm *.o
	@echo "Removing all unwanted object files"
