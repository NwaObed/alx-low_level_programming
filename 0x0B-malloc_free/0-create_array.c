#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: stored char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *var;
	unsigned int i;

	if (size == 0)
		return (NULL);

	var = malloc(sizeof(c) * size);

	if (var == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		var[i] = c;

	return (var);
}
