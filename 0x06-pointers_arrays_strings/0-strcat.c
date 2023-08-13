#include <string.h>
#include <stdio.h>
#include "main.h"
/**
  * *_strcat - Concatenates two strings
  * @dest: destination address
  * @src: source address
  * Return: destination address
  */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; ; i++)
	{
		if (dest[i] == '\0')
		{
			for (j = 0; src[j] != 0; j++)
			{
				dest[i] = src[j];
				i++;
			}
			dest[i] = '\0';
			break;
		}
	}
	return (dest);
}

