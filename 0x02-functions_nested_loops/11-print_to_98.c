#include <stdio.h>

#include "main.h"

void print_to_98(int n)
{
    char numStr[5];
    
    
    if (n < 98)
    {
        int i;
        while (n <= 98)
        {
           sprintf(numStr, "%d", n);
           for (i=0; numStr[i] != '\0';  i++)
                _putchar(numStr[i]);
           if (n != 98)
           {
                _putchar(',');
                _putchar(' ');
           }
           else
                break;
           n++;
        }
        _putchar('\n');
               
    }
    else
    {
        int i;
        while (n >= 98)
        {
           sprintf(numStr, "%d", n);
           for (i=0; numStr[i] != '\0';  i++)
           {
               _putchar(numStr[i]);
           }
           if (n != 98)
           {
                _putchar(',');
                _putchar(' ');
           }
           else
                break;
            n--;
        }
        _putchar('\n');
    }
}