#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a struct dog
 * @d: A pointer to a struct dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
