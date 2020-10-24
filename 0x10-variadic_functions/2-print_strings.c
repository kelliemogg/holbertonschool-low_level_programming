#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print
 * description: print strings
 * @separator: sep
 * @n: n
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list more_list;

	va_start(more_list, n);

	for (index = 0; index < n; index++)
	{
		if (separator && index != (n - 1))
			printf("%s%s", va_arg(more_list, char *), separator);

		else if (separator && index == (n - 1))
			printf("%s", va_arg(more_list, char *));

		else if (!separator)
			printf("%s", va_arg(more_list, char *));

		else
			printf("(nil)");
	}
	va_end(more_list);
	printf("\n");
}
