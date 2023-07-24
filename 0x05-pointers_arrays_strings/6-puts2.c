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

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

