#include "holberton.h"
#include <stdio.h>

/**
 * get_endianness - get it
 * description: checks the endianness
 * Return: void
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
