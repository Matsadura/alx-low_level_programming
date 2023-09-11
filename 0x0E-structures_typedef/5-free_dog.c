#include "dog.h"

/**
 * free_dogs- frees dogs from captivity
 * @d: pointer to the captive dogs
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
