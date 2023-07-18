#include "main.h"

char test[] = "_putchar\n";
int i;

int main()
{
    for (i = 0; test[i] != '\0'; i++)
    {
        _putchar(test[i]);
    }
    return 0;
}

