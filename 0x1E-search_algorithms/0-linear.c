#include "search_algos.h"

/**
* linear_search - one by one search algo
* description: search for a value iteratively
* @array: pointer to an array
* @size: size of array
* @value: value we are looking for
* Return: -1 or value's index
*/

int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	int ctr = 0;

	if (!array)
		return (-1);
	while (i >= 0 && (size_t)i < size)
	{
		printf("Value checked array[%i] = [%i]\n", ctr, array[i]);
		if (array[i] == value)
			return (ctr);
		ctr++;
		i++;
	}
	return (-1);
}
