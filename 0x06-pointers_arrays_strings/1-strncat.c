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
	int i, i2;

	for (i = 0; i < n && dest[i] != '\0'; i++)
	{}
	for (i2 = 0; i2 < n && src[i2] != '\0'; i2++)
	{}
	i = 0;
	*dest = dest[i] + src[i2];
	return (dest);
}
