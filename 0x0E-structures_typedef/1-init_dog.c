#include "dog.h"
#include <stdio.h>
/**
  * init_dog - Initialize a variable of type struct dog
  * @d: Pointer to the struct dog
  * @dog: Dog struct
  * @name: Pointer to the dog name
  * @age: Dog age
  * @owner: Dog owner
  * Return - Nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
		return;
}

