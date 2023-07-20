#include "main.h"
/**
 * print_triangle : Prints a triangle
 */void print_triangle(int size)
{
int i;
int j;
for (i = (size - 1); i >= 0; i--)
{
for (j = 0; j < size; j++)
{
if ( j >= i)
_putchar('#');
else
_putchar(' ');
}
_putchar('\n');
}
}