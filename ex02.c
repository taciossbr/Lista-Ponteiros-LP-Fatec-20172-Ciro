#include "ex02.h"

void converte_metragem(double m, double *pol, double *jar, double *mil)
{
    *pol = m * 39.37;
    *jar = m * 1.0936;
    *mil = m * 0,00063;
}