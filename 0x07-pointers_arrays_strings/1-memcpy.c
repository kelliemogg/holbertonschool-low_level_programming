#include "holberton.h"

/**
 * _memcpy - copy some memory
 * description: copy some memory to other memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: unsigned integer
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

		src[i] = dest[i];

	return (dest);
}
