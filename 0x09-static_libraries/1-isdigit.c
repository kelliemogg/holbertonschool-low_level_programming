#include "holberton.h"

/**
 * _isdigit - is it a digit
 * description: digit or nah
 * @c: variable
 * Return: 0, 1
 */

int _isdigit(int c)
{
	if (('0' <= c) && (c <= '9'))
		return (1);
	else
		return (0);
}
