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

	i = 0;
	str_len = strlen(str)
	if (str_len % 2 != 0)
	{
		half_len = (str_len - 1) / 2;
		while ((i >= half_len) & (i < str_len));
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		half_len = str_len / 2;
		while ((i >= half_len) & (i < str_len))
		{
			_putchar(str[i]);
			i++;
		}
	}
}
