#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all
 * description: print
 * @format: format
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list pizza_list;
	int index = 0;
	int num = va_arg(pizza_list, int);
	char *string = va_arg(pizza_list, char *);
	int c = va_arg(pizza_list, int);
	double dbl = va_arg(pizza_list, double);

	va_start(pizza_list, format);

	if (format[index] != '\0')
	{
		switch(format[index])
		{
		case 'c':
			printf("%c", c);
			break;
		case 'i':
			printf("%i", num);
			break;
		case 'f':
			printf("%f", dbl);
			break;
		case 's':
			printf("%s", string);
			break;
		default:
			break;
		}
	}
		va_end(pizza_list);
		return;
}
