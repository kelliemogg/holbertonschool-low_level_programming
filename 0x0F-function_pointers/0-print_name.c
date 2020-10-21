#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - void function
 * description: prints a name
 * @name: name
 * @f: pointer function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(*f)(name);
}
