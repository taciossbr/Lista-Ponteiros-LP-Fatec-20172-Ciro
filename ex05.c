#include <math.h>
#include <stdio.h>

void circunferencia (double r, double *p, double *d, double *a)
{
    *d = 2 * r;
    *p = 2 * M_PI *r;
    *a = M_PI * pow(r, 2);
}

int main()
{
    double f;
    scanf("%lf", &f);
    double f1, f2, f3;
    circunferencia(f, &f1, &f2, &f3);
    printf("p: %lf, d: %lf, a: %lf\n", f1, f2, f3);
}