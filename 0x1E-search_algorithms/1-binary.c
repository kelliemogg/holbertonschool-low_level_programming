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
	int mid;
	int right;

	if (!array)
		return (-1);
	for (loop = 0; loop >= 0 && (size_t)loop < size; loop++)
	{
		if (loop >= 0 && (size_t)loop < size - 1)
			right++;
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		for (loop = 0; loop >= 0 && (size_t)loop < size; loop++)
		{
			if (loop >= 0 && (size_t)loop < size - 1)
			{
				printf("%d, ", array[loop]);
				right++;
			}
			else
			{
				printf("%d\n", array[loop]);
			}
		}
		mid = left + (right - 1) / 2;
		/*printf("mid = %d\n", mid);*/
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}