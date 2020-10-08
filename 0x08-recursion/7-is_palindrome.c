#include "holberton.h"

/**
 * _strlen_recursion - function
 * description: palindrome or not
 * @s: string
 * Return: 1, 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
	return (0);
}

/**
 * _print_rev_recursion - print it
 * description: print in reverse
 * @s: string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
}

/**
 * is_palindrome - palindrome?
 * description: is it a palindrome?
 * @s: string
 * Return: 1, 0
 */

int is_palindrome(char *s)
{
	if (*s == *s)
	{
		return (1);
	}
	return (0);
}
