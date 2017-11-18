#include <ctype.h>
#include <stdio.h>

void strupper(char *str);

int main(void)
{
    char str[41];
    scanf(" %40[^\n]", str);

    strupper(str);
    printf("%s\n", str);

    return 0;
}

void strupper(char *str)
{
    while(*str != '\0')
    {
        *str = toupper(*str);
        str++;
    }
}
