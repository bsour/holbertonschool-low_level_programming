#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated
 *
 * @d: pointer to struct type dog
 *
 * return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
