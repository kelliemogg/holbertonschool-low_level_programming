#include "holberton.h"

/**
 * _strspn - length of a prefix
 * description: length of a prefix substring
 * @s: variable
 * @accept: variable
 * Return: numb of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int s2;
	int a2;

	for (a2 = 0; accept[a2]; a2++)
	{
	for (s2 = 0; s[s2]; s2++)
	{
		if (s[s2] == accept[a2])
			break;
	}
	if (!accept[a2])
		break;
	}
	return (s2);
}
