#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array range
 * @min: min
 * @max: max
 * Return: arr
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int mm = max - min + 1;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * mm);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < mm; i++, min++)
	{
		arr[i] = min;
	}
	return (arr);
}
