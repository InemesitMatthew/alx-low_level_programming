#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog
 * @d: A pointer to a dog structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
