#include "holberton.h"

/**
 * _sqrt_recursion - returns a value
 * description: returns the natural sq root of a number
 * @n: number
 * Return: square
 */

int _sqrt_recursion(int n)
{
	int x = 0;

	return (square(n, x));
}

/**
 * square - square func
 * description: natural square root
 * @x: variable
 * @n: constant
 * Return: x, -1, square
 */

int square(int n, int x)
{
	if ((x * x) == n)
		return (x);

	else if ((x * x) > n)
		return (-1);

	else
		return (square(n, x + 1));
}
