#include "main.h"
#include <string.h>
/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string to be printed
 * Return: 0 on success
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		_putchar(str[j]);
		i++;
		j += 2;
	}
	_putchar('\n');
}

