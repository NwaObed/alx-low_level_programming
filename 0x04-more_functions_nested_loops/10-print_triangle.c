#include "main.h"
/**
 * print_diagonal : draw a diagonal line
 * @size the number of lines
 */
void print_triangle(int size)
{
int i;
int j;
for (i = (size - 1); i >= 0; i--)
{
for (j = 0; j < size; j++)
{
if ( j >= i)
_putchar(35);
else
_putchar(' ');
}
_putchar('\n');
}
}
