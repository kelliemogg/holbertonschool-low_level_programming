#include "holberton.h"

/**
 * _isupper - uppercase
 * description: checking for uppercase
 * @c: variable
 * Return: 0, 1
 */

int _isupper(int c)
{
	if (('A' <= c) && (c <= 'Z'))
		return (1);
	else
		return (0);
}
