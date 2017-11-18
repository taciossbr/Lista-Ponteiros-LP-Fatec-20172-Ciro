#include <stdio.h>
#include "ex09.h"

int main(void)
{
    int b1, b2;
    scanf(" %d %d", &b1, &b2);
    int soma, vai;
    somabit(b1, b2, &vai, &soma);
    printf("\t2\t1\n");
    printf("\t%d\t%d\n", vai, soma);

    return 0;
    
}
