#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *charout;
	int abc, i, j, xyz;

	if (ac == 0)
		return (NULL);

	for (abc = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			abc++;
		abc++;
	}

	charout = malloc((abc + 1) * sizeof(char));

	if (charout == NULL)
	{
		free(charout);
		return (NULL);
	}

	for (i = j = xyz = 0; xyz < abc; j++, xyz++)
	{
		if (av[i][j] == '\0')
		{
			charout[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (xyz < abc - 1)
			charout[xyz] = av[i][j];
	}
	charout[ia] = '\0';

	return (charout);
}
