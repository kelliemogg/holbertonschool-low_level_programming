#include "holberton.h"

/**
 * print_diagonal - slanty line
 * description: slanty line
 * @n: variables
 */

void print_diagonal(int n)
{
	int r;
	int s;

	for (r = 0; r < n; r++)
	{
		for (s = 0; s < r; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	_putchar('\n');
}
