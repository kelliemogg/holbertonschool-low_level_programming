#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * char_func - char
 * @pizza_list: pl
 * Return: void
 */
void char_func(va_list pizza_list)
{
	printf("%c", va_arg(pizza_list, int));
}
/**
 * float_func - float
 * @pizza_list: pl
 * Return: void
 */
void float_func(va_list pizza_list)
{
	printf("%f", va_arg(pizza_list, double));
}
/**
 * int_func - int
 * @pizza_list: pl
 * Return: void
 */
void int_func(va_list pizza_list)
{
	printf("%i", va_arg(pizza_list, int));
}
/**
 * string_func - string
 * @pizza_list: pl
 * Return: void
 */
void string_func(va_list pizza_list)
{
	char *string;
	string = va_arg(pizza_list, char *);

	if (!string)
		string = "(nil)";
	printf("%s", string);
}
/**
 * print_all - print all
 * description: print
 * @format: format
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int inner = 0, outer = 0;
	va_list pizza_list;
	char *comma = "";
	linda j[] = {
		{'c', char_func},
		{'f', float_func},
		{'i', int_func},
		{'s', string_func},
		{'\0', NULL}
	};
	va_start(pizza_list, format);

	while (format[outer] && format)
	{
		inner = 0;
		while (inner < 4)
		{
			if (j[inner].x == format[outer])
			{
				printf("%s", comma);
				j[inner].eat(pizza_list);
				comma = ", ";
			}
			inner++;
		}
		outer++;
	}
	printf("\n");
	va_end(pizza_list);
}
