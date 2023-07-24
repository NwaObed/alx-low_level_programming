#include "main.h"
#include <string.h>
/**
 * print_rev - Print str in reverse order
 * @s: Pointer to the string to be printed
 * Return: 0 (Success)
 */
void print_rev(char *s)
{
	int str_len = strlen(s);
	int i;

	for (i = 0; i < str_len; i++)
		_putchar(s[str_len - 1 - i]);
}

