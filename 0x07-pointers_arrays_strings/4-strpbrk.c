#include "main.h"
#include <string.h>
#include <stdio.h>
/**
  * _strpbrk - Locate the first occurrence of byte in a string
  * @s: First string
  * @accept: Secong string
  * Return: Pointer to the byte in first string that match second string
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr = NULL;
	int accept_len = strlen(accept);
	int s_len = strlen(s);

	i = 0;	
	while (i < s_len && ptr == NULL)
	{
		for (j = 0; j < accept_len; j++)
		{
			printf("%d \n", i);
			if (accept[j] == s[i])
			{
				printf("%c, %c \n", s[i], accept[j]);
				ptr = &s[i];
				break;
			}
		}
		i++;
	}
	return (ptr);
}
