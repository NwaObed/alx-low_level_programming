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
	i = 0;

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
			i++;
		}
		else
		{
			printf("%d, ", a[i]);
			i++;
		}
	}
	printf("\n");
}

