#include "holberton.h"

/**
 * _strpbrk - searches a string
 * description: searches a string
 * @s: variable
 * @accept: variable
 * Return: ptr
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
		if (s[i] == accept[j])
			return (s + i);
		}
	}
	return ('\0');
}
