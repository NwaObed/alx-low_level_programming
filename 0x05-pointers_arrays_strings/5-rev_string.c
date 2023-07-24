#include "main.h"
#include <string.h>
/**
 * rev_string - Reverse a string
 * @s: Pointer to the string to be reversed
 * Return: 0 on success
 */
void rev_string(char *s)
{
	int str_len = strlen(s);
	char *rev_s;
	int i;

	for (i = 0; i < str_len; i++)
		rev_s[i] = s[str_len - 1 - i];
	*s = *rev_s;
}

