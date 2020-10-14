#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - array of chars
 * description: chars with spec char
 * @size: size of the array
 * @c: character to initialize
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int itr;

	if (size == 0)
		return (NULL);

	string = malloc(sizeof(char) * size);

	if (!string)
		return (NULL);

	for (itr = 0; itr < size; itr++)
		string[itr] = c;

	return (string);
}
