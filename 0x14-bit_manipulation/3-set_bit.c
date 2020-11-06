#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * set_bit - set bit
 * description: set bit
 * @n: n
 * @index: index
 * Return: 1, -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n)
		return (-1);

	*n = *n | 1 << index;
	return (1);
}
