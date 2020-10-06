#include "holberton.h"

/**
 * times_table - void
 *
 * Description: Display the times table up to 9
 *
 * Return: void
 */

void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z > 9)
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else
				_putchar(z + '0');

			if (y < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (x * (y + 1) <= 9)
					_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
