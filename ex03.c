#include <stdio.h>
#include "ex02.h"

int main()
{
    double m, p, j, mi;
    scanf(" %lf", &m);
    converte_metragem(m, &p, &j, &mi);
    printf("metro: %.3lf\n", m);
    printf("polegadas: %.3lf\n", p);
    printf("jardas: %.3lf\n", j);
    printf("milhas: %.3lf\n", mi);
    
    return 0;
}