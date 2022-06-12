.PHONY: all run clean
CC = g++  
FLAGS= 
HEADERS = 
all: main

main: main.o  nba.o  Team.o 
	$(CC) main.o  nba.o Team.o -o main

%.o: %.c 
	$(CC) -c $< -o $@

clean:
	rm -f *.o main
