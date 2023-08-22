#include "main.h"
#include <stdio.h>
/**
  * _memset - Fills first n bytes of memory with constant bytes
  * @s: pointer to memory area
  * @b: constant byte
  * @n: number of bytes to fill
  * Return: pointer to the memory area
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

