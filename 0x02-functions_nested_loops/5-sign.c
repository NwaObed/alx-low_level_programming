#include "main.h"
/**
 * print_sign - Print sign of a number
 * @n: The number
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
_putchar('1');
return (-1);
}
}
