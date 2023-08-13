#include "main.h"
/**
  * _memcpy - Copies n bytes from source memory to destination
  * @dest: Pointer to the destination memory
  * @src: Pointer to the source memory
  * @n: number of bytes to copy
  * Return: pointer to destination memory
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

