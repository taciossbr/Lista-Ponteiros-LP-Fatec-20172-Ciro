ex06: ex06.c
	gcc ex06.c -o ex06
ex05: ex05.c
	gcc ex05.c -o ex05 -lm
ex04: ex04.c
	gcc ex04.c -o ex04
ex03: ex02.o ex03.o
	gcc ex02.o ex03.o -o ex03

ex03.o: ex03.c ex02.h
	gcc -c ex03.c
ex02.o: ex02.c ex02.h
	gcc -c ex02.c
