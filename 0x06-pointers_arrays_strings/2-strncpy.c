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
	for (n = 0; src[n] != 0; n++)
	{}
	*dest = src[n];
	return (dest);
}
