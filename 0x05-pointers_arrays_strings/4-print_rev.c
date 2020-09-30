#include "holberton.h"

/**
 * print_rev - reverse print
 * description: printing a reverse string
 * @s: stranggggg
 * Return: 0
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
		for (x--; x >= 0; x--)
			_putchar(s[x]);

	_putchar('\n');
}
