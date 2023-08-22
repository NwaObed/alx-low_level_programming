#include "main.h"
/**
 * print_line - Print a straight line on the terminal
 * @n: number of times to print -
 * Returns nothing
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n >= 1)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}

