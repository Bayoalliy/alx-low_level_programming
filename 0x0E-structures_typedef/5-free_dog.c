#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free struct from memory.
 * @d: pointer to struct.
 */

void free_dog(dog_t *d)
{
	free(d);

	free(d->name);
	free(d->owner);
}


