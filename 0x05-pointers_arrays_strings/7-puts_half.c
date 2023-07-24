#include "main.h"
#include <string.h>
/**
 * puts_half - Prints half a string
 * @str: Pointer to the string
 * Return: 0 on success
 */
void puts_half(char *str)
{
	int str_len;
	int half_len;
	int i;

	str_len = strlen(str);
	if (str_len % 2 != 0)
	{
		half_len = (str_len - 1) / 2;
		i = 0;
		for (i = (half_len - 1); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		half_len = str_len / 2;
		i = 0;
		for (i = half_len; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

