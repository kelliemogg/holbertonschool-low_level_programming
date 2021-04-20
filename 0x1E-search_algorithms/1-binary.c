#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array
* description: more effecient than linear search
* @array: pointer to an array
* @size: size of array
* @value: value we are looking for
* Return: -1 or value's index
*/

int binary_search(int *array, size_t size, int value)
{
	/* mid is the index */
	int left = 0;
	int loop;
	int mid = 0;
	int right = 0;

	if (!array)
		return (-1);
	right = (int)size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (loop = left; loop <= right; loop++)
		{
			if (loop < right)
			{
				printf("%d, ", array[loop]);
			}
			else
			{
				printf("%d\n", array[loop]);
			}
		}
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (array[mid]);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
