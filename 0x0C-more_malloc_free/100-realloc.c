#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate
 * @ptr: ptr
 * @old_size: old size
 * @new_size: new
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
}
