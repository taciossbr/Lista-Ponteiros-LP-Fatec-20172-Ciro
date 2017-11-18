#include <stdio.h>

int main (void)
{
    int m, n;
    scanf(" %d %d", &m, &n);
    int i, l, mat[m][n], *p;
    for (i = 0, l = m *n, p = mat; i < l; i++)
    {
        scanf(" %d", p++);
    }
    int v[n], j, soma = 0, *p1 = v;
    for (i = 0, p = mat; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            soma += *p;
            p++;
        }
        *p1 = soma;
        p1++;
        soma = 0;
    }
    for (i = 0, p = v; i < n; i++)
    {
        printf("v[%d] = %d\n", i, *p);
        p++;
    }
    return 0;
}