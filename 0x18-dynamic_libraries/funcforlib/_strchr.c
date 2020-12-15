#include "holberton.h"

/**
 * _strchr - stringy
 * description: write a function that locates a char in a string
 * @s: variable for string
 * @c: variable for char
 * Return: pointer, NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
