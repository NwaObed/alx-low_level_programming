#include "dog.h"
#include <stdio.h>
/**
  * print_dog - Print a type struct dog
  * @d: Pointer to the dog
  * Return: Nothing on success
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else if (d->owner == NULL)
			printf("(nil)");
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %6f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
	else
		printf("Invalid pointer, dog does not exist");
}
