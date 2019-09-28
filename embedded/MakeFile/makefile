helloworld: main.o hello.o world.o
	gcc -o helloworld main.o hello.o world.o

main.o: main.c
	gcc -c main.c

hello.o: hello.c hello.h
	gcc -c hello.c

world.o: world.c world.h
	gcc -c world.c