all:hello

hello: main.o
	gcc main.o -o lab1
	
main.o: main.c
	gcc -c main.c
	
debug: debug.o
	gcc debug.o -o lab1_debug
	
debug.o: debug.c
	gcc -g -c main.c -o debug.o
	
clean:
	rm -rf *.o lab1 lab1_debug