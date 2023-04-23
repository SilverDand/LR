all:hello

hello: main.o
	gcc main.o -o lab2
	
main.o: main.c
	gcc -c main.c
	
debug: debug.o
	gcc debug.o -o lab2_debug
	
debug.o: debug.c
	gcc -g -c main.c -o debug.o
	
clean:
	rm -rf *.o lab2 lab2_debug