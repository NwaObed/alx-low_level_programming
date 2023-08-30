#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments in to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int inp, val, sum = 0;

	for (inp = 1; inp < argc; inp++)
	{
		for (val = 0; argv[inp][val]; val++)
		{
			if (argv[inp][val] < '0' || argv[inp][val] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[inp]);
	}

	printf("%d\n", sum);

	return (0);
}
