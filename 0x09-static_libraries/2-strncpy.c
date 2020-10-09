#include "holberton.h"

/**
 * _strlen - string length
 * description: string length
 * @s: variable
 * Return: count
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

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
