#include "holberton.h"

/**
 * print_line - print a line
 * description: print da line
 * @n: underscore
 */

void print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
