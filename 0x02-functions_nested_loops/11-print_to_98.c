#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print naturak=l num from n to 98
 * @n: start point
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
n++;
}
}
else
{
while (n >= 98)
{
if (n != 98)
printf("%d, ", n);
else
printf("%d\n", n);
n--;
}
}
}
