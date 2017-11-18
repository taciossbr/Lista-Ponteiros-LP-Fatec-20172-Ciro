#include "ex09.h"

void somabit(int b1, int b2, int * vaium, int * soma)
{
    *soma = (b1 + b2) % 2;
    *vaium = (b1 + b2) / 2;
}