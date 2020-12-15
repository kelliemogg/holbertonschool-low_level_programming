#include "holberton.h"

/**
 * _strncat - and away we go
 * description: cat two strings
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int srclen = _strlen(src);
	int destlen = _strlen(dest);

	for (i = 0; i <= srclen && i < n; i++)
		dest[destlen + i] = src[i];

	return (dest);
}
