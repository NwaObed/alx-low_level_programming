#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - Print last digit of a number
 * @num: The number
 * Return: Always 0 (Success)
 */
int print_last_digit(int num)
{
int ld;
ld = (num % 10);
if (ld < 0)
{
ld = (-1 * ld);
}
_putchar(ld + '0');
return (ld);
}
