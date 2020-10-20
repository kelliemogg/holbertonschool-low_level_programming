#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dog
 * description: freeeeeee
 * @d: d
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
