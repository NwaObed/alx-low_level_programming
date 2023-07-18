#include <stdio.h>
#include "main.h"
/**
 * times_table - Print 9-times table
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i = 0;
while (i <= 9)
{
    int j = 0;
    int val;
    while (j <= 9)
    {
        val = i * j;
        
        if (j != 9)
            printf("%3d, ",val);
        else
            printf("%3d",val);
        j++;
    }
    if (i != 9)
        _putchar('\n');
    else
        break;
    i++;
}
_putchar('\n');
}
