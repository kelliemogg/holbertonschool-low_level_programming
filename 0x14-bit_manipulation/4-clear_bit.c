#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - clear bit
 * description: clear
 * @n: n
 * @index: index
 * Return: 1, -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n)
		return (-1);

	*n = *n & (~(1 << index));
	return (1);
}
