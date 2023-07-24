#include "main.h"
#include <stdio.h>
/**
 * print_array - Print elements of array
 * @a: Pointer to an array of integers
 * @n: number of elements
 * Return: 0 on success
 */
void print_array(int *a, int n)
{
	int i;

	while (i < n)
	{
		printf("%d, ", a[i]);
	}
}

