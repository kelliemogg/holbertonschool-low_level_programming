#include "holberton.h"

/**
 * _isalpha - alpha
 * @c: this is about the alphabet
 * description: alphabet
 * Return: 1, 0
 */

int _isalpha(int c)
{
	if ((('a' <= c) && (c <= 'z')) || (('A' <= c) && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
