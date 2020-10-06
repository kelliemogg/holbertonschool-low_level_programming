#include "holberton.h"

/**
 * _strstr - locates a substring
 * description: locates a substring
 * @haystack: variable
 * @needle: variable
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
				return (needle);
		}
	}
	return ('\0');
}
