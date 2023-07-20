#include "main.h"
/**
 * print_diagonal : draw a diagonal line
 * @n the number of lines
 */
void print_diagonal(int n){
if (n <= 0)
_putchar('\n');
else
{
int i;
int j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i == j)
{
_putchar("\\");
_putchar('\n');
break;
}
else
_putchar(' ');
}
}    
}
}
