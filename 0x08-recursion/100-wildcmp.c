#include "holberton.h"

/**
 * wildcmp - compares
 * description: compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 1,0
 */

int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	else
		return (0);
}
