#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenate
 * description: stringy
 * @s1: string
 * @s2: string2
 * @n: unsigned
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int s1len;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[s1len] != '\0')
		s1len++;

	newstr = malloc((s1len + n + 1) * sizeof(char));

	if (newstr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		newstr[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; i++, j++)
		newstr[i] = s2[j];
	newstr[i + j] = '\0';

	return (newstr);
}
