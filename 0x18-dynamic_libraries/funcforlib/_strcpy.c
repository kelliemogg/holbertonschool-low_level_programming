#include "holberton.h"

/**
 * _strcpy - copies a string to another pointer
 * @dest: copying to this pointer
 * @src: input string
 * Return: void
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int count = _strlen(src);

	for (i = 0; i <= count; i++)
		dest[i] = src[i];

	return (dest);
}
