#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to  2D int array.
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **matout;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	matout = malloc(height * sizeof(int *));
	if (matout == NULL)
	{
		free(matout);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matout[i] = malloc(width * sizeof(int));
		if (matout[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(matout[i]);
			free(matout);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			matout[i][j] = 0;

	return (matout);
}
