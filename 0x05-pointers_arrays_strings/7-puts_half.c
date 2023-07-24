#include "main.h"
#include <string.h>
/**
 * puts_half - Prints half a string
 * @str: Pointer to the string
 * Return: 0 on success
 */
void puts_half(char *str)
{
	int half_len;
	int i;

	i = 0;
	if (str_len % 2 != 0)
	{
		half_len = (strlen(str) - 1) / 2;
		while ((i >= half_len) & (i < strlen(s)));
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		half_len = strlen(str) / 2;
		while ((i >= half_len) & (i < strlen(s)))
		{
			_putchar(str[i]);
			i++;
		}
	}
}
