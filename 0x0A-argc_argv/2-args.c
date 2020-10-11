#include "holberton.h"

/**
 * main - main
 * description: print arguments
 * @argv: argv
 * @argc: argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
