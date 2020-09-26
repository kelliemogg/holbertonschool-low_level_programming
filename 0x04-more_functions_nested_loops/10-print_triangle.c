#include "holberton.h"

/**
 * print_triangle - print
 * description: print a triangle
 * @size: size of stuff
 * Return: 0
 */

void print_triangle(int size)
{
	int x;
	int i;

	for (x = 0; x < size; x++)
	{
		for (i = size - 1; i > x; --i)
		{
			_putchar(' ');
		}
		for (i = 0; i <= x; i++)
			_putchar('#');

		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
