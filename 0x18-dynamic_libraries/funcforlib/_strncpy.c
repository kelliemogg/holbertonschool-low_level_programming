#include "holberton.h"

/**
 * _strncpy - and away we go
 * description: pointers
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srclen = _strlen(src);

	for (i = 0; i <= srclen && i < n; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
