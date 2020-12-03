all: get_argumentative.o main.o
	gcc -o get_argumentative main.o get_argumentative.o

main.o: main.c get_argumentative.h
	gcc -c main.c

game_level.o: get_argumentative.c
	gcc -c get_argumentative.c

.PHONY: clean 

clean: 
	-rm *.o
	
run: get_argumentative
	./get_argumentative