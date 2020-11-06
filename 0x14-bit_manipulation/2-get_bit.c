#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - get bit
 * description: returns the value
 * @n: n
 * @index: index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i, store, result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			store = 0;
		}
		else if (b[i] == '1')
		{
			store = 1;
		}
		else
			return (0);
		result += store;
		if (b[i + 1] != '\0')
			result = result << 1;
	}
	return (result);
}
