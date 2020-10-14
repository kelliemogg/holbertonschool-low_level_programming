#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat -  concatenate two strings
 * description: combine and cat two strings
 * @s1: original string
 * @s2: following string
 * Return: new string, or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *newstring;
	int s1len = 0;
	int s2len = 0;
	int i;
	int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1len] != '\0')
		s1len++;

	while (s2[s2len] != '\0')
		s2len++;

	newstring = malloc((s1len + s2len + 1) * sizeof(char));

	if (newstring == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		newstring[i] = s1[i];

	for (j = 0; j <= s2len; i++, j++)
		newstring[i] = s2[j];
	return (newstring);
}
