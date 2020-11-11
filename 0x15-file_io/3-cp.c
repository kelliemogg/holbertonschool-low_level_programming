#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int opnfile, opncpy;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit (97);
	}
	opncpy = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (opncpy == -1)
		return (error_helper('b', opncpy, argv[2]));

	opnfile = open(argv[1], O_RDWR);
	if (opnfile == -1)
		return (error_helper('c', opnfile, argv[1]));
}

/**
 * error_helper - errors
 * description: coll of error conditionals
 * Return: numbers
 */

int error_helper(char error, int check, char *filename)
{
	if (error == 'b')
        {
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
                return (98);
        }
	if (error == 'c')
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		return (99);
	}
	if (error == 'd')
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", check);
		return(100);
	}
}
