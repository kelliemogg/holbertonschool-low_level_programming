#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicate
 * description: duplicate string
 * @str: string to copy
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
		duplicate = malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		duplicate[i] = str[i];
}
