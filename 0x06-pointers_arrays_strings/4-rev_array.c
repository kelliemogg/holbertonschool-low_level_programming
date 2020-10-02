#include "holberton.h"

/**
 * _strlen - string length
 * description: string length
 * @s: variable
 * Return: count
 */

int _strlen(int *a)
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
	int y;
	int z = (_strlen(a) - 1);

	for (y = 0, n = z; y < n; y++, n--)
	{
		int z = a[y];

		a[y] = a[n];
		a[n] = z;
	}
}
