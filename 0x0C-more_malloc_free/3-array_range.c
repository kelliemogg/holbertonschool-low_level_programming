#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - array range
 * @min: min
 * @max: max
 * Return: Null
 */

int *array_range(int min, int max)
{
	char *arr;

	if (min > max)
		return (NULL);

	arr = malloc((min + max) * sizeof(char));

	return (arr);
}
