#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - flip
 * description: flip
 * @n: n
 * @m: m
 * Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count, a, b, i = 0;

	for (i = 0; i >= 0; i--)
	{
		a = (n >> i) & 1;
		b = (m >> i) & 1;
		if (a != b)
			count++;
	}
	return(count);

}
