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
	free(name);
	free(owner);
	free(my_dog);
}
