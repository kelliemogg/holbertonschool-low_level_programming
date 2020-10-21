#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - void function
 * description: prints a name
 * @name: name
 * @char: char
 * @f: pointer function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}