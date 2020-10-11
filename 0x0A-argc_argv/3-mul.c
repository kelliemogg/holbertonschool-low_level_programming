#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * description: multiplies two numbers
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char* argv[])
{
	int i = 1, mul;

	if (argc > 1)
	{
		mul = atoi(argv[i + 1]) * atoi(argv[i]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error \n");
	}
	return (1);
}
