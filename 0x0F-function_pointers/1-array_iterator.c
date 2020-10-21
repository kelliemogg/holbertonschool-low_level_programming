#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - ay i
 * description: exe a function
 * @array: pointer array
 * @size: type size_t
 * @action: pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != NULL)

	for (x = 0; x < size; x++)
		(*action)(array[x]);
}
