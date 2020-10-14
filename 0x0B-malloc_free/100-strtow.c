#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - strtow
 * description: strtow
 * @str: string
 * Return: NULL
 */

char **strtow(char *str)
{
	int i;
	int buffer = 0, length = 0;
	char **ptr;

	if (str == NULL)
		return (NULL);

	if (str == "")
		return (NULL);

	for (i = 0; ptr[i]; i++)
		length--;
	ptr = (char *)malloc(length * sizeof(char));
	if (!ptr)
		return (NULL);
	for (i = 0; str[i]; i++)
		return (ptr);

}
