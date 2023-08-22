#include "main.h"
#include <string.h>
/**
  * _strpbrk - Locate the first occurrence of byte in a string
  * @s: First string
  * @accept: Secong string
  * Return: Pointer to the byte in first string that match second string
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;
	int accept_len = strlen(accept);
	int s_len = strlen(s);

	i = 0;
	while (i < s_len)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				break;
			}
			else
				ptr = NULL;
		}
		i++;
	}
	return (ptr);
}
