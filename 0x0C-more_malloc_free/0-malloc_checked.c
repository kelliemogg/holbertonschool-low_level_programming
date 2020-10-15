#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - malloc
 * description: malloc checked
 * @b: variable
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
