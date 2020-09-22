all : QueueApp

QueueApp : queueFile.c queue.o os.o
	@gcc -Wall queueFile.c queue.o os.o -o QueueApp 
	@echo "Creating QueueApp. This file is available as an executable file."

queue.o : queue.c
	@gcc -c queue.c
	@echo "Creating Queue Data Structure File"

os.o : os.c
	@gcc -c os.c
	@echo "Creating OS function libraries" 
