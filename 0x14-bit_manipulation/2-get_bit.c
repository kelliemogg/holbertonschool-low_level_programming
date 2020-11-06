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
	unsigned int y;

	if (index > 64)
		return (-1);
	y = (n >> index) & 1;
	return(y);
}
