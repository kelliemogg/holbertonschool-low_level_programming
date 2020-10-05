#include "holberton.h"

/**
 * _memset - filling memory
 * description: filling memory
 * @s: memory area
 * @b: constant byte
 * @n: amount of memory to be filled
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; (unsigned int)s[i] <= n; i++)
		s[i] = b;
	return (s);
}
