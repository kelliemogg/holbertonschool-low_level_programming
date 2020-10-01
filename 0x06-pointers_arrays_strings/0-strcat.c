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
	int i, i2, x;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (i2 = 0; src[i2] != '\0'; i2++)
	{}

	for (x = 0; x <= i2; x++)
	{
	*(dest + (i + x)) = *(src + x);
	}
return (dest);
}
