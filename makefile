lab02: lab02.o lab02.h main.o
	gcc -o lab02 lab02.o main.o

main.o: lab02.h lab02.c main.c
	gcc -c main.c

lab1.o: lab02.h lab02.c
	gcc -c lab02.c

run:
	./lab02

clean:
	rm -f lab02.o main.o lab02
