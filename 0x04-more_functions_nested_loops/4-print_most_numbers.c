#include "main.h"
/**
 * print_most_numbers - Prints most numbers
 * Return: Always 0 (Success)
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
int i = 0;
while (i < 10)
{
if ((i == 2) || (i == 4))
continue;
else
_putchar(i);
i++;
}
_putchar('\n');
}
