#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - number of arguments
 * description: passed into the program
 * @argc: argc
 * @argv: argv
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
