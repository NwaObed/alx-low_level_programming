#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to move
 * 		 from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, nto = 0;

	while (flip > 0)
	{
		nto += (flip & 1);
		flip >>= 1;
	}

	return (nto);
}
