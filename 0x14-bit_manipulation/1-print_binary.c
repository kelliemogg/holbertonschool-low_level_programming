#include "holberton.h"
#include <stdlib.h>

/**
 * print_binary - print
 * description: print the binary rep
 * @n: numb
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	int x = 0;

	for (i = 1 << 8; i > 0; i = i / 2)
	{
		x = (n & i) + '0';
		if (x == 0)
			break;
		if (x > 0)
			_putchar(x);
	}
}
