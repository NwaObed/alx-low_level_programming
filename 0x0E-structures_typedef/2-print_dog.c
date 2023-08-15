#include "dog.h"
#include <stdio.h>
/**
  * print_dog - Print a type struct dog
  * @dog: Strust type dog
  * @d: Pointer to the dog
  * Return: Nothing on success
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
			printf("Age: %6f\n", d->age);
			printf("Owner: %s\n", d->owner);
		else if (d->owner == NULL)
			printf("Name: %s\n", d->name);
			print("Age: %6f\n", d->age);
			printf("(nil)\n");
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %6f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
	else
		printf("Invalid pointer, dog does not exist\n");
}
