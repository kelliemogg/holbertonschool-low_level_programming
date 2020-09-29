#include "holberton.h"

/**
 * swap_int - swapping stuff
 * description: pointers
 * @a: ayy
 * @b: baaaay
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
