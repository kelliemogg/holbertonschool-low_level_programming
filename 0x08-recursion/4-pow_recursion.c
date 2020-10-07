#include "holberton.h"

/**
 * _pow_recursion - function for returning a value
 * description: return value of x to the power of y
 * @x: original variable
 * @y: variable which x will be raised to
 * Return: value of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	if (y == 0)
		return (1);
	else
		return (-1);
}
