#include "main.h"
#include <string.h>
/**
  * _strspn - Gets the length of a prefix substring
  * @s: Initial segment
  * @accept: Bytes to consider
  * Return: Number of bytes in s consisting of bytes from accept
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int accept_len = strlen(accept);

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
				count++;
		}
	}
	return (count);
}
