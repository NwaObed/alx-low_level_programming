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

	for (i = 0; ; i++;)
	{
		for (j = 0; j < strlen(accept); j++)
		{

			if (s[i] == accept[j])
			{
				ptr = &s[i];
				break;
			}
			else
				ptr = NULL;
		}
	}
	return (ptr);
}
