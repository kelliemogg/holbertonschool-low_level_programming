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
	char *arg;

	va_start(more_list, n);

	for (index = 0; index < n; index++)
	{
		arg = va_arg(more_list, char *);

		if (!arg)
			printf("(nil)");

		else if (separator && index != (n - 1))
			printf("%s%s", arg, separator);

		else if (separator && index == (n - 1))
			printf("%s", arg);

		else if (!separator)
			printf("%s", arg);
	}
	va_end(more_list);
	printf("\n");
}
