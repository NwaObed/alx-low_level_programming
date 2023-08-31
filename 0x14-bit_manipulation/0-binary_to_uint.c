#include "main.h"

/**
 * binary_to_uint - converts binary num to unsigned int.
 * @b: pointer to a string of binary number
 *
 * Return: unsigned int, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int var;

	var = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		var <<= 1;
		if (b[i] == '1')
			var += 1;
	}
	return (var);
}
