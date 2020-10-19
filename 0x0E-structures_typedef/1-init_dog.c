#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - my dog
 * description: name, age, owner
 * @d: my dog
 * @name: dog name
 * @age: dog age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
d->name = name;
d->age = age;
d->owner = owner;
	}
}
