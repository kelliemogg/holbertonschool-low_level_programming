#include "search_algos.h"
#include <math.h>

/**
* jump_search - search a list by chunks
* description: jumps through list for comparison
* @array: ptr to array
* @size: size of array
* @value: value to search for
* Return: index or -1
*/

int jump_search(int *array, size_t size, int value)
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
