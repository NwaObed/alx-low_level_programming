#include <string.h>
#include "main.h"
/**
  * *_strncat - Concat two strings to n bytes of source
  * @dest: Destination address
  * @src: Source address
  * @n: number of bytes to append to dest from source
  * Return: dest - destination address
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int src_s = (int)strlen(src);

	for (i = 0; ; i++)
	{
		if (dest[i] == '\0')
		{
			if (src_s < n)
			{
				for (j = 0; src[i] != '\0'; j++)
				{
					dest[i] = src[j];
					i++;
				}
				dest[i] = '\0';
				break;
			}
			else
			{
				for (j = 0; j < n; j++)
				{
					dest[i] = src[j];
					i++;
				}
				break;
			}
		}
	}
	return (dest);
}

