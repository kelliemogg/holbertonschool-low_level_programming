#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * main - main
 * description: main file
 * @argc: argc
 * @argv: argv
 * Return: op_add
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*doug)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	doug = get_op_func(argv[2]);
	if (doug == NULL || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	b = atoi(argv[3]);
	a = atoi(argv[1]);
	if ((*argv[2] == '/' || *argv[2] == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	doug = get_op_func(argv[2]);

	printf("%d\n", doug(a, b));
	return (0);
}
