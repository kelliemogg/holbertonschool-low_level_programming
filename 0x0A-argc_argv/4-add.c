#include "holberton.h"
#include <stdlib.h>

/**
 * main - main
 * description: adds positive numbers
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) < '0' || atoi(argv[i]) > '9')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
