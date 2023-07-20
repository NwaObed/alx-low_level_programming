#include "main.h"
/**
 * print_line: print a straight line on the terminal
 * @n: number of times to print -
 * Returns nothing
 */
void print_line(int n)
{
    if (n <= 0)
        _putchar('\n');
    else
        {
            while (n > 0)
                _putchar('_');
            _putchar('\n');
        }
}
