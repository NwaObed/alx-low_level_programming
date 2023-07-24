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
	int i, j;
	char temp;

	for (i = 0, j = str_len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

