#ifndef DOG_H
#define DOG_H
/**
  * struct dog - Dog structure
  * @name: Pointer to dog name
  * @age: Age of dog
  * @owner: Pointer to dog owner
  *
  * Description: Structure to create a dog object
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
#endif
