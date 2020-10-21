#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - aye aye
 * description: search for an int
 * @array: array
 * @size: size
 * @cmp: cmp
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int res = 0;
	int x;

	if (cmp == NULL)
		return (-1);

	if (array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		res = (*cmp)(array[x]);

		if ((x == (size - 1)) && (res != 1))
			return (-1);

		if (res == 1)
			break;
	}
	return (x);
}
