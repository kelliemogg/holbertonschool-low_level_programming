#include "holberton.h"

/**
 * puts_half - put it down
 * description: lol at the presidential debate
 * @str: stringgg
 * Return: 0
 */

void puts_half(char *str)
{
	int len = 0, half;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		while (half <= len)
		{
			half = len / 2;
			_putchar(str[half]);
			half++;
		}
	}
	else
	{
		half = (len - 1) / 2;
		while (half <= len)
		{
			_putchar(str[half]);
			half++;
		}
	}
	_putchar('\n');
}
