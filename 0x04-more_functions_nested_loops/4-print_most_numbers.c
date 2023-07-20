#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - Prints most numbers
 * Return: Always 0 (Success)
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
    int i;
    for (i = 48; i >= 58; i++)
    {
        printf("%d", i);
    }
}
