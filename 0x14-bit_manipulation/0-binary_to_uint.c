#include "holberton.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * binary_to_uint - binary to int
 * description: convert a binary
 * @b: variable
 * Return: new numb or 0
 */

unsigned int binary_to_uint(const char *b)
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
