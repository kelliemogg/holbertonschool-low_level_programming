#include "holberton.h"

/**
 * _strcmp - and away we go
 * description: strcmp
 * @s1: variable
 * @s2: variable
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (s2[i] > s1[i])
		return (s1[i] - s2[i]);
	else if (s1[i] > s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}
