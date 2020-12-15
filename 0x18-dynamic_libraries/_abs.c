#include "holberton.h"

/**
 * _abs - absolute
 * @r: variable
 * description: computing absolute values
 * Return: 0
 */

int _abs(int r)
{
	if (r > 0)
		return (r);
	else if (r < 0)
		return (r * -1);
	else
		return (0);
}
