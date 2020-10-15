#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - calloc
 * description: calloc
 * @nmemb: nmemb
 * @size: size
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < nmemb; x++)
	{}
	return (ptr);
}
