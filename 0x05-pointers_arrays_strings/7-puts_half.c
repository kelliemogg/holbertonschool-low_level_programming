#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - counts the number of characters in a string
 * @s: This is a pointer to a string
 * Return: length of string
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

/**
 * puts_half - prints half of the string
 * @str: string of characters
 * Return: void
 */

void puts_half(char *str)
{
	int count = _strlen(str);
	int a;
	int b;
	int c;

	if (count % 2 == 0)
	{
		c = count / 2;

		for (a = c; str[a] != '\0'; a++)
			_putchar(str[a]);
	}
	else
	{
		c = (count - 1) / 2;
		for (b = c + 1; str[b] != '\0'; b++)
			_putchar(str[b]);
	}
	_putchar('\n');
}
