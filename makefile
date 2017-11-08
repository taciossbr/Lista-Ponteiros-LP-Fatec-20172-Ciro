ex03: ex02.o ex03.o
	gcc ex02.o ex03.o -o ex03

ex03.o: ex03.c ex02.h
	gcc -c ex03.c
ex02.o: ex02.c ex02.h
	gcc -c ex02.c
