ex11:
	gcc ex11 -o ex11
ex10: ex10.o ex09.o
	gcc ex10.o ex09.o -o ex10
ex08: ex08.c
	gcc ex08.c -o ex08
ex07: ex07.c
	gcc ex07.c -o ex07
ex06: ex06.c
	gcc ex06.c -o ex06
ex05: ex05.c
	gcc ex05.c -o ex05 -lm
ex04: ex04.c
	gcc ex04.c -o ex04
ex03: ex02.o ex03.o
	gcc ex02.o ex03.o -o ex03

ex10.o: ex10.c ex09.h
	gcc -c ex10.c
ex09.o: ex09.c ex09.h
	gcc -c ex09.c
ex03.o: ex03.c ex02.h
	gcc -c ex03.c
ex02.o: ex02.c ex02.h
	gcc -c ex02.c
