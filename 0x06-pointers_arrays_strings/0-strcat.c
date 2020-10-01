#include "holberton.h"

/**
 * _strcat - and away we go
 * description: cat two strings
 * @dest: variable
 * @src: variable
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, i2;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (i2 = 0; src[i2] != '\0'; i2++)
	{}
	i = 0;

	*dest = dest[i] + src[i2];

return (dest);
}
