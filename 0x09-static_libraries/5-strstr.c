#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * description: locates a substring
 * @haystack: variable
 * @needle: variable
 * Return: needle, NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
