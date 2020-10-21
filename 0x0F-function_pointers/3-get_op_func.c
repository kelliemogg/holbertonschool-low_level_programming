#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - proto
 * description: select correct function
 * @s: operator passed
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

}
