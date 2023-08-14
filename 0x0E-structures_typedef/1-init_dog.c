#include "main.h"
/**
  * init_dog - Initialize a variable of type stuct dog
  * @d: Pointer to the struct dog
  * @name: Pointer to the dog name
  * @age: Dog age
  * @owner: Dog owner
  * Return - Nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog my_dog;

	my_dog = &d;
	my_dog->name = &name;
	my_dog->age = age;
	my_dog->owner = owner;
}
