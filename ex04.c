#include <stdio.h>

void get_data(int, int*, int*, int*);

int main()
{
    int seg, min, hrs;
    scanf(" %d", &seg);
    get_data(seg, &hrs, &min, &seg);
    printf("%d horas, %d minutos, %d segundos.\n",
    hrs, min, seg);

    return 0;
}

void get_data(int seg, int *hrs, int *min, int *segs)
{
    *hrs = seg / 3600;
    seg %= 3600;
    *min = seg / 60;
    *segs = seg % 60;
}