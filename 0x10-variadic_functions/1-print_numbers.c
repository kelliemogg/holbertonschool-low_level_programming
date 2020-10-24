#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - print
 * description: print numbers
 * @separator: sep
 * @n: n
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list num_list;

	va_start(num_list, n);
	for (index = 0; index < n; index++)
	{
		if (separator != NULL && index != (n - 1))
			printf("%i%s", va_arg(num_list, int), separator);
		else
			printf("%i", va_arg(num_list, int));
	}
		printf("\n");
		va_end(num_list);
}
