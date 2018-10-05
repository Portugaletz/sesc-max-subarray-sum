run:quack
	./quack
quack:duck.c
	gcc -std=c99 duck.c -o quack
build:quack
