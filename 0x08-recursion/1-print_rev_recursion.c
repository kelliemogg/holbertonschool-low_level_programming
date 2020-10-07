#include "holberton.h"

/**
 * _print_rev_recursion - reverse string
 * description: prints a string in reverse
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
	{
		i++;
		_print_rev_recursion(s + i);
		_putchar(*(s + i));
	}
}
