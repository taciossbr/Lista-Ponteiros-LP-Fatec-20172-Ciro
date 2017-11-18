#include <stdbool.h>
#include <stdio.h>


int num_ocorrencias (const char * frase, const char * palavra)
{
    const char *str = frase, *pal = palavra;
    int ocor = 0;

    while (*str != '\0')
    {
        char *tmp = str;
        bool con = true;
        while (*pal != '\0')
        {
            if (*pal != *str)
            {
                con = false;
                break;
            }
            pal++;
            str ++;
        }

        if (con)
        {
            ocor++;
        }

        str = tmp + 1;
        pal = palavra;
    }

    return ocor;
}

int main(){
    printf("%d\n", num_ocorrencias("BANANA", "ANA"));
}