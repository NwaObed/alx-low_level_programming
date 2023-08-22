#include "main.h"
#include <string.h>
/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string to be printed
 * Return: 0 on success
 */
void puts2(char *str)
{
	int i;

	if (str[0] == '\0')
		_putchar('\n');
	else
	{
		_putchar(str[0]);
		for (i = 1; str[i] != '\0'; i++)
		{
			if (i % 2 == 0)
				_putchar(str[i]);
			else
				continue;
		}
		_putchar('\n');
	}
}

