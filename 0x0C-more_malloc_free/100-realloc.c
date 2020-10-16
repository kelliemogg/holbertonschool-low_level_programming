#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copy
 * description: copy dat
 * @n: n
 * @dest: dest
 * @src: src
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _realloc - reallocate
 * @ptr: ptr
 * @old_size: old size
 * @new_size: new
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size > old_size)
	{
		new = malloc(new_size);

		if (!new)
			return (NULL);

		_memcpy(new, ptr, old_size);

		free(ptr);
		return (new);
	}

	if (new_size == 0 || ptr != NULL)
	{
		free(ptr);
			return (NULL);
	}

	new = malloc(new_size);

		if (!new)
			return (NULL);

		_memcpy(new, ptr, old_size);

		free(ptr);
		return (new);
}
