#include "holberton.h"

/**
 * _memset - filling memory
 * description: filling memory
 * @s: memory area
 * @b: constant byte
 * @n: amount of memory to be filled
 * @i: unsigned
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; (unsigned)s[i] <= n; i++)
		s[i] = b;
	return (s);
}
