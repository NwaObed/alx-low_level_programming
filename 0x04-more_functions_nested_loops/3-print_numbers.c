#include "main.h"
/**
 * print_numbers - print numbers 0-9
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_numbers(void)
{
int i = 0;
while (i < 10)
_putchar(i);
_putchar('\n');
}
