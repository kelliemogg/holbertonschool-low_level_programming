#include "holberton.h"

/**
 * _puts_recursion - print a string
 * description: write a function that prints a string, followed by a new line
 * @s: string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(s + i);
	}
	else
		_putchar('\n');
}
