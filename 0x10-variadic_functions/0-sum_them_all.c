#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum
 * description: sum them all
 * @n: n
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index;
	int sum = 0;
	va_list sum_list;

	if (n == 0)
		return (0);

	va_start(sum_list, n);
	for (index = 0; index < n; index++)
		sum += va_arg(sum_list, int);
	va_end(sum_list);
	return (sum);
}
