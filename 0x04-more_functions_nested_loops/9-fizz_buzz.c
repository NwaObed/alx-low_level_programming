#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
	print_fizzbuzz();
	return (0);
}
/**
* print_fizzbuzz - print fizz buzz
*/
void print_fizzbuzz(void)
{
	int i;
	char fizz[] = "Fizz ";
	char buzz[] = "Buzz ";
	char fb[] = "FizzBuzz ";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
			printf("%s", fizz);
		else if ((i % 5) == 0)
			printf("%s", buzz);
		else if (((i % 3) == 0) & ((i % 5) == 0))
			printf("%s", fb);
		else
		printf("%d ", i);
	}
	printf("\n");
}

