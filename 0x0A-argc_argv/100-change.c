#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * description: prints change
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	if  (argc != 2)
	{
		printf("Error\n");
	}
	if (argc < 0)
	{
		printf("0\n");
	}
	return (0);
}
