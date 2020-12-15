#include "holberton.h"

/**
 * _puts - string
 * description: print a string
 * @str: string of
 * Return: 0
 */

void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
