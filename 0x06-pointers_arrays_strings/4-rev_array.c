#include "holberton.h"

/**
 * _strlen - string length
 * description: string length
 * @s: variable
 * Return: count
 */

int _strlen(char *a)
{
	int count = 0;

	while (a[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * reverse_array - and away we go
 * description: reverse an array
 * @a: variable
 * @n: variable
 * Return:
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;
	int z = (_strlen(a) - 1);

	for (y = 0; x = z; y < x; y++, x--)
	{
		int z = a[y];

		a[y] = a[x];
		a[x] = z;
	}
}
