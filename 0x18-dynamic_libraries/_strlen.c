#include "holberton.h"

/**
 * _strlen - string length
 * description: cat two strings
 * @s: variable
 * Return: pointer to dest
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
