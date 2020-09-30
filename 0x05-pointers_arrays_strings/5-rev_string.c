#include "holberton.h"

/**
 * _strlen - length of string
 * description: write a function
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; ++x)
	{
	}
	return (x);
}

/**
 * rev_string - reverse that string
 * description: reverse it
 * @s: variable
 * Return: 0
 */

void rev_string(char *s)
{
	int x;
	int y;
	int z = (_strlen(s) - 1);

	for (y = 0, x = z; y < x; y++, x--)
	{
		int z = s[y];

		s[y] = s[x];
		s[x] = z;

	}
}
